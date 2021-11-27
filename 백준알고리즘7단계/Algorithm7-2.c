#include<stdio.h>

int main(void)
{
    int N = 0;
    printf("N에 해당하는 숫자를 입력하세요");
    scanf("%d",&N);
    char num_N[102];
    char check[11] = "0123456789";
    int result = 0;
    scanf("%s",num_N);
    
    for(int i = 0; i <N; i++)
    {
        for(int  j = 0; j<11; j++) // 비교를 위한 반복문
            {if(num_N[i]== check[j] )
            {
                result = result + j;
            }
        }
    }
    printf("%d",result);
}