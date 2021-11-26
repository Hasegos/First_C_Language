#include<stdio.h>
// 숫자는 80 ~ 89
// 대문자는 65 ~ 90
// 소문자는 97 ~ 122
int main(void)
{
    int result = 0;
    char input;
    printf("숫자 0 ~ 9 또는 알파벳을 입력하세요");
    scanf("%c",&input);
    char num_arr[11] = "0123456789";
    char daemunja[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char somunja[27] = "abcdefghijklmnopqrstuvwxyz";    

    for(int i = 0; i <10; i++) // 저장된 배열 숫자 비교
    {        
        if(input == num_arr[i]) 
        {
            result = 48 +i;
            printf("%d",result);            
        }
    }
   
    for(int i = 0; i < 26; i++) // 저장된 배열 대소문자 비교
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