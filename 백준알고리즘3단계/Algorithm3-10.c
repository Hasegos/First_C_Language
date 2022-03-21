#include<stdio.h>

//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
//하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오

int main(void)
{
    // 방법 1
    int N,l;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++)
    {
        for(int k = N; k > i; k--)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // 방법 2
    int i = 1;
    while (i <= N)
    {
        l = N;
        while ( l > i)
        {
            printf(" ");
            l--;
        }        
        int j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i ++;       
    }
    
    return 0;
}