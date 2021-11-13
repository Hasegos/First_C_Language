#include<stdio.h>

int main(void)
{
    char name;
    printf("이름이뭐예요?");
    scanf("%s",&name);  // 이름 입력받기 문자열은 %s
   
    int age = 0;
    printf("나이는 몇살이예요?");
    scanf("%d",&age); // 나이 입력받기 정수는 %d
   
    double weight = 0;
    printf("몸무게가 몇kg 인가요?"); 
    scanf("%lf",&weight); // 몸무게 입력받기 double는 %lf
    
    float height = 0;
    printf("키가 몇cm 인가요?");
    scanf("%f",&height); // 키 입력받기 float는 %f
   
    char crime;
    printf("무슨 범죄를 지었어요?");
    scanf("%s",&crime); // 범죄 입력 받기 문자열은 %s


    printf("\n\n--범죄자 정보 ---\n\n");
    printf("이름?    \n%s",&name);  // 출력할때 문자열을 받으면 &붙여야한다는거.
    printf("\n\n나이?    \n%d",age);
    printf("\n\n몸무게?  \n%lf",weight);
    printf("\n\n키?      \n%f",&height); // float도 출력할땐 & 붙여야한다는거.
    printf("\n\n범죄?    \n%s",&crime);

    return 0;
}