#include<stdio.h>

int main(void)
{

    int N=0;
    printf("몇층을 쌓으시겠습니까?"); //몇층 쌓을지 입력받기
    scanf("%d",&N);

    for(int i=1; i <= N; i++) //횟수
    {
        for(int k = N; k > i; k--) // 빈칸 만들기  
        {
            printf(" ");
        }
        for(int j=1; j < i*2; j++) // 쌓기 생각해보니 1 3 5 7 9 이런식으로 2개씩 증가하는걸 볼수있다. 
        {                          // 그래서 최대값을 4 6 8 10 이런식으로 지정시키면 해당 문제를 해결할수있다. 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}