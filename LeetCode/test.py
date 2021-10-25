# i=0
# while i<10:
#     print(f"value of i is {i}")
#     i=i+1
# --------------------
# n=int(input("Enter the number"))
# i=0
# sum=0
# count=0
# while i<n:
#     i=i+1;
#     sum=sum+1
#     print(f"sum is {sum}")
# --------------------------------
# GCD---------------------
# m=int(int('Enter the first number: '))
# n=int(int('Enter the second number: '))
# if m==0 and n==0:
#     print('Invalid number')
# if(m==0):
#     print(f"GCD of {n}")
# if(n==0):
#     print(f"GCD of {m}")

# while m!=n:
#     if m>n:
#         m=m-n
#     if n>m:
#         n=n-m
# print(f"GCD of two number is {n}")
# Sum of the two numbers -------------------------------
# n=int(input("Enter the number: "))
# sum=0
# while n!=0:
#     sum=sum+(n%10)
#     n=n//10
# print(f"Sum is {sum}")
# ------------range--------------
# for x in range(10):
#     print(x)
# for x in range(2,6):
#     print(x)
n=int(input("Enter the range of the number: "))
sum_o=0
sum_e=0
for x in range (n):
    if (x%2==0):
        sum_e=sum_e+x
    else:
        sum_o=sum_o+x
print(f"sum of odd number is {sum_o} and even is {sum_e}")