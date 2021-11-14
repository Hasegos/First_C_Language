#include<stdio.h>

int main(void)
{
     char c_array[7] = {'c', 'o' , 'd' , 'i' , 'n', 'g' ,'\0'};
     char c_array[6] = {'c', 'o' , 'd' , 'i' , 'n', 'g'};
     printf("%s\n",c_array);

    // 글자가 들어가고 남는 부분이 있다면 자동으로 문자열 끝을 배열해준다.
     char c_array[10] = {'c', 'o' , 'd' , 'i' , 'n', 'g' };  
     printf("%s\n",c_array);
     for(int i=0; i<sizeof(c_array); i++)
     {
         printf("%c\n",c_array[i]);
     }
     for(int i=0; i<sizeof(c_array); i++)
      {
          printf("%d\n",c_array[i]);  // ASCII 코드 값 출력  (null 문자 0 으로 입력됨)
      } 

    // 문자열 입력받기  : 경찰서 조서 쓰기 예제
     char name[256];
     printf("이름이뭐예요?");
     scanf("%s",name, sizeof(name));
     scanf("%s\n", name);  


    // 참고 : ASCII 코드 ?  ANSI (미국표준협회) 에서 제시한 표준 코드 체계
    // 7bit, 총 128개 코드(0~127)
    // a : 97 (문자 a의 아스키코드 정수값)
    // A : 65 
    // 0 : 48

     printf("%c\n",'a');
     printf("%d\n",'a');

     printf("%c\n",'b');
     printf("%d\n",'b');

     printf("%c\n",'A');
     printf("%d\n",'A');

     printf("%c\n",'\0');
     printf("%d\n",'\0');

     printf("%c\n",'0');
     printf("%d\n",'0');

     printf("%c\n",'1');
     printf("%d\n",'1');


    // 참고2 : 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
    for(int i = 0; i < 128; i++)
    {
        printf("아스키코드 정수 %d : %c\n",i ,i);
    }
    return 0;
}