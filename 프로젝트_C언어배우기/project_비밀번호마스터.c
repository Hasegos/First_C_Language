#include<stdio.h>
#include<time.h>

int getRandomNumber(int level); // ���° ������
void showQuestion(int level,int num1,int num2); // ��ȭ�� ���� ������ �Լ� �ۼ�
void success(); // ��ȯ������ ����������� �Լ�
void fail(); // ��ȯ������ ���й������ �Լ�
int main(void)
{

    // ���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ����(����)
    // ������ ���, Ʋ���� ����
    srand(time(NULL)); // ���� ���� �̱�
    int count = 0;
    for(int i=1; i<=5; i++)
    {
        // X * Y = ?
        int num1 = getRandomNumber(i); // ���� ���ڸ� �ޱ����� �Լ����� (��ȯ�� ����)
        int num2 = getRandomNumber(i); //  ���� ���ڸ� �ޱ����� �Լ����� (��ȯ�� ����)
        // printf("%d x %d ?",num1,num2);
        showQuestion(i,num1,num2); // ��ȯ������ ������ �ۼ�.

        int answer = -1; // �⺻�� ����
        scanf("%d",&answer);
        if(answer == -1) // ���� �Է¹��� ���� �⺻���� ���ٸ�
        {
            printf("���α׷��� �����մϴ�.\n"); 
            exit(0);  // ���⼭ �ٷ� ���α׷��� �����϶�. ���α׷� �ٷ����� = exit(0);  break; = for�� Ż��
        }
        else if(answer == num1 *num2) // ���̶� �Է��� �Ͱ����ٸ�
        {
            //����
            success(); // ���� �Լ� ���
            count++; // Ƚ�� �ø���
        }
        else
        {   
            //����
            fail(); // �׿��� ��� ���� �Լ� ���
            
        }

        
    }
    printf("\n\n ����� 5���� ��й�ȣ �� %d ���� ������ϴ�\n",count);

    
    return 0;
}
int getRandomNumber(int level) // ���� ���� �̱����� �Լ� ����
{
  return rand() % (level * 7 ) + 1; // ������ �̱� level = 0 ~ i - 1
}
void showQuestion(int level,int num1,int num2) // ������ �Լ� ����
{
    printf("\n\n\n########## %d ��° ��й�ȣ #############\n",level);
    printf("\n\t%d x %d ��?\n\n",num1,num2);
    printf("###################################\n");
    printf("\n��й�ȣ�� �Է��ϼ��� (���� : -1)>>");
}
void success() // ���� �Լ� ����
{
    printf("\n  >>  Good ! �����Դϴ�.\n");
}
void fail() // ���� �Լ� ����
{
    printf("\n >> �� ! Ʋ�Ƚ��ϴ�.\n");
}