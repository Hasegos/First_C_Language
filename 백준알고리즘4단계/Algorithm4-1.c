#include<stdio.h>
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
int main(void)
{
    int A = 0, B = 0; // 0 으로 초기화
    while (1) // 무한 반복
    {
        scanf("%d %d",&A,&B); // 두 정수 입력받기
        if(A == 0 && B == 0) // 둘다 0이면 종료
        {
            break; // 종료
        }
        printf("%d\n",A+B); // 더한거 출력
        
    }
    

    return 0;
}