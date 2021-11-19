#include<stdio.h>

void reback(int i); // 10진수를 2진수로 바꾸기위해 reback 함수 선언
int main(void) 
{ 
    reback(16); // reback 함수에 파라미터 16주기
 
    return 0; // 함수 호출 후 종료
}
void reback(int i) //  정의
{
    while (1) // 무한 반복
    {
        int a = 0 , b = 0; // 몫과 나머지 해당하는 각각a ,b 선언
        a = i % 2; // a 에다 나머지 넣기
        b = i / 2; // b 에다 몫을 넣기
        printf("%d\n",a); // 나머지 출력
        i = b; // 다시 파라미터에 몫을 나눈걸 넣기
        if(b == 0)  // 파라미터가 0일때
        {
            break; // 종료
        }
    }
        
}