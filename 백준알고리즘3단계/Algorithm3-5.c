#include<stdio.h>
//�ڿ��� N�� �־����� ��, 1���� N���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    int N = 0;
    printf("�ڿ��� N ���� �Է��ϼ���.");
    scanf("%d",&N);

    for(int i = 1; i  <= N; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}