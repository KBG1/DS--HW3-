#include <stdio.h>
struct student {     //문자형 배열 lastName, 정수형 변수 studentId, 2바이트 정수형변수 grade를 가지는 구조체 선언
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */   
short grade; /* 2 bytes */
};

int main()
{
struct student pst; // 구조체 pst 선언
printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 크기 출력
printf("size of int = %ld\n", sizeof(int)); //정수형 변수 크기 출력 
printf("size of short = %ld\n", sizeof(short)); // short 크기 출력 ( 2바이트 )
printf("------------KIM BEOM GYU ------------ 2019062022 ------------");
return 0;
}