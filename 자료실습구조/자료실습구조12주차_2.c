#include<stdio.h>
// 함수 포인터 개념
int TestFunc1(int param){return param*2;}  // 자료형 함수이름(매개변수){리턴값} 고정
int TestFunc2(int param){return param*3;}
int add(int num1,int num2){return num1 + num2;}
int sub(int num1,int num2){return num1 - num2;}
int mul(int num1,int num2){return num1 * num2;}

int main(void)
{
    int input =0;
    int (*prTestFunc)(int) = NULL; // 함수 포인터 사용한다는 의미 이고 항상 NULL 로초기화 
                                   // 자료형 포인터 변수(함수 자료형) 
    printf("수를 입력하세요");
    scanf("%d",&input);
    if(input>5)
    {
        prTestFunc = TestFunc1; // TestFunc1 함수 주소를 포인터 변수에 넣는다
    }
    else
    {
         prTestFunc = TestFunc2;
    }
    printf("%d\n",prTestFunc(input)); // 매개변수안에 input 넣은 값을 출력한다.

    int (*pray[3]/*배열 3칸 만들기*/)(int,int)={add,sub,mul}; // 함수 포인터 변수에 배열이 들어간다.
    int result  = 0; //결과            // 아까 매개변수 2개 받는다 했으니 int 형 두개
    for(int  i=0; i<3; i++) // 각 배열 받은 함수를 사용
    {
        result = pray[i](2,1); // 각 배열 받은 함수에 매개변수 주기
        printf("%d\n",result); // 그 결과를 출력
    }
    return 0;

}
