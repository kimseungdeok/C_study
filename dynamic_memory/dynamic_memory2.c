#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc = NULL;
    int i = 0;
    pc = (char *)malloc(100 * sizeof(char)); 
    // 100을 곱함 -> 하나의 문자가 들어갈 공간을 100개 만든것
    // 사실상 배열과 동일
    if(pc == NULL)
    {
        printf("동적 메모리 할당에 실패");
        exit(1);
    }
    // pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입
    for(i = 0; i < 26; i++)
    {
        *(pc + i) = 'a' + i;
    }
    // 아스키코드 0은 NULL을 의미 즉 문자열이 종료됨을 의미
    *(pc+i) = 0;

    printf("%s\n", pc); // 왜 &pc가 아니라 pc지?
    free(pc);
    return 0;
}