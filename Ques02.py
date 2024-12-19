import math
n = int(input("Enter the Number "))
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

if is_prime(n):
    print("Prime")
else:
    print("Not Prime")