T = int(input())

for tc in range(1, T + 1):
    num = int(input())
    n_list = [2, 3, 5, 7, 11]
    result = [0, 0, 0, 0, 0]
    for idx in range(len(n_list)):
        while num % n_list[idx] == 0:
            result[idx] += 1
            num /= n_list[idx]
        result[idx] = str(result[idx])
    print(f'#{tc}', *result)