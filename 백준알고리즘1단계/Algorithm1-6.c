#include<stdio.h>

//두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.

int main(void)
{
    int a=0,b=0;
    printf("두수를 입력하세요.");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d",a-b);
    else if(b>=a)
    {
        printf("%d",b-a);
    }
    
    return 0;
}