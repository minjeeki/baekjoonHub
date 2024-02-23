// 정수 저장 스택 구현 후 입력으로 주어지는 명령 처리하는 프로그램 만들기

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    // 사용되는 변수 나열
    int     command_num = 0;                                // 첫째줄에 입력받는 명령의 수
    char    command[100];                                   // 입력받는 명령어 문자열
    int     push_int = 0;                                   // push 명령어에 입력받는 양의 정수
    int     my_stack[10001];                                // 정수를 넣을 정수 배열 스택
    int     idx_stacktop = 0;                               // 스택의 top에 해당하는 부분의 인덱스

    scanf("%d", &command_num);

    // 명령어 입력 받아서 처리하기
    for (int i=0; i<command_num; i++)
    {
        scanf("%s", command);
        if (strcmp(command, "push") == 0) {                 // push : 정수 X를 스택에 넣는다
            idx_stacktop++;
            scanf("%d", &push_int);
            my_stack[idx_stacktop] = push_int;
        } else if (strcmp(command, "pop") == 0) {           // pop : 스택 top에 있는 정수를 빼고 그 수를 출력, 스택이 비었을 경우 -1 출력
            if (idx_stacktop == 0)
                printf("%d\n", -1);
            else {
                printf("%d\n", my_stack[idx_stacktop]);
                my_stack[idx_stacktop] = 0;
                idx_stacktop--;
            }
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", idx_stacktop);
        } else if (strcmp(command, "empty") == 0) {
            if (idx_stacktop == 0)
                printf("%d\n", 1);
            else
                printf("%d\n", 0);
        } else if (strcmp(command, "top") == 0) {
            if (idx_stacktop == 0)
                printf("%d\n", -1);
            else
                printf("%d\n", my_stack[idx_stacktop]);
        } else
            return -1;
    }
    return 0;
}