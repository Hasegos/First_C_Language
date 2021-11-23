#include<stdio.h>
// "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
// 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
// "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
// OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.


// 하나를 받고 하나를 출력하자.
int main(void)
{
    int N = 0;  
    printf("테스트 개수를 입력하세요");
    scanf("%d",&N); 
    for(int i = 0; i < N; i++) 
    {
        char tmep[83] = {0};  // 배열의 개수는 무조건 "상수"를 하자!  개수를 충분히 주자.
        int score[83] = {0};
        printf("O or X 를 입력하세요.");
        scanf("%s",tmep);
        int result = 0; // 합 변수
        if(tmep[0]=='O')  // 그전꺼랑 비교할 때 문제는 첫번째다.
        {
            score[0] += 1;
            result += score[0]; // 합에다가 누적 점수
        }        
        for(int j=1;;j++) // 두번째 부터
        {
            if(tmep[j]=='O') 
            {
                score[j] = score[j-1] + 1; 
                result += score[j];   // 합에다가 누적
            }
            else if (tmep[j]=='\0')// \0 : 널 문자 즉 끝을 말한다.
            {
                break;
            }
        }
        printf("%d\n",result);
    }

    
      


    return 0 ;
}