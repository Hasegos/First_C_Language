#include<stdio.h>

int main(void)
{   
    // 포인터  한글로 변수 선언 할려고했으나 vscode 한글 문제로 안됨. ㅠㅠ

    // [철수] : 101호 -> 메모리 공간의 주소
    // [영희] : 201호
    // [민수] : 301호
    //각 문 앞에  '암호' 가 걸려 있음

    int cheolsu = 1;  // 철수
    int yeonghui = 2; // 영희
    int minsu = 3;  // 민수
    
    printf("철수네 주소 : %d, 암호 : %d\n",&cheolsu,cheolsu);
    printf("영희네 주소 : %d, 암호 : %d\n",&yeonghui,yeonghui);
    printf("민수네 주소 : %d, 암호 : %d\n",&minsu,minsu);

    // 포인터의 등장 요약 해당 주소를 가져올 수 있고 주소에 해당 값을 바꿀 수 있다.   
    // 변수를 가지는 포인터 자체가 그 변수의 값 자체를 바꿀 수 있다.                                    

    // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인 
    int *misyeonmaen; // 미션맨  포인터 변수
    misyeonmaen = &cheolsu ; // 미션맨은 철수의 주소를 가진다 & 빼먹지 말자
    printf("미션맨이 방문하는 곳 주소 : %d , 암호 : %d\n",misyeonmaen,* misyeonmaen); // 미션맨 자체는 철수의 주소이고 
                                                                                    // 주소에 해당하는 값을 가져오기위해서
                                                                                    // * 붙인다.
    misyeonmaen = &yeonghui ; 
    printf("미션맨이 방문하는 곳 주소 : %d , 암호 : %d\n",misyeonmaen,* misyeonmaen);

    misyeonmaen = &minsu ; 
    printf("미션맨이 방문하는 곳 주소 : %d , 암호 : %d\n",misyeonmaen,* misyeonmaen);


    // 두 번째 미션 : 각 암호에 3을 곱해라

    misyeonmaen = &cheolsu ; 
    *misyeonmaen *= 3;
    printf("미션맨이 방문하는 곳 주소 : %d , 암호 : %d\n",misyeonmaen,* misyeonmaen);

    misyeonmaen = &yeonghui ; 
    *misyeonmaen *= 3;
    printf("미션맨이 방문하는 곳 주소 : %d , 암호 : %d\n",misyeonmaen,* misyeonmaen);

    misyeonmaen = &minsu ; 
    *misyeonmaen *= 3;
    printf("미션맨이 방문하는 곳 주소 : %d , 암호 : %d\n",misyeonmaen,* misyeonmaen);


    // 또 다른 포인터의 등장
    // 스파이 (2522124)
    //               = > (2522124)  누군가의 아파트 주소
    // 미션맨 (2522124)
    // 미션맨이  바꾼 암호에서 2를 빼라!
    int *seupai = misyeonmaen;  // 둘다 같은 주소를 가르킨다
    printf("\n... 스파이가 미션 수행하는 중 ...\n\n"); // 단 주소 출력할땐 * 빼야한다.
    seupai = &cheolsu;
    *seupai = * seupai - 2;  // 철수 = 철수 -2
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n",seupai,*seupai);

    seupai = &yeonghui;
    *seupai = * seupai - 2;  // 영희 = 영희 -2
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n",seupai,*seupai);

    seupai = &minsu;
    *seupai = * seupai - 2;  // 민수 = 민수 -2
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n",seupai,*seupai);

    printf("\n... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀....\n\n");

    printf("철수네 주소 : %d, 암호 : %d\n",&cheolsu,cheolsu);
    printf("영희네 주소 : %d, 암호 : %d\n",&yeonghui,yeonghui);
    printf("민수네 주소 : %d, 암호 : %d\n",&minsu,minsu);

    // 참고로.. 미션맨이 사는 곳의 주소는 .. & 미션맨으로 확인
    printf("미션맨 주소 : %d\n",&misyeonmaen);
    printf("스파이 주소 : %d\n",&seupai);
    return 0;
}