#include<stdio.h>

int main(void)
{

    int A=0,B=0;
    printf("두 자연수 A와 B를 입력하세요.");
    scanf("%d %d",&A,&B);

    printf("%d\n",A+B);    
    printf("%d\n",A-B);    
    printf("%d\n",A*B);    
    printf("%d\n",A/B);
    printf("%d",A%B);

    return 0;
}