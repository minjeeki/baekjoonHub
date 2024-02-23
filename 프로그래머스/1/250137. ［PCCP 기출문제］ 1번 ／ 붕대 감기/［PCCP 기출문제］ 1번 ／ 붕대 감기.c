#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int last_attack = attacks[attacks_rows - 1][0];         // 몬스터가 가장 마지막으로 공격하는 시간 (while문의 최댓값)
    int max_health = health;                                // 최대 체력
    int time = 0;                                           // 몬스터에게 공격 받는 전체 시간
    int idx_attack = 0;                                     // 곧 다가올 몬스터 공격에 대한 배열 인덱스
    int heal_time = 0;                                      // 연속 붕대감기 시간
    
    while (time <= last_attack)
    {
        if (time == attacks[idx_attack][0])                 // 몬스터에게 공격 받을 때
        {
            health -= attacks[idx_attack][attacks_cols - 1];    // 몬스터에게 공격 받은만큼 체력 감소
            if (health <= 0)                                // 현재 체력 0 이하가 될 경우 -1 반환
                return (-1);
            heal_time = 0;                                  // 그동안의 연속 붕대감기 시간 리셋
            idx_attack++;                                   // 다음 몬스터 공격 배열로 정렬
        }
        else                                                // 몬스터에게 공격 받지 않을 때
        {
            if (health == max_health)                       // 현재 체력이 최대 체력일 경우 (else 내부에 관련 처리 있어서 코드 빼도 되긴 함)
                heal_time++;                                // 연속 성공 처리 & 추가 체력 회복 없음
            else                                            // 현재 체력이 최대 체력 미만일 경우
            {
                heal_time++;                                // 연속 성공 시간 countdown 시작
                if (bandage[0] == heal_time)                // 연속 성공 시간이 시전 시간만큼 될 경우
                {
                    health += bandage[bandage_len - 1];     // 추가 회복량만큼 체력 추가 회복
                    heal_time = 0;                          // 연속 성공 시간 0으로 리셋
                }
                health += bandage[1];                       // 기본적으로 초당 회복 시간만큼은 연속 시간 달성 여부 상관없이 추가
                if (health > max_health)                    // 증가한 체력이 최대 체력을 넘을 경우
                    health = max_health;                    // 현재 체력을 최대 체력으로 설정
            }
        }
        time++;
    }
    return health;
}