#include<stdio.h>
// ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
int main(void)
{

    int N = 0;
    printf("��� ���� �����ǰǰ���?");
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        for(int a = 1; a <=i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}