#include<stdio.h>

// N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.

int main(void)
{   
   // ��� 1
    int dan;
    scanf("%d",&dan);
    for(int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n",dan,i,dan*i);
    }

    // ��� 2
    int i = 1;
    while (i <=9)
    {
        printf("%d * %d = %d\n",dan,i,dan*i);
        i++;
    }
    
    return 0;
}