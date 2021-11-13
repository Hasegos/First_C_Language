#include<stdio.h>

int main(void)
{

    int N = 1,a = 0; // N는 횟수 a는 입력받는곳
    int want_num = 0; // 정답수
    printf("정답에 해당하는 수를 입력하세요."); // 정답수 입력받기
    scanf("%d",&want_num);
    do
    {   
        printf("정답을 맞혀보세요\n(1~100사이의 수)"); //숫자 입력받기
        scanf("%d",&a);
        if(a > 100 || a < 1) // 만약 숫자가 100보다크고 1보다작으면 프로그램 종료
        {
            printf("잘못된 입력 범위입니다.");
            break;
        }
        else if(a >= 1 && a <=100) // 1 ~ 100 사이로 들어왔을때
        {
            if(a > want_num ) //만약 정답수가 입력값보다 작을때
            {
                printf("Down!!");
                N+=1; // 횟수 더해주고
            }
            else if(a < want_num) // 정답수가 입력밧보다 클때
            {
                printf("UP!!");
                N+=1; // 횟수 더해주고
            }
            else // 정답일때
            {
                printf("%d 번만에 정답입니다!",N); //몇번만에 했는지 횟수 출력해준다
                break;
            }
            continue;
        }
        else // 이상한 경로가 있을 수 있으니 이경우 생각해서 제외
        {
            printf("정상적인 입력값이 아닙니다.");
            break;
        }        
        
    } while (N < 6);
   return 0; 
}