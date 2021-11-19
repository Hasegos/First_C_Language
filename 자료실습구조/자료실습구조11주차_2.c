#include<stdio.h>
//더하기

int add(int i); // add 함수 선언  반환값 존재 파라미터 10존재
int main(void)
{
    printf("1부터 10까지 더한값: %d\n",add(10));  // add 라는 함수에 10 파라미터 넣기

    return 0;
}
int add(int i) // 정의
{
    int k = 0; // 더하기니깐 초기값 0으로 지정
    for(int l = 1; l <= i; l++)  // 1부터 10까지 반복하며
    {
        k = k + l; // 1 2 3 ... 10까지 더하기.
    }
    return k; // 1부터 10까지 더한값 k 다시 반환.
}