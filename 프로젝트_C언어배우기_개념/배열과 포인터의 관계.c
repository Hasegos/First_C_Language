#include<stdio.h>

int main(void)
{
    // �迭 ?
    int arr[3] = {5, 10, 15};
    int *ptr = arr;   // �� ptr �� arr�� �Ȱ��� ������ �� �� �ִ�.
    for(int i=0; i<3; i++)
    {
        printf("�迭 arr[%d] �� ��: %d\n",i,arr[i]);
    }
    for(int i=0; i<3; i++)
    {
        printf("������ ptr[%d] �� ��: %d\n",i,ptr[i]); // �迭�� �� �ش� �ּҸ� ptr�� �������ְ� �װ� ����ϱ����ؼ� 
    }                                                 // ptr�� �迭�� �־�����Ѵ�.              
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for(int i=0; i<3; i++)
    {
        //printf("�迭 arr[%d] �� ��: %d\n",i,arr[i]);
        printf("�迭 arr[%d] �� ��: %d\n",i,*(arr+i)); // arr �� ���� ÷�� ���۵Ǵ� arr �ּ� 
        
    }
    for(int i=0; i<3; i++)
    {
        //printf("������ ptr[%d] �� ��: %d\n",i,ptr[i]);
        printf("������ ptr[%d] �� ��: %d\n",i,*(ptr+i)); // �� �ٸ� ������� ǥ��
    }
    // *(arr + i)  ==  arr[i] �Ȱ��� ǥ��
    // arr ==  arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
    printf("arr ��ü�� �� : %d\n",arr);
    printf("arr[0] �� �ּ� : %d\n",&arr[0]);

    printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n",*arr);  // *(arr + 0)
    printf("arr[0] �� ���� �� : %d\n",*&arr[0]);

    // *& : �̺����� �ּ��� ���� ���ϴ°Ŷ�  ���������� �ƹ��͵� ���� �Ͱ� ���� 
    // & �� �ּ��̸�, * �� �� �ּ��� ���̱� ������, *& �� ����Ѵ�.
    printf("arr[0] �� ���� �� : %d\n",*&*&*&*&*&*&*&*&arr[0]);
    printf("arr[0] �� ���� �� : %d\n",arr[0]);
    

    return 0;
}