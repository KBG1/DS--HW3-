#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //크기가 5인 정수형 배열 list선언
    int *plist[5] = {NULL,};
    plist[0] = (int *)malloc(sizeof(int)); //plist의 0번에 4바이트 만큼의 동적 메모리 할당
    list[0] = 1; 
    list[1] = 100;
    *plist[0] = 200; 
    printf("value of list[0] = %d\n", list[0]); //list 0번값 출력 
    printf("address of list[0] = %p\n", &list[0]); //list0번값의 주소 출력
    printf("value of list = %p\n", list); // list의 포인터 주소값 출력
    printf("address of list (&list) = %p\n", &list); //list의 주소값 출력
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); //list 1번값 100 출력
    printf("address of list[1] = %p\n", &list[1]); //list list 1번 주소값 출력
    printf("value of *(list+1) = %d\n", *(list + 1)); //list1번 값 출력 ( == list[1])
    printf("address of list+1 = %p\n", list+1); //list 1번의 주소값 출력
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //plist 0번의 값 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist0번의 메모리 주소 출력
    printf("&plist = %p\n", &plist); // plist0번의 메모리 주소 출력
    printf("plist = %p\n", plist); // plist0번의 주소 출력
    printf("plist[0] = %p\n", plist[0]); //plist 0번의 주소 출력
    printf("plist[1] = %p\n", plist[1]); //할당 안되서 00000000
    printf("plist[2] = %p\n", plist[2]); //할당 안되서 00000000
    printf("plist[3] = %p\n", plist[3]); //할당 안되서 00000000
    printf("plist[4] = %p\n", plist[4]); //할당 안되서 00000000
    free(plist[0]); //plist 0번의 메모리 해제 
    
    printf("------------KIM BEOM GYU ------------ 2019062022 ------------");
}