#include<stdio.h>
//���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void)
{
    int X = 0 , N = 0;
    printf("�� ���� X �� N�� �Է��ϼ���");
    scanf("%d %d",&N,&X);
    int a[10000] ={0};   
    for(int i=0; i<N; i++)
    {
        scanf("%d",a[i]);
        if(X > a[i])
        {
            printf("%d\n",a[i]);
        }
       
    }

    return 0;
}

