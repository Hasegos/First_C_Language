#include<stdio.h>
//두 자연수 A와 B가 주어진다.
// 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.

int main(void)
{
    int A=0,B=0;
    printf("두 정수 A와 B를 입력하세요");
    scanf("%d %d",&A,&B);
    printf("%d",A*B);
    
    return 0;
}