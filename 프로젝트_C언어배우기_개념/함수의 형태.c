#include<stdio.h>


// ��ȯ�� �Լ��̸�(���ް�)
// �Լ� ����
// ��ȯ���� ���� �Լ�
void function_without_return(); // ��ȯ�� ���� �Լ�
int function_with_return(); // ��ȯ�� �ִ� �Լ�
void p(int num); // ���� ������ ����  ���� p�Լ�
void function_without_params(); // �Ķ���Ͱ� ���� �Լ�
void function_with_params(int num1, int num2, int num3); // �Ķ���Ͱ� �ִ� �Լ�
int apple(int tot, int ate); // ��ü total ������ ate���� �԰� ���� ���� ��ȯ
int add(int num1, int num2); // ���������� 2�� ���ް� ��ȯ
int sub(int num1, int num2); // ����
int mul(int num1, int num2); // ���ϱ�
int div(int num1, int num2); // ������

int main(void)
{   


    // ��ȯ���� ���� �Լ�
    // function_without_return();

    // ��ȯ���� �ִ� �Լ�
    // int ret = function_with_return();
    // p(ret);

    // �Ķ����(���ް�)�� ���� �Լ�
    // function_without_params();

    // �ĸ�����(���ް�)�� �ִ� �Լ�
    // function_with_params(101, 203, 23);

    // �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
    // int ret = apple (5,2);  // 5���� ����߿��� 2���� �Ծ����
    // printf("��� 5�� �߿��� 2���� ������? %d ���� ���ƿ�.\n",ret);
    // printf("��� %d �� �߿� %d ���� ������? %d ���� ���ƿ�.\n",5,2,apple(5,2));


    // ���� �Լ�
    int num = 2;
    num = add(num,3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);

    return 0;
}
void function_without_return()
{
    printf("��ȯ���� ���� �Լ��Դϴ�.");
}
int function_with_return()
{
    printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return 10;
}
void p(int num)
{
    printf("num�� %d �Դϴ�.\n",num);
}
void function_without_params()
{
    printf("���ް��� ���� �Լ��Դϴ�.");
}
void function_with_params(int num1, int num2, int num3)
{
    printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d %d %d �Դϴ�\n",num1,num2,num3);
}
int apple(int tot, int ate)
{
    printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return tot - ate;
}
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}
