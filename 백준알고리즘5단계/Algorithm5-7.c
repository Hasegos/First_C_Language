#include<stdio.h>
// ���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.
// ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.


// �����̽��� ó������
int main(void)
{
    int C = 0;
    printf("�׽�Ʈ ������ �Է��ϼ���");
    scanf("%d",&C);
    for(int i = 0; i < C; i++)
    {    
        int arr[1001] = {0},count = 0, N = 0; // �ʱ�ȭ
        float hap = 0.0,evg = 0.0;    
        printf("�л����� �Է��ϼ���");
        scanf("%d",&N);
        for(int j = 0; j < N; j++)
        {
            printf("������ �Է��ϼ���");
            scanf("%d",&arr[j]);
            hap += arr[j];
        }
        evg = hap/N; // ���
        for(int j = 0; j < N; j++)
        {
           if(evg < arr[j]) // ����ʰ�
           {
               count +=1;
           }
        }
        printf("%.3f%%\n",((float)count/N)*100);

    }
    return 0;
}