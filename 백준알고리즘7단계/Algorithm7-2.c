#include<stdio.h>

int main(void)
{
    int N = 0;
    printf("N�� �ش��ϴ� ���ڸ� �Է��ϼ���");
    scanf("%d",&N);
    char num_N[102];
    char check[11] = "0123456789";
    int result = 0;
    scanf("%s",num_N);
    
    for(int i = 0; i <N; i++)
    {
        for(int  j = 0; j<11; j++) // �񱳸� ���� �ݺ���
            {if(num_N[i]== check[j] )
            {
                result = result + j;
            }
        }
    }
    printf("%d",result);
}