#include<stdio.h>

int main(void)
{
	//�迭
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);*/

	//���� ���� ������ �Բ�, ���ÿ� ����
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n",i, subway_array[i]);
	}*/
	// �� ���� ���
	//int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int arr[10] = { 1,2 }; //3��° ������ 0���� �ʱ�ȭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	/*float arr_f[5] = { 1.0f,2.0f,3.0f};
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	//���� vs ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/
	
	//���ڿ� ������ ���� �ǹ��ϴ� null ���� \0�� ���ԵǾ�� ��
	//char str[7] = "coding"; //[c] [o] [d] [i] [n] [g][\0]
	//printf("%s\n", str);

	//char str[] = "coding";
	////printf("%s\n", str);
	////printf("%d\n", sizeof(str));

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}
	char kor = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));


	return 0;

}