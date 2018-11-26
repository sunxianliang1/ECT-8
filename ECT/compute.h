#ifndef COMPUTE_H
#define COMPUTE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
# pragma execution_character_set("utf-8")
#endif
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
class compute
{

private:
    float cm[28];
    float cmfm[28];
    float lmc[28][664];
    float sb[28][664];
    float max;
public:
    float fltcapempty[28];
    float fltcapfull[28];
    float gk[664];
    void  set(float cm1[]);
    void  comp();
    compute();
    ~compute();
};

#endif // COMPUTE_H
