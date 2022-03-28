#include <stdio.h>
void print1 (int *ptr, int rows); 
int main()
{
int one[] = {0, 1, 2, 3, 4}; //각 배열에 0,1,2,3,4 값 대입한 정수형 배열 one선언
printf("one = %p\n", one); // one 0번의 주소 출력
printf("&one = %p\n", &one); // 위와 동일
printf("&one[0] = %p\n", &one[0]); //위와 동일
printf("\n"); 
print1(&one[0], 5); 

printf("------------KIM BEOM GYU ------------ 2019062022 ------------");
return 0;
}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i)); // one 배열의 0~4번까지의 주소 및 값 출력
printf("\n");
}