#include<stdio.h>

//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    int A = 0  , B = 0, T = 0;    
    scanf("%d",&T);
    for(int i = 1; i <= T; i++)
    {
        scanf("%d %d",&A,&B);
        printf("Case #%d : %d\n",i,A+B);
    }

    return 0;
}