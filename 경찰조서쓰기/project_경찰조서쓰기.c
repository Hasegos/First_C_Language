#include<stdio.h>

int main(void)
{
    char name;
    printf("�̸��̹�����?");
    scanf("%s",&name);  // �̸� �Է¹ޱ� ���ڿ��� %s
   
    int age = 0;
    printf("���̴� ����̿���?");
    scanf("%d",&age); // ���� �Է¹ޱ� ������ %d
   
    double weight = 0;
    printf("�����԰� ��kg �ΰ���?"); 
    scanf("%lf",&weight); // ������ �Է¹ޱ� double�� %lf
    
    float height = 0;
    printf("Ű�� ��cm �ΰ���?");
    scanf("%f",&height); // Ű �Է¹ޱ� float�� %f
   
    char crime;
    printf("���� ���˸� �������?");
    scanf("%s",&crime); // ���� �Է� �ޱ� ���ڿ��� %s


    printf("\n\n--������ ���� ---\n\n");
    printf("�̸�?    \n%s",&name);  // ����Ҷ� ���ڿ��� ������ &�ٿ����Ѵٴ°�.
    printf("\n\n����?    \n%d",age);
    printf("\n\n������?  \n%lf",weight);
    printf("\n\nŰ?      \n%f",&height); // float�� ����Ҷ� & �ٿ����Ѵٴ°�.
    printf("\n\n����?    \n%s",&crime);

    return 0;
}