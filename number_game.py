import random 

num = random.randint (1,999)
print(num)
guess = int(input("guess a num"))
if guess == num:
    print("you win")
else:
    print("you lose")

