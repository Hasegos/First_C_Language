#include<stdio.h>
//N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    int N = 0; // ���� ����
    printf("��� ������ �Է��Ͻðڽ��ϱ�?");
    scanf("%d",&N);
    int min = 1000000; // �ּڰ� ����
    int max = -1000000; // �ִ� ����
    int num = 0; // ���� �Է¹��� ��
    for(int i = 0; i < N; i++)  // �Է¹��� ���� ���� ��ŭ �ݺ�
    {
        scanf("%d",&num); // ���� �Է¹ޱ�
        if(min >= num) // ���� �Է¹��� ���� min ���� ���� ��
        {
            min = num; // min �� �Է¹��� �� �ֱ�
        }
        if(max <= num) // �Է¹��� ���� max ���� Ŭ��
        {
            max = num; // max �� �Է� ���� �� �ֱ�
        }
    
    }
    printf("%d\n",min); // �׸��� ���
    printf("%d\n",max);

    return 0;
}