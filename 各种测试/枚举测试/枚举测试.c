#include <stdio.h>
int main()
{
    enum month {jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec} mon;

    int k ;
    printf("输入一个一到十二的数字:");

    scanf("%d",&k);

    mon = (enum month) k;

    switch(mon)
    {
        case jan: printf("1"); break;
        default : printf("cnm"); 
    }

    return 0 ;
}

    

