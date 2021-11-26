#include<stdio.h>
// 1.cm 입력 m 로 출력하는 함수
// 2.밑수와 지수를 입력받아 지수 연산결과를 출력하는 함수
// 3.입력받은 수가 소수인지 확인하는 함수
void m(int m);  // 함수 1번
void jisu_mitsu(int mitsu,int jisu); // 함수 2번
void sosu(int num); // 함수 3번
int main(void)
{
    // int N = 0;
    // printf("몇 cm 인지 입력하세요");
    // scanf("%d",&N);
    // m(N);

    // int jisu = 0 , mitsu = 0;
    // printf("밑수와 지수를 입력하세요");
    // scanf("%d %d",&mitsu, &jisu);
    // jisu_mitsu(mitsu,jisu);

    int N = 0;
    printf("수를 입력하세요");
    scanf("%d",&N);
    sosu(N);

    return 0;
}
void m(int m) // 1번 함수 정의
{
    float miteo = 0;
    miteo = m * 0.01;
    printf("%.2f m 입니다.",miteo);
}
void jisu_mitsu(int mitsu,int jisu) // 2 번함수 정의
{
    int result = 1;
    for(int i = 0; i < jisu; i++)
    {
        result = result * mitsu;
    }
    printf("%d",result);
}
void sosu(int num)  // 3 번함수 정의
{
    int check = 0; // 소수 인지 판별
    for(int i = 2; i<=num /2; i++) // 소수가아닌 인수를 가진 수 중에서 자기자신의 1/2 보다 넘는 수는 없다
    {
        if(i % num == 0) // 소수 아닌수 판별
        {
            check  = 1;
            break;
        }
    }

    if(num ==1)
    {
        printf("%d 소수가 아닙니다",num);
    }
    else
    {
        if(check ==1)
        {
            printf("%d 소수가 아닙니다.",num);
            check = 0; // 초기화 
        }
        else
        {
            printf("%d 소수 입니다",num);
            
        }
    }
}