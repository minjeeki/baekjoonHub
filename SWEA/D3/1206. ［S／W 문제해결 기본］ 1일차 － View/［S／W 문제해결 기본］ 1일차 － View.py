T = 10

for tc in range(1, T + 1):
    N = int(input())
    buildings = list(map(int, input().split()))
    cnt = 0
    for idx in range(2, N - 2):
        near = [buildings[idx - 2], buildings[idx - 1], buildings[idx + 1], buildings[idx + 2]]
        max_near = max(near)
        if max_near < buildings[idx]:
            cnt += (buildings[idx] - max_near)
    print(f'#{tc} {cnt}')