#include<stdio.h>

//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
   // ��� 1
    int a, b;
    while (1)
    {
        scanf("%d %d", &a, &b);        
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", a + b);
    }
    // ��� 2
    for(int i = 0;; i++)
    {
        scanf("%d %d", &a, &b);        
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", a + b);
    }

    

    return 0;
}