#include<stdio.h>
// 1.cm �Է� m �� ����ϴ� �Լ�
// 2.�ؼ��� ������ �Է¹޾� ���� �������� ����ϴ� �Լ�
// 3.�Է¹��� ���� �Ҽ����� Ȯ���ϴ� �Լ�
void m(int m);  // �Լ� 1��
void jisu_mitsu(int mitsu,int jisu); // �Լ� 2��
void sosu(int num); // �Լ� 3��
int main(void)
{
    // int N = 0;
    // printf("�� cm ���� �Է��ϼ���");
    // scanf("%d",&N);
    // m(N);

    // int jisu = 0 , mitsu = 0;
    // printf("�ؼ��� ������ �Է��ϼ���");
    // scanf("%d %d",&mitsu, &jisu);
    // jisu_mitsu(mitsu,jisu);

    int N = 0;
    printf("���� �Է��ϼ���");
    scanf("%d",&N);
    sosu(N);

    return 0;
}
void m(int m) // 1�� �Լ� ����
{
    float miteo = 0;
    miteo = m * 0.01;
    printf("%.2f m �Դϴ�.",miteo);
}
void jisu_mitsu(int mitsu,int jisu) // 2 ���Լ� ����
{
    int result = 1;
    for(int i = 0; i < jisu; i++)
    {
        result = result * mitsu;
    }
    printf("%d",result);
}
void sosu(int num)  // 3 ���Լ� ����
{
    int check = 0; // �Ҽ� ���� �Ǻ�
    for(int i = 2; i<=num /2; i++) // �Ҽ����ƴ� �μ��� ���� �� �߿��� �ڱ��ڽ��� 1/2 ���� �Ѵ� ���� ����
    {
        if(i % num == 0) // �Ҽ� �ƴѼ� �Ǻ�
        {
            check  = 1;
            break;
        }
    }

    if(num ==1)
    {
        printf("%d �Ҽ��� �ƴմϴ�",num);
    }
    else
    {
        if(check ==1)
        {
            printf("%d �Ҽ��� �ƴմϴ�.",num);
            check = 0; // �ʱ�ȭ 
        }
        else
        {
            printf("%d �Ҽ� �Դϴ�",num);
            
        }
    }
}