#include<stdio.h>
#include<time.h>

int main(void)
{

    srand(time(NULL));
    printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");
    int answer;  // ����� �Է°�
    int treament = rand () % 4; // �߸��� ���� (0 ~ 3)


    int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
    int prewcntShowBottle = 0; // �� ���ӿ� ������ �� ����
    // ���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ��� (ó���� 2�� -> ������ 3�� ..)

    // 3���� ��ȸ (3���� �߸��� ���� �õ�)
    for(int i=1; i<=3; i++)
    {
        int bottle[4] = {0, 0, 0, 0};  // 4���� ��
        do{
            cntShowBottle = rand() % 2+2; // ������ �� ���� (0~1, +2 -> 2,3)

         }while(cntShowBottle == prewcntShowBottle);; //���� �ٸ����ϱ����ؼ�

         int isInluded = 0; //������ �� �߿� �߸����� ���ԵǾ����� ���� (1: ����)
         printf(" > %d ��° �õ� :",i);

         // ������ �� ������ ����
         for(int j = 0; j < cntShowBottle; j++)
         {
             int randBottle = rand () % 4; // 0 ~ 3

             // ���� ���õ��� �ʴ� ���̸�, ����ó��
             if(bottle[randBottle] == 0)
             {
                 bottle[randBottle] = 1;
                 if(randBottle == treament)
                 {
                    isInluded = 1;
                 }
             }
             // �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽü���
             else
             {
                 j--;
             }
         }
         // ����ڿ��� ���� ǥ��

        for(int k=0; k < 4; k++)
        {
            if(bottle[k] == 1)
            {
                printf("%d",k+1);
            }
            printf("������ �Ӹ��� �ٸ��ϴ�.\n\n");

            if(isInluded == 1)
            {
                printf("  >> ���� ! �Ӹ��� ����� !!\n");
            }
            else
            {
                printf(" >> ���� ! �Ӹ��� ���� �ʾҾ��.. �Ф�\n");
            }
            printf("\n ...  ����Ϸ��� �ƹ�Ű�� �������� ...");
            getchar(); // ����ڰ� �ƹ�Ű �Է��Ҷ� ����
        }
    }
    printf("\n\n�߸����� �� ���ϱ��?");
    scanf("%d",&answer);

    if (answer == (treament + 1))  // treament �� 0 ~ 3 �̰�  answer�� 1 ~ 4������ ������ �ٸ��ϱ� + 1
    {
        printf("\n >> �����Դϴ�!\n");
    }
    else
    {
        printf("\n >> ��! Ʋ�Ⱦ��, ������ %d�Դϴ�\n",(treament + 1));
    }

    return 0;
}