#include<stdio.h>

int main(void)
{   
    // ������  �ѱ۷� ���� ���� �ҷ��������� vscode �ѱ� ������ �ȵ�. �Ф�

    // [ö��] : 101ȣ -> �޸� ������ �ּ�
    // [����] : 201ȣ
    // [�μ�] : 301ȣ
    //�� �� �տ�  '��ȣ' �� �ɷ� ����

    int cheolsu = 1;  // ö��
    int yeonghui = 2; // ����
    int minsu = 3;  // �μ�
    
    printf("ö���� �ּ� : %d, ��ȣ : %d\n",&cheolsu,cheolsu);
    printf("����� �ּ� : %d, ��ȣ : %d\n",&yeonghui,yeonghui);
    printf("�μ��� �ּ� : %d, ��ȣ : %d\n",&minsu,minsu);

    // �������� ���� ��� �ش� �ּҸ� ������ �� �ְ� �ּҿ� �ش� ���� �ٲ� �� �ִ�.   
    // ������ ������ ������ ��ü�� �� ������ �� ��ü�� �ٲ� �� �ִ�.                                    

    // ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ�� 
    int *misyeonmaen; // �̼Ǹ�  ������ ����
    misyeonmaen = &cheolsu ; // �̼Ǹ��� ö���� �ּҸ� ������ & ������ ����
    printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d , ��ȣ : %d\n",misyeonmaen,* misyeonmaen); // �̼Ǹ� ��ü�� ö���� �ּ��̰� 
                                                                                    // �ּҿ� �ش��ϴ� ���� �����������ؼ�
                                                                                    // * ���δ�.
    misyeonmaen = &yeonghui ; 
    printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d , ��ȣ : %d\n",misyeonmaen,* misyeonmaen);

    misyeonmaen = &minsu ; 
    printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d , ��ȣ : %d\n",misyeonmaen,* misyeonmaen);


    // �� ��° �̼� : �� ��ȣ�� 3�� ���ض�

    misyeonmaen = &cheolsu ; 
    *misyeonmaen *= 3;
    printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d , ��ȣ : %d\n",misyeonmaen,* misyeonmaen);

    misyeonmaen = &yeonghui ; 
    *misyeonmaen *= 3;
    printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d , ��ȣ : %d\n",misyeonmaen,* misyeonmaen);

    misyeonmaen = &minsu ; 
    *misyeonmaen *= 3;
    printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d , ��ȣ : %d\n",misyeonmaen,* misyeonmaen);


    // �� �ٸ� �������� ����
    // ������ (2522124)
    //               = > (2522124)  �������� ����Ʈ �ּ�
    // �̼Ǹ� (2522124)
    // �̼Ǹ���  �ٲ� ��ȣ���� 2�� ����!
    int *seupai = misyeonmaen;  // �Ѵ� ���� �ּҸ� ����Ų��
    printf("\n... �����̰� �̼� �����ϴ� �� ...\n\n"); // �� �ּ� ����Ҷ� * �����Ѵ�.
    seupai = &cheolsu;
    *seupai = * seupai - 2;  // ö�� = ö�� -2
    printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n",seupai,*seupai);

    seupai = &yeonghui;
    *seupai = * seupai - 2;  // ���� = ���� -2
    printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n",seupai,*seupai);

    seupai = &minsu;
    *seupai = * seupai - 2;  // �μ� = �μ� -2
    printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n",seupai,*seupai);

    printf("\n... ö�� ���� �μ��� ���� ������ �ٲ� ��ȣ�� ���� ����....\n\n");

    printf("ö���� �ּ� : %d, ��ȣ : %d\n",&cheolsu,cheolsu);
    printf("����� �ּ� : %d, ��ȣ : %d\n",&yeonghui,yeonghui);
    printf("�μ��� �ּ� : %d, ��ȣ : %d\n",&minsu,minsu);

    // �����.. �̼Ǹ��� ��� ���� �ּҴ� .. & �̼Ǹ����� Ȯ��
    printf("�̼Ǹ� �ּ� : %d\n",&misyeonmaen);
    printf("������ �ּ� : %d\n",&seupai);
    return 0;
}