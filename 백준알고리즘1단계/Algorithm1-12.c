#include<stdio.h>

//(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
//(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
//세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

int main(void)
{
    int A=0,B=0,C=0;
    printf("세 수 A,B,C를 입력하세요.");
    scanf("%d %d %d",&A,&B,&C);    
    // 출력
    printf("(A+B)%%C = %d \n",(A+B)%C);
    printf("((A%%B)+(B%%C))%%C = %d \n",((A%B)+(B%C))%C);
    printf("(AXB)%%C = %d \n",(A*B)%C);
    printf("((A%%B)X(B%%C))%%C = %d \n",((A%B)*(B%C))%C);

    return 0;
}