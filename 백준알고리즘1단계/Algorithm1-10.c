#include<stdio.h>

int main(void)
{

    int A=0,B=0,C=0;
    printf("세 수 A,B,C를 입력하세요.");
    scanf("%d %d %d",&A,&B,&C);
    
    printf("(A+B)%%C = %d \n",(A+B)%C);
    printf("((A%%B)+(B%%C))%%C = %d \n",((A%B)+(B%C))%C);
    printf("(AXB)%%C = %d \n",(A*B)%C);
    printf("((A%%B)X(B%%C))%%C = %d \n",((A%B)*(B%C))%C);

    return 0;
}