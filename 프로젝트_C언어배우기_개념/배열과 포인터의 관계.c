#include<stdio.h>

int main(void)
{
    // 배열 ?
    int arr[3] = {5, 10, 15};
    int *ptr = arr;   // 즉 ptr 과 arr은 똑같은 것으로 볼 수 있다.
    for(int i=0; i<3; i++)
    {
        printf("배열 arr[%d] 의 값: %d\n",i,arr[i]);
    }
    for(int i=0; i<3; i++)
    {
        printf("포인터 ptr[%d] 의 값: %d\n",i,ptr[i]); // 배열의 각 해당 주소를 ptr은 가지고있고 그걸 출력하기위해서 
    }                                                 // ptr에 배열을 넣어줘야한다.              
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for(int i=0; i<3; i++)
    {
        //printf("배열 arr[%d] 의 값: %d\n",i,arr[i]);
        printf("배열 arr[%d] 의 값: %d\n",i,*(arr+i)); // arr 은 가장 첨에 시작되는 arr 주소 
        
    }
    for(int i=0; i<3; i++)
    {
        //printf("포인터 ptr[%d] 의 값: %d\n",i,ptr[i]);
        printf("포인터 ptr[%d] 의 값: %d\n",i,*(ptr+i)); // 또 다른 방법으로 표현
    }
    // *(arr + i)  ==  arr[i] 똑같은 표현
    // arr ==  arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
    printf("arr 자체의 값 : %d\n",arr);
    printf("arr[0] 의 주소 : %d\n",&arr[0]);

    printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n",*arr);  // *(arr + 0)
    printf("arr[0] 의 실제 값 : %d\n",*&arr[0]);

    // *& : 이변수의 주소의 값을 말하는거라서  같이있으면 아무것도 없는 것과 같다 
    // & 는 주소이며, * 는 그 주소의 값이기 때문에, *& 는 상쇄한다.
    printf("arr[0] 의 실제 값 : %d\n",*&*&*&*&*&*&*&*&arr[0]);
    printf("arr[0] 의 실제 값 : %d\n",arr[0]);
    

    return 0;
}