#include<stdio.h>
// 대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다.
// 당신은 그들에게 슬픈 진실을 알려줘야 한다.


// 한케이스씩 처리하자
int main(void)
{
    int C = 0;
    printf("테스트 개수를 입력하세요");
    scanf("%d",&C);
    for(int i = 0; i < C; i++)
    {    
        int arr[1001] = {0},count = 0, N = 0; // 초기화
        float hap = 0.0,evg = 0.0;    
        printf("학생수를 입력하세요");
        scanf("%d",&N);
        for(int j = 0; j < N; j++)
        {
            printf("점수를 입력하세요");
            scanf("%d",&arr[j]);
            hap += arr[j];
        }
        evg = hap/N; // 평균
        for(int j = 0; j < N; j++)
        {
           if(evg < arr[j]) // 평균초과
           {
               count +=1;
           }
        }
        printf("%.3f%%\n",((float)count/N)*100);

    }
    return 0;
}