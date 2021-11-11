#include<stdio.h>
//문제 : 두 정수 A와 B가 주어졌을때,A와 B를 비교하는 프로그램을 작성하시오

int main(void)
{
    int A=0,B=0;
    printf("두 정수 A와B를 입력하세요");
    scanf("%d %d",&A,&B);
    if(A>B)
    {
        printf(">");
    }
    else if(A<B)
    {
        printf("<");
    }
    else
    {
        printf("=");
    }

    return 0;
}