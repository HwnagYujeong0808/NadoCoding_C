#include<stdio.h>
 int main_printfscanf(void)
{//출력은 ctrl + F5

	/*int age = 12; //int : 자료형(정수), age : 변수형, 12 : intvalue
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	return 0;*/

	//실수형 변수에 대한 예제
	/*
	float f = 46.5f;
	printf("%.2f\n", f); // 소수점 둘째자리
	double d = 4.428;
	printf("%.2lf\n", d); // double 은 lf로 소수 출력함

	//태어난 년도
	const int YEAR = 2000; //바꿀 수 없도록 const 키워드 입력해야 한다.
	printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;
	*/

	//printf
	//연산
	//int add = 3 + 7; //10
	//printf("3 + 7 = %d\n", add);
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	//scanf
	//키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input); //& : 입력된 곳에 정해진 값을 입력받겠다는 뜻
	//printf("입력값 : %d\n", input);

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	//char str[256];
	//printf("문자열을 입력하세요 : ");
	//scanf_s("%s", str, sizeof(str)); //문자열은 &표시 없이 크기 지정해야 함
	//printf("%s\n", str);

	//프로젝트
	//경찰관이 범죄자의 정보를 입수 (조서 작성)
	//이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 에요? ");
	scanf_s("%lf", &height);

	char crime_name[256];
	printf("범죄명은? ");
	scanf_s("%s", crime_name, sizeof(crime_name));

	//조서 내용 출력

	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름           : %s\n", name);
	printf(" 나이           : %d\n", age);
	printf(" 몸무게         : %.2f\n", weight);
	printf(" 키             : %.2lf\n", height);
    printf(" 범죄           : %s\n", crime_name);

	return 0;
}