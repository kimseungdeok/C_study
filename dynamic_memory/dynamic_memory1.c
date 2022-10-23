#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi; // 보통 이렇게 작성 pi는 pointer integer의 약자
    pi = (int *)malloc(sizeof(int)); 
    
    // malloc은 메모리를 할당해라 라는 뜻
    // 메모리를 얼마나 할당할지는 괄호 안에 있디.
    // 그냥 4를 넣어도 되는데 보통 sizeof(int)를 한다.
    // 그 다음 그 부분의 주소를 가리키도록 한다.
    // (int *)로 형 변환을 해줌으로써 pi라는 변수가 해당 위치를 기억할 수 있도록 해줌
    // 이 부분은 외우다시피 할 정도로 많이 볼것

    printf("%d", pi); // 526411808100 -> 1004562464100 매번 할 때마다 바뀜
    
    if(pi == NULL)
    {
        printf("동적 메모리 할당에 실패\n");

        exit(1); // 프로그램 종료

    }

    *pi = 100;
    printf("%d\n", *pi);
    // 동적 메모리를 사용한 이후에는 무조건 해당 메모리를 반환함 -> 시스템 안정성을 높이기 위해
    free(pi);
    return 0;
}