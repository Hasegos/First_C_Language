#include<stdio.h>

//���� ������ �Է¹޾� 90 ~ 100���� A,
// 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D,
// ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    // ��� 1
    int num;
    scanf("%d",&num);
    if(num >= 90 && num <= 100)
    {
        printf("A");
    }
    else if(num >= 80)
    {
        printf("B");
    }
    else if(num >= 70)
    {
        printf("C");
    }
    else if(num >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    // ��� 2
    (num >= 90 && num <= 100) ?  printf("A") : (num >= 80) ? printf("B") : (num >= 70) ? printf("C") : (num >= 60) ? printf("D") : printf("F");
    return 0;
}
