#include<stdio.h>

int main(void)
{
	//배열
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);*/

	//여러 개의 변수를 함께, 동시에 생성
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d 명이 타고 있습니다.\n",i, subway_array[i]);
	}*/
	// 값 설정 방법
	//int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int arr[10] = { 1,2 }; //3번째 값부터 0으로 초기화됨
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	/*float arr_f[5] = { 1.0f,2.0f,3.0f};
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	//문자 vs 문자열
	/*char c = 'A';
	printf("%c\n", c);*/
	
	//문자열 끝에는 끝을 의미하는 null 문자 \0이 포함되어야 함
	//char str[7] = "coding"; //[c] [o] [d] [i] [n] [g][\0]
	//printf("%s\n", str);

	//char str[] = "coding";
	////printf("%s\n", str);
	////printf("%d\n", sizeof(str));

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}
	char kor = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));


	return 0;

}