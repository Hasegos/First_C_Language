#include<stdio.h>
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main(void)
{
    int N=0,k=0; // 입력 받을 N 과 누적할 K 변수 설정
    printf("원하는 자연수를 입력하세요.");
    scanf("%d",&N);

    for(int i=1; i<=N; i++) // 1부터 입력받은 수까지 계속 반복
    {
        k+=i; // 해당 수 누적
    }
    printf("%d",k);


    return 0;
}