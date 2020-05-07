num = int(input("Enter from: "))
limit = int(input("to: "))
a = 2
found = True

while num <= limit:
    while a < num and found:
        if num % a == 0:
            found = False
        a += 1
    if found:
        print(num)
    num += 1
    a = 2
    found = True
