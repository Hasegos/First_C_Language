#include<stdio.h>

//  10 진수를 2진수로 바꾼걸 찍기
int reLenght(int l); // 길이 측정
void reback(int i);
int main(void)
{
    reLenght(16);
    reback(16);
    return 0;
}
void reback(int i)
{   
                                          // 길이관련 reLenght(16) 호출해서 그 길이만큼 배열선언 
    int a = 0 , b = 0, c[reLenght(16)];   // 몫 과 나머지에대해서 말해줄 a 와 b 선언
    for(int k = 0; k < reLenght(16); k++) // 선언한 길이만큼 반복
    {
        a = i % 2;  // 2로 나눈 나머지 
        c[k] = a; // 배열공간에 각 나머지값넣기
        b = i / 2;  // 2로 나눈 몫
        i = b;  // 나눈 몫을 다시 i 에넣기
        if(b == 0) // 만약 몫이 0이라면
        {
            for(int e = reLenght(16)-1; e >= 0; e--) // 거꾸로 출력을위해서 길이에서 1를 뺀 값에서 0까지 거꾸로
            {
                printf("%d\n",c[e]); // 그걸 출력 
            }
            break; // 다출력후 종료
        }
    }
    

}
int reLenght(int l) // 길이 측정후 배열에 넣을꺼라 선언
{
    int a =0, b =0, nLenght=0 ; // 똑같이 몫과 나머지를 통해 길이 측정
    while(1)
    {
        a = l % 2;
        b = l / 2;
        nLenght++;
        l = b;
        if(b == 0)
        {
            return nLenght;
            break;
        }
        
    }
}