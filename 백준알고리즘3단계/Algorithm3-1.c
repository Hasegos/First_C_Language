#include<stdio.h>

// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.
// 출력 형식에 맞춰서 출력하면 된다.

int main(void)
{   
    int N=0;     
    scanf("%d",&N); // 입력 받기
    for(int i=1; i<10; i++) // 1~9까지 입력받은 수랑 곱하는거 반복.
    {
        printf("%d * %d = %d\n",N,i,N*i); // 반복하는거 하나씩 출력
    }
    
    return 0;
}