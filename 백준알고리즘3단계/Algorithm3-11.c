#include<stdio.h>

// ���� N���� �̷���� ���� A�� ���� X�� �־�����.
// �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    // ��� 1
    int x, n, A[10000] = { 0, };
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (x > A[i])
        {
            printf("%d ", A[i]);
        }
    }
    // ��� 2
    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (x > a)
        {
            printf("%d ", a);
        }
    }
    
    return 0;
}

