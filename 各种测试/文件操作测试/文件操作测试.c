#include <stdio.h>


int main()
{

    FILE *a; //�����ļ�����ָ��

    a = fopen("�����ı�.txt","r"); //���ļ�(rΪֻ����wΪֻд��r+Ϊ��д)

    if(a == NULL)
    {
        printf("����!\n");
    }
    else
    {
        printf("�򿪳ɹ�!\n");

    }

    char ch;

    ch = fgetc(a);

    putchar(ch);

    fclose(a); //�ر��ļ�

    return 0;
}