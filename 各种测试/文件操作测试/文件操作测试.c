#include <stdio.h>


int main()
{

    FILE *a; //定义文件类型指针

    a = fopen("测试文本.txt","r"); //打开文件(r为只读，w为只写，r+为读写)

    if(a == NULL)
    {
        printf("错误!\n");
    }
    else
    {
        printf("打开成功!\n");

    }

    char ch;

    ch = fgetc(a);

    putchar(ch);

    fclose(a); //关闭文件

    return 0;
}