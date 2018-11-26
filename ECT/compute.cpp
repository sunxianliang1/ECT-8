#include "compute.h"
#include<QDir>
#include <QApplication>
compute::compute()
{
    bool a=QDir::setCurrent(QCoreApplication::applicationDirPath());
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setWindowTitle(QObject::tr("严重错误"));
    QFile in1("calibration/LMC.txt");
    if(!in1.open(QFile::ReadOnly|QFile::Text))
    {
        msgBox.setText(QObject::tr("丢失灵敏场数据(LMC.txt)!"));
        msgBox.exec();
        return;
    }
    QTextStream  inda(&in1);
    for(int j=0;j<664;j++)
        for(int i=0;i<28;i++)
            inda>>lmc[i][j];

    QFile in2("calibration/empty.txt");
    if(!in2.open(QFile::ReadOnly|QFile::Text))
    {
        msgBox.setText(QObject::tr("丢失空管电容数据(empty.txt)!"));
        msgBox.exec();
        return;
    }
    inda.setDevice(&in2);
    for(int i=0;i<28;i++)
        inda>>fltcapempty[i];

    QFile in3("calibration/efull.txt");
    if(!in3.open(QFile::ReadOnly|QFile::Text))
    {
        msgBox.setText(QObject::tr("丢失满管电容数据(efull.txt)!"));
        msgBox.exec();
        return;
    }
    inda.setDevice(&in3);
    for(int i=0;i<28;i++)
        inda>>fltcapfull[i];
    for(int i=0;i<28;i++)
        cmfm[i]=fltcapfull[i]-fltcapempty[i];


    //*****************************//
        float s1[664];
        float sa[28][664];
    /*  for i=1:664
            S1(i,1)=0;
            for t=1:28
            S1(i,1)=S1(i,1)+SH(t,i);%S1为S的各列累加和
            end
            for j=1:28
            Sl(j,i)=SH(j,i)/S1(i,1);%同列元素的累加和为1，适应于LBP算法中
            end
        end    *******/
        for(int i=0;i<664;i++)
        {
            s1[i]=0;
            for(int j=0;j<28;j++)
            {
                s1[i]+=lmc[j][i];
            }
            for(int j=0;j<28;j++)
            {
                sa[j][i]=lmc[j][i]/s1[i];
            }
        }
    //*****************************//
        float s2[28];
    /*  for i=1:28
            S2(i,1)=0;
            for t=1:ImNodeSize
                S2(i,1)=S2(i,1)+Sl(i,t);%S2为S的各行累加和
            end
            for j=1:ImNodeSize
                Sh(i,j)=Sl(i,j)/S2(i,1);%同行元素的累加和为1，适用于Landweber算法
            end
        end    */
        for(int i=0;i<28;i++)
        {
            s2[i]=0;
            for(int j=0;j<664;j++)
            {
                s2[i]+=sa[i][j];
            }
            for(int j=0;j<664;j++)
            {
                sb[i][j]=sa[i][j]/s2[i];
            }
        }
    //*****************************//
/*  a1=Sh'*Sh;
    a2=eig(a1);
    d=max(a2);
    a=2/d;   */
/*
    float a1[664][664];
        for(int i=0;i<664;i++)
        {
            for(int j=0;j<664;j++)
            {
                a1[i][j]=0;
                for(int k=0;k<28;k++)
                    a1[i][j]+=sb[k][i]*sb[k][j];
            }
        }
  */
        max=31.6312695;//有机玻璃
        //max=5.9566;//水
}
void compute::set(float cm1[])
{
    for(int i=0;i<28;i++)
        cm[i]=cm1[i];
}

void compute::comp()
{
//*****************************//
    float cmfz[28];
    float cmzz[28];
/*  for i=1:28
    Cmfz(i,1)=Cm(i,1)-Cempty(i,1);
    Cmfm(i,1)=Cfull(i,1)-Cempty(i,1);
    Cmzz(i,1)=Cmfz(i,1)/Cmfm(i,1);
    end   */
    for(int i=0;i<28;i++)
    {
        cmfz[i]=cm[i]-fltcapempty[i];
        cmzz[i]=cmfz[i]/cmfm[i];
    }
//*****************************//
/*
    g=Sh'*Cmzz;
    gk=g;      */
    for(int i=0;i<664;i++)
    {
        gk[i]=0;
        for(int j=0;j<28;j++)
            gk[i]+=sb[j][i]*cmzz[j];
    }
//*****************************//
/*  for k=1:50
        gk1=gk-a*Sh'*(Sh*gk-Cmzz);
        for i=1:ImNodeSize
            if gk1(i)<0
                gk1(i)=0;
            elseif gk1(i)>1
                gk1(i)=1;
            end
        end
        gk=gk1;
        end  */
    float  linshi1[28];
    float  linshi2[664];
    float   gk1[664];
    for(int t=0;t<50;t++)
    {
        //sh*gk-Cmzz
        for (int i=0;i<28;i++)
        {
            linshi1[i]=0;
            for(int j=0;j<664;j++)
            {
                linshi1[i]+=sb[i][j]*gk[j];
            }
            linshi1[i]-=cmzz[i];
        }
        //a*Sh'*linshi1
        for(int i=0;i<664;i++)
        {
            linshi2[i]=0;
            for(int j=0;j<28;j++)
            {
                linshi2[i]+=sb[j][i]*linshi1[j];
            }
            linshi2[i]*=max;
        }
        //gk1=gk-linshi2
        for(int i=0;i<664;i++)
        {
            gk1[i]=gk[i]-linshi2[i];
            if (gk1[i]<0)gk1[i]=0;
            if (gk1[i]>1)gk1[i]=1;
            gk[i]=gk1[i];
        }
    }
//*****************************//
}

compute::~compute()
{

}

