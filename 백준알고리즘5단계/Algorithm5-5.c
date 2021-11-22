#include<stdio.h>
// 세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다.
// 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다.
// 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.
// 예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.
// 세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오

// 해결방안
// 일단 시험개수를 입력받아야함
int main(void)
{
    int N = 0, max = 0;     // N : 입력횟수  max : 최댓값 설정  num : 입력받는 수  su : 누적문
    float result = 0.0; 
    printf("시험을 몇개봤는지 얘기해주세요");
    scanf("%d",&N); 
    int num[N];
    float su[N];
    float hap = 0.0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&num[i]);
        if(max < num[i])
        {
            max = num[i];
        }              
    }
    for(int i = 0; i < N; i++)
    {    
      printf("%d\n",num[i]);
      su[i] = (float)num[i] / (float)max * 100;  
      hap = hap +su[i];         
    }
    printf("%.2f",hap/N);

    return 0;
}