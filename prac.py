ar = [
    [[4, 15]],
    [[0, 25]],
    [[15, 21]],
    [[18, 19]],
    [[5, 12]],
    [[6, 0]],
    [[16, 5]],
    [[18, 6]],
    [[5, 3]],
    [[20, 12]],
    [[25, 0]]
]

mat = [
    [1, 2],
    [1, 3]
]

result = [[0 for _ in range(2)] for _ in range(11)]

for i in range(11):
    for j in range(1):
        for k in range(2):
            sum_val = 0
            for l in range(2):
                sum_val += ar[i][j][l] * mat[l][k]
            result[i][k] = sum_val

print("Encoded message:\n")
for i in range(11):
    for j in range(2):
        print(result[i][j], end=" ")
    print()
