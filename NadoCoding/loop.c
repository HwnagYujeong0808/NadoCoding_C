#include<stdio.h>

int main(void)
{
//	printf("Hello World\n");

	//++ 뿔뿔
	/*int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	return 0;*/

	//int b = 20;
	////++b : b = b+1
	//printf("b 는 %d\n", ++b);
	////b++ : b+1 = b
	//printf("b 는 %d\n", b++);
	//printf("b 는 %d\n", b);

	//int i = 1;
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);

	//반복문
	//for, while, do while

	////for (선언; 조건; 증감)
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World %d\n", i);
	//}

	//while(조건) { }
	/*int i = 1;
	while (i<=10)
	{
		printf("Hello World %d\n", i++);
	}
*/

	//do {} while (조건);
	//int i = 1;

	//do {
	//	printf("Hello World %d\n", i++);
	//} while (i <= 10);

	//2중 반복문
	for (int i = 2; i <= 9; i++)
	{
		printf("-------구구단 %d단------- \n", i);
		
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i,j,i*j);
		}
		printf("\n");
	}


	return 0;
}