#include<stdio.h>
//정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
int main(void)
{
    int X = 0 , N = 0;
    printf("두 정수 X 와 N을 입력하세요");
    scanf("%d %d",&N,&X);
    int a[10000] ={0};   
    for(int i=0; i<N; i++)
    {
        scanf("%d",a[i]);
        if(X > a[i])
        {
            printf("%d\n",a[i]);
        }
       
    }

    return 0;
}

