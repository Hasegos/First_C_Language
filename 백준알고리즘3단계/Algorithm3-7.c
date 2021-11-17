#include<stdio.h>
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main(void)
{
    int A = 0  , B = 0, T = 0;
    printf("원하는 테스트 케이스를 입력하시오");
    scanf("%d",&T);
    for(int i = 1; i <= T; i++)
    {
        printf("두 정수 A 와 B 를 입력하시오.");
        scanf("%d %d",&A,&B);
        printf("Case #%d : %d\n",i,A+B);

    }

    return 0;
}