#include<stdio.h>

//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
//������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�

int main(void)
{
    // ��� 1
    int N,l;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++)
    {
        for(int k = N; k > i; k--)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // ��� 2
    int i = 1;
    while (i <= N)
    {
        l = N;
        while ( l > i)
        {
            printf(" ");
            l--;
        }        
        int j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i ++;       
    }
    
    return 0;
}