#include<stdio.h>

int main(void)
{

    int a=0,b=0;
    printf("�μ��� �Է��ϼ���.");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d",a-b);
    else if(b>=a)
    {
        printf("%d",b-a);
    }
    
    return 0;
}