#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 나동빈 강의에서는 없었던 내용

// 학생 정보 구조체
struct student
{
    int number;
    char name[10];
    double grade;

};

int main(void)
{
    struct student s;

    printf("학번 입력");
    scanf("%d", &s.number);
    printf("이름 입력");
    scanf("%s", s.name); // 배열은 그 자체로 포인터의 의미를 가지므로 따로 &를 쓸 필요가 없음
    printf("학점 입력");
    scanf("%lf", &s.grade); // double형 같은 경우는 lf(엘에프)로 해야함

    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %lf\n", s.grade);
    return 0;
}
