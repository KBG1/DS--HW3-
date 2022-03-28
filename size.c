#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x; //2차원 포인터 x 선언
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력 (4바이트)
printf("sizeof(*x) = %lu\n", sizeof(*x)); //1차원 포인터 x의 크기 출력
printf("sizeof(**x) = %lu\n", sizeof(**x)); //2차원 포인터 x의 크기 출력
printf("------------KIM BEOM GYU ------------ 2019062022 ------------");
}