#include<stdio.h>
//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void)
{
    int A = 0, B = 0; // 0 ���� �ʱ�ȭ
    while (1) // ���� �ݺ�
    {
        scanf("%d %d",&A,&B); // �� ���� �Է¹ޱ�
        if(A == 0 && B == 0) // �Ѵ� 0�̸� ����
        {
            break; // ����
        }
        printf("%d\n",A+B); // ���Ѱ� ���
        
    }
    

    return 0;
}