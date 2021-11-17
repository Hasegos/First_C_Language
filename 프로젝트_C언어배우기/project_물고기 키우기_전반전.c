#include<stdio.h>
#include<time.h>
// 물고기가 6마리가 있다.
// 이들은 어항에 살고 있는데, 사막이에요.
// 시믹이 너무 더워서, 너무 건조해서 어항에 물을 줘서 물고기를 살려주세요~~
// 물고기는 시간이 지날수록 점점 커져서... 나중에는 .. 냠냠...
int level;
int arrayFish[6]; // 전역 변수로 만들기 한 함수에서만 쓸건 아니기때문
int * cursor; // 1번할때 줄지 2번할 때 줄지를 받기위해서 cursor 생성
void initData();
void printfFishes();
int main(void) 
{
    // 시간사용
    long startTime = 0; // 시작 시간
    long totalElapsedTime = 0;// 총 경과 시간
    long preElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

    int num;  // 몇 번 어항에 물을 줄 것인지,  사용자 입력
    initData();  // 초기화를 위한 데이터
    cursor = arrayFish; // arryFish 가 배열이니 그자체가 주소이므로
                        // cursor 또한 arrFish 주소와 주소 값을 마음대로 움직일 수 있다.

    startTime = clock();  // 현재 시간을 millisecond (1000분의 1초) 단위로
    while (1)
    {
        printfFishes();
        printf("몇 번 어항에 물을 주시겠어요?");
        scanf("%d",&num);

        // 급했을때 입력값이 이상해질수있으니 입력값 체크하기

        if(num < 1 && num >6)
        {
            printf("입력값이 잘못되었습니다.");
            continue;
        }
        //millisecond  라 초로 확인하기위해서
        // 총 경과 시간
        totalElapsedTime = (clock() - startTime) /CLOCKS_PER_SEC;
        printf("총 경과 시간 : %ld 초\n",totalElapsedTime); 


        // 직접 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
        preElapsedTime = totalElapsedTime -  preElapsedTime;
        printf("최근 경과 시간: %ld 초\n",preElapsedTime);

    }
    

    



    return 0;
}
void initData()
{
    level = 1; // 게임 레벨(1~5)
    for(int i = 0; i < 6; i++) // 어항
    {
        arrayFish[i] = 100; // 어항의 물 높이 (0~100)
    }
}
void printfFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n",1,2,3,4,5,6); // 3칸을 할당 받고 숫자 표시 
    for(int i = 0; i < 6; i++)                                  // 번: 2칸 space : 1칸 %3d : 3칸  
    {
        printf(" %4d ",arrayFish[i]); // 6칸을 맞추기위해서  4칸주고 앞뒤 1칸씩 준다.
    }
    printf("\n\n");
}