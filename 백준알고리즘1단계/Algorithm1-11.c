#include<stdio.h>

int main(void)
{
    int A=0,B=0;
    printf("세 자리수 A와 B를 입력하세요.");
    scanf("%d %d",&A,&B);

    printf("%d\n",A*(B%10));
    printf("%d\n",A*((B/10)%10));
    printf("%d\n",A*(B/100));
    printf("%d",A*B);


    return 0;
}