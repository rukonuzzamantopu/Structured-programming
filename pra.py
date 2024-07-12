# Function to count odd numbers in the range [L, R]
def count_odd_numbers(L, R):
    i = 0
    for num in range(L, R+1):
        if num % 2 != 0:
            i += 1
    return i

# Input
T = int(input())
for _ in range(T):
    L, R = map(int, input().split())
    # Output
    print(count_odd_numbers(L, R))



