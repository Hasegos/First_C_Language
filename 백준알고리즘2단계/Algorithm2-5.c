#include<stdio.h>
//����̴� ���� ��ħ �˶��� ��� �Ͼ��. �˶��� ��� �ٷ� �Ͼ�� �����̰�����, �׻� ���ݸ� �� �ڷ��� ���� ������ ���� �б��� �����ϰ� �ִ�.
//����̴� ��� ����� �����غ�������, ���ݸ� �� �ڷ��� ������ �� � �͵� ���� ���� ������.
//�̷� ����̸� �ҽ��ϰ� ����, â���̴� �ڽ��� ����ϴ� ����� ��õ�� �־���.
//�ٷ� "45�� ���� �˶� �����ϱ�"�̴�.
//�� ����� �ܼ��ϴ�. ���� �����Ǿ� �ִ� �˶��� 45�� �ռ��� �ð����� �ٲٴ� ���̴�. ������ �˶� �Ҹ��� ������, �˶��� ���� ���� �� �� ���̱� �����̴�. 
//�� ����� ����ϸ�, ���� ��ħ �� ��ٴ� ����� ���� �� �ְ�, �б��� �������� �ʰ� �ȴ�.
//���� ����̰� ������ �˶� �ð��� �־����� ��, â������ ����� ����Ѵٸ�, �̸� ������ ���ľ� �ϴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.


int main(void)
{

    int hour=0;  // 24�ð� ǥ���� �ð�
    int minute=0; //  �� ǥ��
    printf("���� �ð��� ���ϼ���.");
    scanf("%d %d",&hour,&minute);
    if(minute == 0)
    {
        if(hour == 0)
        {
            hour = 23;
            printf("%d %d",hour,minute);
        }
        else if(hour > 0)
        {
            if(hour == 1)
            {
                hour == 0;
                minute == 15;
                printf("%d %d",hour,minute);
            }
            else if(hour > 1)
            {
                hour-=1;
                minute = 15;
                printf("%d %d",hour,minute);
            }

        }
        else
        {
            printf("�߸��� �Է°��Դϴ�.");
        }
    }
    else if(minute > 0)
    {
        if(hour == 0)
        {
            if(minute > 45 && minute < 60)
            {
                minute -= 45;
                printf("%d %d",hour,minute);
            }
            else if(minute == 45)
            {
                minute = 0;
               printf("%d %d",hour,minute);
            }
            else if(minute <45 && minute >1)
            {
                minute -= 45;
                minute += 60;
                hour = 23;
                printf("%d %d",hour,minute);
            }
        }
        else if(hour > 0)
        {
            if(minute > 45 && minute < 60)
            {
                minute -= 45;
                printf("%d %d",hour,minute);
            }
            else if(minute == 45)
            {
                minute = 0;
               printf("%d %d",hour,minute);
            }
            else if(minute <45 && minute >1)
            {
                minute -= 45;
                minute += 60;
                hour -= 1;
                printf("%d %d",hour,minute);
            }
        }
        else
        {
            printf("�߸��� �Է°��Դϴ�.");    
        }

    }
    else 
    {
        printf("�߸��� �Է°��Դϴ�.");
    }


    return 0;
}