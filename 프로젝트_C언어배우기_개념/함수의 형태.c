#include<stdio.h>


// 반환형 함수이름(전달값)
// 함수 종류
// 반환값이 없는 함수
void function_without_return(); // 반환값 없는 함수
int function_with_return(); // 반환값 있는 함수
void p(int num); // 같은 문장을 위해  만든 p함수
void function_without_params(); // 파라미터가 없는 함수
void function_with_params(int num1, int num2, int num3); // 파라미터가 있는 함수
int apple(int tot, int ate); // 전체 total 개에서 ate개를 먹고 남은 개수 반환
int add(int num1, int num2); // 정수형으로 2개 전달값 반환
int sub(int num1, int num2); // 빼기
int mul(int num1, int num2); // 곱하기
int div(int num1, int num2); // 나누기

int main(void)
{   


    // 반환값이 없는 함수
    // function_without_return();

    // 반환값이 있는 함수
    // int ret = function_with_return();
    // p(ret);

    // 파라미터(전달값)가 없는 함수
    // function_without_params();

    // 파리미터(전달값)가 있는 함수
    // function_with_params(101, 203, 23);

    // 파라미터(전달값)도 받고, 반환값이 있는 함수
    // int ret = apple (5,2);  // 5개의 사과중에서 2개를 먹었어요
    // printf("사과 5개 중에서 2개를 먹으면? %d 개가 남아요.\n",ret);
    // printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가 남아요.\n",5,2,apple(5,2));


    // 계산기 함수
    int num = 2;
    num = add(num,3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);

    return 0;
}
void function_without_return()
{
    printf("반환값이 없는 함수입니다.");
}
int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}
void p(int num)
{
    printf("num는 %d 입니다.\n",num);
}
void function_without_params()
{
    printf("전달값이 없는 함수입니다.");
}
void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d %d %d 입니다\n",num1,num2,num3);
}
int apple(int tot, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return tot - ate;
}
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}