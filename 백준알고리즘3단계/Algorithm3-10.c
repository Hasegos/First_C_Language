#include<stdio.h>

//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
//하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오

int main(void)
{
    int N = 0;
    scanf("%d",&N); // 입력받기
    for(int i = 1; i <= N; i++) // 횟수
    {
        for(int j = N; j > i; j--) // 빈칸을 만들위한 반복 
        {
            printf(" ");
        }
        for(int a = 1; a <= i; a++) //  별 찍기
        {
            printf("*");
        }
        printf("\n"); // 다 하고 나서 줄바꿈
    }
    
    return 0;
}