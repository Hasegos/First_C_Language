#include<stdio.h>
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.


int main(void)
{
    int A=0, B=0,T=0;

    printf("몇개의 케이스를 할지 입력하세요.");
    scanf("%d",&T);

    for(int i=1; i <= T; i++) // 입력한 횟수까지 반복
    {
        scanf("%d %d",&A,&B); // 각 케이스마다 입력받고
        int C = A + B; // 더한값 저장후
        printf("%d\n",C); // 출력
    }


    return 0;
}