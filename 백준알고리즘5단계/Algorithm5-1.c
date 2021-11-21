#include<stdio.h>
//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

int main(void)
{
    int N = 0; // 정수 개수
    printf("몇개의 정수를 입력하시겠습니까?");
    scanf("%d",&N);
    int min = 1000000; // 최솟값 설정
    int max = -1000000; // 최댓값 설정
    int num = 0; // 숫자 입력받을 곳
    for(int i = 0; i < N; i++)  // 입력받은 정수 개수 만큼 반복
    {
        scanf("%d",&num); // 숫자 입력받기
        if(min >= num) // 만약 입력받은 수가 min 보다 작을 때
        {
            min = num; // min 에 입력받은 수 넣기
        }
        if(max <= num) // 입력받은 수가 max 보다 클때
        {
            max = num; // max 에 입력 받은 수 넣기
        }
    
    }
    printf("%d\n",min); // 그리고 출력
    printf("%d\n",max);

    return 0;
}