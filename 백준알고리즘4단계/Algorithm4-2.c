#include<stdio.h>
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// EOF 입력되는게 몇개인지 모를때쓴다
// A 와 B의 값이 존재할 때까지 입력받는다.
int main(void)
{
    int A = 0 , B = 0;
    while ((scanf("%d %d",&A,&B)!=EOF))
    {
       printf("%d\n",A+B);
       
    }
    
    return 0;
}