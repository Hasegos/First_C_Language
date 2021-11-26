#include<stdio.h>

int Hansoo(int num); // 한수를 해결할 함수
int main(void)
{
    int N = 0;
    printf("1부터 1000사이 숫자를 입력하세요");
    scanf("%d",&N);
    printf("%d",Hansoo(N)); // 함수 호출
    return 0;   
}
int Hansoo(int num)
{
    int count = 0;
    for(int i = 1; i<=num; i++)
    {
        if(num < 100 && num >0)
        {
            count = count +1;
        }
        else if(num >=100 && num <=1000)
        {
            count = 99;
            for(int i=100; i<=num; i++) // i 시작점 100부터 그 들어온 수까지 반복
            {
                int a = 0 , b =0; // a : 몫  b : 나머지
                a = i /10; 
                b = i %10;
                if((a/10)-(a%10) == (a%10) - b)
                {
                    count = count +1;
                }
            }
            
        }
        else 
        {
            return 0;
        }

    }
    return count;
}