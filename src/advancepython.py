#! /usr/bin/env python

#002. Variable 연습문제 p73
"""
import math
import sys

if len(sys.argv) != 2:
    print(f"#usage: python {sys.argv[0]} [num]")
    sys.exit()

r = int(sys.argv[1]) 
pi = math.pi
result = round(r**2*pi, 2)
print(result)
"""

#003. operator 연습문제 p74
"""
num1 = 3
num2 = 5

print(num1 + num2)
print(num1 - num2)
print(num1 / num2)
print(num1 * num2)
print()
print(num1 %  num2)
print(num1 ** num2)

###
n1 = int(sys.argv[1])
n2 = int(sys.argv[2])

print(f"{n1} + {n2} = {n1+n2}")
print(f"{n1} - {n2} = {n1-n2}")
print(f"{n1} / {n2} = {n1/n2}")
print(f"{n1} * {n2} = {n1*n2}")
print(f"{n1} % {n2} = {n1%n2}")
print(f"{n1} ** {n2} = {n1**n2}")
"""

# 004. if -else p76
"""
import sys
num1 = int(sys.argv[1])

if num1%2 == 1:
   print("This is odd")
elif num1%2 == 0:
   print("This is even")
"""

# 005. if-elif-else p79
"""
import sys
num1 = int(sys.argv[1])
if len(sys.argv) !=2:
    print(f"#usage: python {sys.argv[0]} [n1] [n2]")
    sys.exit()

n1 = int(sys.argv[1])

if n1 % 3 == 0 and n1 % 7 == 0:
    print("3 or 7")
elif n1 % 3 == 0:
    print("3")
elif n1 % 7 == 0:
    print("7")
else: 
    print("not a 3 or 7")
"""

#006. for p80
"""
s = 0
for i in range(1,11):
    s += i
print(s)
"""

# 수정 곱셉으로
"""
s = 1
for i in range(2,11):
    s *= i
print(s)
"""

#007. 중첩 for 문 (해보기) p83


#008. while p84
"""
import sys
n = int(sys.argv[1])
val = 1

while n > 0:
    val *= n
    n -= 1
print(val)
"""
"""
i = 1
w = 1
while i < 6:
    w *= i
    i += 1
print(w)
"""

#009. 함수 p86
"""
def greet():
    print("Hello, Bioinformatics")

def greet1(name: str) -> None:
    print("Hello, {name}")

def greet2(num: int) -> int:
    return num * 2

greet()
ret1 = greet1("Harry")
print(ret1)

ret2 = greet2(3)
print(ret2)
"""






