#include<stdio.h>

void swap(int a, int b);
void swap_addr(int * a,int * b);
int main(void)
{
    // SWAP
    int a = 10;
    int b = 20;
    printf("a 의 주소 : %d\n",&a);
    printf("b 의 주소 : %d\n",&b);
    //  a 와 b 의 값을 바꾼다.

    printf("Swap 함수 전 == > a: %d,b  : %d\n",a,b);
    swap(a,b);
    //printf("Swap 함수 후 == > a: %d,b  : %d\n",a,b);

    // 값에 의한 복사 (Call by Value)  -> 값만 복사한다는 의미

    // 함수에서 받은 a 와 b의 주소와 mian에서 받은 주소가 다르다!
    // 그럼 해결하는 법은 주소 값자체를 넘기면되지않을까?
    printf("(주소값 전달)Swap 함수 전 == > a: %d,b  : %d\n",a,b);
    swap_addr(&a,&b);
    printf("(주소값 전달)Swap 함수 후 == > a: %d,b  : %d\n",a,b);




    return 0;
}                        // swap 이라는 파라미터에 값만 던져준 의미
void swap(int a, int b)  // 문제점 :바꾼걸 적용해도 안바뀐 내용이된다는점
{                        // 해결 방법: 함수 내에서 해야한다.
    printf("(Swap  함수 내)a 의 주소 : %d\n",&a);
    printf("Swap  함수 내)b 의 주소 : %d\n",&b);

    int temp = a;  
    a = b;
    b  = temp;
    printf("Swap 함수 내 == > a: %d,b  : %d\n",a,b);
  
}


void swap_addr(int * a, int * b)  
{

    int temp = * a;  
    *a = *b;
    *b  = temp;
    printf("(주소값 전달)Swap 함수 내 == > a: %d,b  : %d\n",* a,* b);
  
}