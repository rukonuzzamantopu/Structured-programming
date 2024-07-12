def fibonacci(n):
    fib_sequence = [0, 1]
    for i in range(2, n):
        next_term = fib_sequence[-1] + fib_sequence[-2]
        fib_sequence.append(next_term)
    return fib_sequence

num_terms = int(input("Enter the number of terms for the Fibonacci sequence: "))

if num_terms <= 0:
    print("Please enter a positive integer.")
else:
    sequence = fibonacci(num_terms)
    print("Fibonacci sequence up to {} terms:".format(num_terms))
    print(sequence)

