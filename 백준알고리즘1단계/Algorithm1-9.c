#include<stdio.h>

//�� �ڿ��� A�� B�� �־�����. 
//�̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

int main(void)
{
    int A=0,B=0;
    printf("�� �ڿ��� A�� B�� �Է��ϼ���.");
    scanf("%d %d",&A,&B);
    // ���
    printf("%d\n",A+B);    
    printf("%d\n",A-B);    
    printf("%d\n",A*B);    
    printf("%d\n",A/B);
    printf("%d",A%B);

    return 0;
}