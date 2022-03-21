#include<stdio.h>

//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// EOF 입력되는게 몇개인지 모를때쓴다
// A 와 B의 값이 존재할 때까지 입력받는다.

int main(void)
{
    // 방법 1
    int a = 1, b = 1;
    while (scanf("%d %d", &a, &b) != EOF)  // EOF : End Of File 이라는 약자로 텍스트 파일의 끝임 
    {                                      // 즉, 우리가 무한대로 빠진걸 종료시킬때 ctrl + z누르는 값(-1)이랑 같음!
        printf("%d\n", a + b);             // 기억하기 
    }  
    return 0;   
 
}