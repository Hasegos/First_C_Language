#include<stdio.h>
#include<time.h>

int getRandomNumber(int level); // 몇번째 문인지
void showQuestion(int level,int num1,int num2); // 반화값 없는 문제지 함수 작성
void success(); // 반환값없는 성공문장출력 함수
void fail(); // 반환값없는 실패문장출력 함수
int main(void)
{

    // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제(랜덤)
    // 맞히면 통과, 틀리면 실패
    srand(time(NULL)); // 랜덤 숫자 뽑기
    int count = 0;
    for(int i=1; i<=5; i++)
    {
        // X * Y = ?
        int num1 = getRandomNumber(i); // 랜덤 숫자를 받기위한 함수생성 (반환값 존재)
        int num2 = getRandomNumber(i); //  랜덤 숫자를 받기위한 함수생성 (반환값 존재)
        // printf("%d x %d ?",num1,num2);
        showQuestion(i,num1,num2); // 반환값없는 문제지 작성.

        int answer = -1; // 기본값 설정
        scanf("%d",&answer);
        if(answer == -1) // 만약 입력받은 값이 기본값과 같다면
        {
            printf("프로그램을 종료합니다.\n"); 
            exit(0);  // 여기서 바로 프로그램을 종료하라. 프로그램 바로종료 = exit(0);  break; = for문 탈출
        }
        else if(answer == num1 *num2) // 답이랑 입력한 것과같다면
        {
            //성공
            success(); // 성공 함수 출력
            count++; // 횟수 올리기
        }
        else
        {   
            //실패
            fail(); // 그외의 경우 실패 함수 출력
            
        }

        
    }
    printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다\n",count);

    
    return 0;
}
int getRandomNumber(int level) // 랜덤 숫자 뽑기위한 함수 정의
{
  return rand() % (level * 7 ) + 1; // 랜덤수 뽑기 level = 0 ~ i - 1
}
void showQuestion(int level,int num1,int num2) // 문제지 함수 정의
{
    printf("\n\n\n########## %d 번째 비밀번호 #############\n",level);
    printf("\n\t%d x %d 는?\n\n",num1,num2);
    printf("###################################\n");
    printf("\n비밀번호를 입력하세요 (종료 : -1)>>");
}
void success() // 성공 함수 정의
{
    printf("\n  >>  Good ! 정답입니다.\n");
}
void fail() // 실패 함수 정의
{
    printf("\n >> 떙 ! 틀렸습니다.\n");
}