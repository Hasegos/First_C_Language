#include<stdio.h>
#include<time.h>
// ����Ⱑ 6������ �ִ�.
// �̵��� ���׿� ��� �ִµ�, �縷�̿���.
// �ù��� �ʹ� ������, �ʹ� �����ؼ� ���׿� ���� �༭ ����⸦ ����ּ���~~
// ������ �ð��� �������� ���� Ŀ����... ���߿��� .. �ȳ�...
int level;
int arrayFish[6]; // ���� ������ ����� �� �Լ������� ���� �ƴϱ⶧��
int * cursor; // 1���Ҷ� ���� 2���� �� ������ �ޱ����ؼ� cursor ����
void initData();
void printfFishes();
int main(void) 
{
    // �ð����
    long startTime = 0; // ���� �ð�
    long totalElapsedTime = 0;// �� ��� �ð�
    long preElapsedTime = 0; // ���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)

    int num;  // �� �� ���׿� ���� �� ������,  ����� �Է�
    initData();  // �ʱ�ȭ�� ���� ������
    cursor = arrayFish; // arryFish �� �迭�̴� ����ü�� �ּ��̹Ƿ�
                        // cursor ���� arrFish �ּҿ� �ּ� ���� ������� ������ �� �ִ�.

    startTime = clock();  // ���� �ð��� millisecond (1000���� 1��) ������
    while (1)
    {
        printfFishes();
        printf("�� �� ���׿� ���� �ֽðھ��?");
        scanf("%d",&num);

        // �������� �Է°��� �̻������������� �Է°� üũ�ϱ�

        if(num < 1 && num >6)
        {
            printf("�Է°��� �߸��Ǿ����ϴ�.");
            continue;
        }
        //millisecond  �� �ʷ� Ȯ���ϱ����ؼ�
        // �� ��� �ð�
        totalElapsedTime = (clock() - startTime) /CLOCKS_PER_SEC;
        printf("�� ��� �ð� : %ld ��\n",totalElapsedTime); 


        // ���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
        preElapsedTime = totalElapsedTime -  preElapsedTime;
        printf("�ֱ� ��� �ð�: %ld ��\n",preElapsedTime);

    }
    

    



    return 0;
}
void initData()
{
    level = 1; // ���� ����(1~5)
    for(int i = 0; i < 6; i++) // ����
    {
        arrayFish[i] = 100; // ������ �� ���� (0~100)
    }
}
void printfFishes()
{
    printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n",1,2,3,4,5,6); // 3ĭ�� �Ҵ� �ް� ���� ǥ�� 
    for(int i = 0; i < 6; i++)                                  // ��: 2ĭ space : 1ĭ %3d : 3ĭ  
    {
        printf(" %4d ",arrayFish[i]); // 6ĭ�� ���߱����ؼ�  4ĭ�ְ� �յ� 1ĭ�� �ش�.
    }
    printf("\n\n");
}