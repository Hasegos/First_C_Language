#include<stdio.h>

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    int A=0, B=0,T=0;    
    scanf("%d",&T);
    for(int i=1; i <= T; i++) // �Է��� Ƚ������ �ݺ�
    {
        scanf("%d %d",&A,&B); // �� ���̽����� �Է¹ް�
        int C = A + B; // ���Ѱ� ������
        printf("%d\n",C); // ���
    }

    return 0;
}