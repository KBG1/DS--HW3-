#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5]; //크기가 5인 배열 선언
int *plist[5]; // 크기가 5인 포인터 배열 선언
list[0] = 10; 
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int)); //4바이트 만큼 메모리 할당
printf("list[0] \t= %d\n", list[0]); // list 0번 주소 출력
printf("address of list \t= %p\n", list); // list 0번 주소 출력
printf("address of list[0] \t= %p\n", &list[0]); // list 0번 메모리 주소 출력
printf("address of list + 0 \t= %p\n", list+0); // list 0번의 주소 출력
printf("address of list + 1 \t= %p\n", list+1); // list 1번의 주소 출력
printf("address of list + 2 \t= %p\n", list+2); // list 2번의 주소 출력
printf("address of list + 3 \t= %p\n", list+3); // list 3번의 주소 출력
printf("address of list + 4 \t= %p\n", list+4); // list 4번의 주소 출력
printf("address of list[4] \t= %p\n", &list[4]); // list 4번의메모리 주소 출력
free(plist[0]); //plist0번의 메모리 해제

printf("------------KIM BEOM GYU ------------ 2019062022 ------------");
}