def is_prime_aziziType(p):
    if(p <= 1):
        return False

    i = 2
    while(i * i <= p):
        if(p % i == 0):
            return False
        i += 1
    return True 
## 1.1
# a, b = [int(x) for x in input().split()]
# if(a > b):
#     a, b = b, a

# for i in range(a + 1, b):
#     if is_prime_aziziType(i):
#         print(i, end = ', ')

## 1.2
# n = int(input())

# i = 2
# while n:
#     if is_prime_aziziType(i):
#         n -= 1
#     i += 1
# print(i - 1)

n = int(input())
i = 2
while n != 1:
    while n % i == 0:
        n /= i 
        p_max = i 

    i += 1 

print(i - 1)
