#include<stdio.h>

//두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

int main(void)
{
    int A=0,B=0;
    printf("두 정수 A와 B를 입력하세요.");
    scanf("%d %d",&A,&B);
    printf("%f",(float)A/B);
    
    return 0;
}