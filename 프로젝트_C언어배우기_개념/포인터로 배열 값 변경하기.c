#include<stdio.h>


void changeArray(int *num1);
int main(void)
{
    // 배열일 때는 변수 자체가 주소가되므로 주소값을 전달후 changeArray함수에서 변경한다.
    // 배열일 때는 ,arr - > 주소
    int arr[3] = {10, 20 ,30};
    //changeArray(arr);
    changeArray(&arr[0]);
    for(int i=0; i < 3; i++)
    {
        printf("%d\n",arr[i]);
    }

    // scanf 에서 &num 과 같이 &를 사용하는 이유? 해당 주소를 받기위해서  

    return 0;
}
void changeArray(int *num1)
{
    num1[2] = 50;
}