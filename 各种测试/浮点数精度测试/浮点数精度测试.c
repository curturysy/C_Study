#include <stdio.h>

int main()
{

    //float 占用四个存储位
    float a = 3.141592653579;
    printf("%f\n",a);
    //结果:3.141593
    //总结:单精度浮点最多保留小数点后六位，且会被四舍五入



    //double 占用八个存储位
    double b = 3.14159265357;
    printf("%e\n",b);
    //结果:看不懂
    //总结:网上说至少保留小数点后12位



    return 0;
}