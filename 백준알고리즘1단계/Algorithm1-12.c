#include<stdio.h>

//(A+B)%C�� ((A%C) + (B%C))%C �� ������?
//(A��B)%C�� ((A%C) �� (B%C))%C �� ������?
//�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    int A=0,B=0,C=0;
    printf("�� �� A,B,C�� �Է��ϼ���.");
    scanf("%d %d %d",&A,&B,&C);    
    // ���
    printf("(A+B)%%C = %d \n",(A+B)%C);
    printf("((A%%B)+(B%%C))%%C = %d \n",((A%B)+(B%C))%C);
    printf("(AXB)%%C = %d \n",(A*B)%C);
    printf("((A%%B)X(B%%C))%%C = %d \n",((A%B)*(B%C))%C);

    return 0;
}