#include<stdio.h>
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
int main(void)
{

    int N = 0;
    printf("몇개의 별을 찍으실건가요?");
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        for(int a = 1; a <=i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}