#include<stdio.h>
#include<time.h>

int main(void)
{

    srand(time(NULL));
    printf("\n\n === 아빠는 대머리 게임 === \n\n");
    int answer;  // 사용자 입력값
    int treament = rand () % 4; // 발모제 선택 (0 ~ 3)


    int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
    int prewcntShowBottle = 0; // 앞 게임에 보여준 병 갯수
    // 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2게 -> 디음엔 3개 ..)

    // 3번의 기회 (3번의 발모제 투여 시도)
    for(int i=1; i<=3; i++)
    {
        int bottle[4] = {0, 0, 0, 0};  // 4개의 병
        do{
            cntShowBottle = rand() % 2+2; // 보여줄 병 갯수 (0~1, +2 -> 2,3)

         }while(cntShowBottle == prewcntShowBottle);; //서로 다르게하기위해서

         int isInluded = 0; //보여줄 병 중에 발모제가 포함되었는지 여부 (1: 포함)
         printf(" > %d 번째 시도 :",i);

         // 보여줄 병 종류를 선택
         for(int j = 0; j < cntShowBottle; j++)
         {
             int randBottle = rand () % 4; // 0 ~ 3

             // 아직 선택되지 않는 병이면, 선택처리
             if(bottle[randBottle] == 0)
             {
                 bottle[randBottle] = 1;
                 if(randBottle == treament)
                 {
                    isInluded = 1;
                 }
             }
             // 이미 선택된 병이면, 중복이므로 다시선택
             else
             {
                 j--;
             }
         }
         // 사용자에게 문제 표시

        for(int k=0; k < 4; k++)
        {
            if(bottle[k] == 1)
            {
                printf("%d",k+1);
            }
            printf("물약을 머리에 바릅니다.\n\n");

            if(isInluded == 1)
            {
                printf("  >> 성공 ! 머리가 났어요 !!\n");
            }
            else
            {
                printf(" >> 실패 ! 머리가 나지 않았어요.. ㅠㅠ\n");
            }
            printf("\n ...  계속하려면 아무키나 누르세요 ...");
            getchar(); // 사용자가 아무키 입력할때 쓰기
        }
    }
    printf("\n\n발모제는 몇 번일까요?");
    scanf("%d",&answer);

    if (answer == (treament + 1))  // treament 는 0 ~ 3 이고  answer는 1 ~ 4까지라서 범위가 다르니깐 + 1
    {
        printf("\n >> 정답입니다!\n");
    }
    else
    {
        printf("\n >> 떙! 틀렸어요, 정답은 %d입니다\n",(treament + 1));
    }

    return 0;
}