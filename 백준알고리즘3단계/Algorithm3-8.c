#include<stdio.h>

//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main(void)
{
    int  T = 0, A  = 0, B = 0;    
    scanf("%d",&T);
    for(int i = 1; i <= T; i++)
    {       
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d + %d = %d\n",i,A,B,A+B);
    }

    return 0;
}