#include<stdio.h>
//시험 점수를 입력받아 90 ~ 100점은 A,
// 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D,
// 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

int main(void)
{
    int A=0;
    printf("시험 성적을 입력하세요");
    scanf("%d",&A);
    
    if(A>=90 && A<=100)
    {
        printf("A");
    }
    else if(90>A && A>=80)
    {
        printf("B");
    }
    else if(80>A && A>=70)
    {
        printf("C");
    }
    else if(70>A && A>=60)
    {
        printf("D");
    }
    else if(60>A && A>=0)
    {
        printf("F");
    }
    else
    {
        printf("입력할 수 있는 범위를 초과했습니다.");
    }

    return 0;
}
