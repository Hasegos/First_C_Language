#include<stdio.h>

//���� : �� ���� A�� B�� �־�������,A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

int main(void)
{
    // ��� 1
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        printf(">");
    }
    else if(a < b)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }

    // ��� 2
    (a > b) ? printf(">") : (a < b) ? printf("<") : printf("==");
    return 0;
}