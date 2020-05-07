num_1 = input("Enter number 1: ")
num_2 = input("Enter number 2: ")
num_3 = input("Enter number 3: ")

if num_1 > num_2:
    if num_1 > num_3:
        print("Largest: ",num_1)
elif num_2 > num_3:
    print("Largest: ",num_2)
else:
    print("Largest: ",num_3)
