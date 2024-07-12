fast, condition, secand = input("Enter your first number: "), input("Enter condition: "), input("Enter your second number: ")

fast = int(fast)
secand = int(secand)


if condition =="+":
    print(fast+secand)
elif condition =="-":
    print(fast-secand)
elif condition =="*":
    print(fast*secand)
elif condition == "/":
    print(fast / secand)
elif condition == "%":
    print(fast % secand)

else:
    print("inviled operation")