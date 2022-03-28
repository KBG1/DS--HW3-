#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int); //함수 선언
float input[MAX_SIZE], answer; //실수 형식의 크기 100 배열 input과, 실수형 변수 answer 선언
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++)
input[i] = i;
/* for checking call by reference */
printf("address of input = %p\n", input); //input함수의 주소 출력
answer = sum(input, MAX_SIZE); //answer에 sum함수 대입 ( 1~ 99까지의 합 출력, 실수형으로 표현함)
printf("The sum is: %f\n", answer); //answer값 출력


printf("------------KIM BEOM GYU ------------ 2019062022 ------------");

}

float sum(float list[], int n)  //float형식의 sum 함수 정의
{
printf("value of list = %p\n", list); //list의 값 출력(주소 값)
printf("address of list = %p\n\n", &list); //list의 주소 값 출력
int i; 
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += list[i]; //list 0번부터 n번까지의 값 다 더함
return tempsum; //tempsum값 반환
}