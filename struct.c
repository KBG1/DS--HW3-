#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};

typedef struct {
char lastName;
int studentId;
char grade;
} student2; //typedef를 통해 구조체 별칭 student2 정의

int main() {
struct student1 st1 = {'A', 100, 'A'}; // lastname이 A, studentId가 100, grade가 A인 구조체 st1 선언
printf("st1.lastName = %c\n", st1.lastName); // st1의 lastname출력, A
printf("st1.studentId = %d\n", st1.studentId); // st1의 studentId 출력, 100
printf("st1.grade = %c\n", st1.grade); //st1의 grade출력, A
student2 st2 = {'B', 200, 'B'}; // lastname이 B, 학번이 200, grade가 B인 구조체 st2선언
printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastname출력
printf("st2.studentId = %d\n", st2.studentId); //st2의 학번 출력
printf("st2.grade = %c\n", st2.grade); //st2의 성적 출력

student2 st3; //student2의 구조체 형식을 가지는 st3선언
st3 = st2; //st2의 정보 -> st3에 옮김
printf("\nst3.lastName = %c\n", st3.lastName); //st2와 출력 같음
printf("st3.studentId = %d\n", st3.studentId); //st2와 출력 같음
printf("st3.grade = %c\n", st3.grade); //st2와 출력 같음
/* equality test */
if(st3.studentId == st2.studentId) /* not working */ //st3==st2로 했더니 비교가 안되어 고유번호인 학번을 통해 비교하였습니다.
    printf("equal\n"); // 같으면 동등하다 뜨게하기
else
    printf("not equal\n");

printf("------------KIM BEOM GYU ------------ 2019062022 ------------");
return 0;

}