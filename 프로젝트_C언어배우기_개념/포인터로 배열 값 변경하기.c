#include<stdio.h>


void changeArray(int *num1);
int main(void)
{
    // �迭�� ���� ���� ��ü�� �ּҰ��ǹǷ� �ּҰ��� ������ changeArray�Լ����� �����Ѵ�.
    // �迭�� ���� ,arr - > �ּ�
    int arr[3] = {10, 20 ,30};
    //changeArray(arr);
    changeArray(&arr[0]);
    for(int i=0; i < 3; i++)
    {
        printf("%d\n",arr[i]);
    }

    // scanf ���� &num �� ���� &�� ����ϴ� ����? �ش� �ּҸ� �ޱ����ؼ�  

    return 0;
}
void changeArray(int *num1)
{
    num1[2] = 50;
}