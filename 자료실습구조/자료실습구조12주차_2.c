#include<stdio.h>
// �Լ� ������ ����
int TestFunc1(int param){return param*2;}  // �ڷ��� �Լ��̸�(�Ű�����){���ϰ�} ����
int TestFunc2(int param){return param*3;}
int add(int num1,int num2){return num1 + num2;}
int sub(int num1,int num2){return num1 - num2;}
int mul(int num1,int num2){return num1 * num2;}

int main(void)
{
    int input =0;
    int (*prTestFunc)(int) = NULL; // �Լ� ������ ����Ѵٴ� �ǹ� �̰� �׻� NULL ���ʱ�ȭ 
                                   // �ڷ��� ������ ����(�Լ� �ڷ���) 
    printf("���� �Է��ϼ���");
    scanf("%d",&input);
    if(input>5)
    {
        prTestFunc = TestFunc1; // TestFunc1 �Լ� �ּҸ� ������ ������ �ִ´�
    }
    else
    {
         prTestFunc = TestFunc2;
    }
    printf("%d\n",prTestFunc(input)); // �Ű������ȿ� input ���� ���� ����Ѵ�.

    int (*pray[3]/*�迭 3ĭ �����*/)(int,int)={add,sub,mul}; // �Լ� ������ ������ �迭�� ����.
    int result  = 0; //���            // �Ʊ� �Ű����� 2�� �޴´� ������ int �� �ΰ�
    for(int  i=0; i<3; i++) // �� �迭 ���� �Լ��� ���
    {
        result = pray[i](2,1); // �� �迭 ���� �Լ��� �Ű����� �ֱ�
        printf("%d\n",result); // �� ����� ���
    }
    return 0;

}
