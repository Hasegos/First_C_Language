#include<stdio.h>
// ���ڴ� 80 ~ 89
// �빮�ڴ� 65 ~ 90
// �ҹ��ڴ� 97 ~ 122
int main(void)
{
    int result = 0;
    char input;
    printf("���� 0 ~ 9 �Ǵ� ���ĺ��� �Է��ϼ���");
    scanf("%c",&input);
    char num_arr[11] = "0123456789";
    char daemunja[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char somunja[27] = "abcdefghijklmnopqrstuvwxyz";    

    for(int i = 0; i <10; i++) // ����� �迭 ���� ��
    {        
        if(input == num_arr[i]) 
        {
            result = 48 +i;
            printf("%d",result);            
        }
    }
   
    for(int i = 0; i < 26; i++) // ����� �迭 ��ҹ��� ��
    {
        if(input == daemunja[i]) 
        { 
            result = 65 + i;
            printf("%d",result);         
        }
        if(input == somunja[i])
            {
              result = 97 + i;
             printf("%d",result);
            }
    }
    

    return 0;
}