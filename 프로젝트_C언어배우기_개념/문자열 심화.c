#include<stdio.h>

int main(void)
{
     char c_array[7] = {'c', 'o' , 'd' , 'i' , 'n', 'g' ,'\0'};
     char c_array[6] = {'c', 'o' , 'd' , 'i' , 'n', 'g'};
     printf("%s\n",c_array);

    // ���ڰ� ���� ���� �κ��� �ִٸ� �ڵ����� ���ڿ� ���� �迭���ش�.
     char c_array[10] = {'c', 'o' , 'd' , 'i' , 'n', 'g' };  
     printf("%s\n",c_array);
     for(int i=0; i<sizeof(c_array); i++)
     {
         printf("%c\n",c_array[i]);
     }
     for(int i=0; i<sizeof(c_array); i++)
      {
          printf("%d\n",c_array[i]);  // ASCII �ڵ� �� ���  (null ���� 0 ���� �Էµ�)
      } 

    // ���ڿ� �Է¹ޱ�  : ������ ���� ���� ����
     char name[256];
     printf("�̸��̹�����?");
     scanf("%s",name, sizeof(name));
     scanf("%s\n", name);  


    // ���� : ASCII �ڵ� ?  ANSI (�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
    // 7bit, �� 128�� �ڵ�(0~127)
    // a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
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


    // ����2 : 0 ~ 127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
    for(int i = 0; i < 128; i++)
    {
        printf("�ƽ�Ű�ڵ� ���� %d : %c\n",i ,i);
    }
    return 0;
}