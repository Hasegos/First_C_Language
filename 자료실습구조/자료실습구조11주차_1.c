#include<stdio.h>


int fact(int i); // fact 라는 함수 선언 반환값 존재 파라미터 5 존재
int main(void)
{
    // 이구조를 함수를 이용해서 해결해보자!
    // int i,fact = 1;


    // for(i = 1; i <=5; i++)
    // {
    //     fact = fact * i;
    // }
    // printf("5! = %d\n",fact);

    printf("5! = %d\n",fact(5)); // fact라는 함수 호출 파라미터 5넣기
}
int fact(int i)
{
    int k = 1; //  곱할거라서  초기값 1로 설정
    for(int j = i; j >= 1; j--) // 5, 4, 3, 2, 1 이런식으로 반복 
    {
        k = k * j; // 1 x 5 , 5 x 4 , 20 x 3 으로 가서 120 완성
    }
    return k; // 120 값이있는 k 를 반환해줌 
}