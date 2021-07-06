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

#010. 함수 - 함수에 값 전달
"""
def mySum(num1, num2):
    print("%s + %s = %s" %(num1, num2, num1+num2))
mySum(2, 3)
mySum(5, 7)
mySum(10, 15)
"""
#011. 함수 - 함수에서 값의 반환
"""
def Factorial():
    result = 1
    num = 5
    
    while num >0:
        result *= num
        num -= 1
    
    return result

result = Factorial()
print(result)
"""
#012. 함수 - 함수에 값 전달과 반환값 받기
"""
def Factorial(num):
    result = 1
    while num > 0:
        result *= num
        num -= 1
    return result

num = 3
result = Factorial(num)
print(result)
"""
#013. 사용자로부터 값 받기 - 하드코딩 피하기
"""
name = input("ENTER:")
print("Hello %s." % name)

name = input('Enter:')
print(f"Hello {name}")
"""
#014. 사용자로부터 값 받기 활용 문항
"""
s = input("Enter:")

if s.isalpha():
    print("%s is a character." % s)
else:
    print("%s is a number." % s)
"""
#015. 커맨드라인에서 argument 입력 받기
"""
import sys

if len(sys.argv) !=2:
    print(f"python {sys.argv[0]} [num]")
    sys.exit[1]

try:
    num = int(sys.argv[1])
except ValueError as err:
    print(f"{err}, your input: {sys.argv[1]}")
    sys.exit(3)
try:
    res = 10/num
except ZeroDivisionError as err:
    print(err)
    sys.exit(2)
print(res)
"""

"""
num  = int(sys.argv[1])


sample = sys.argv[1]
print(f"processing: {sample}")
## 처리 분석
print(f"end: {sample}")
"""

#016 파일 읽기
file_name = "read_sample.txt"

"""
with open(file_name, "r") as handle: #첫째 방법
    for line in handle:
        print(line.strip())
"""

"""
handle = open(file_name, "r")   #둘째 방법
for line in handle:
    print(line.strip())
handle.close()
"""

"""
handle = open(file_name, "r")   #셋째 방법
lines = handle.readlines()
for line in lines:
    print(line.strip())
handle.close()
"""

# 017. 파일 쓰기
"""
f = open("write_sample.txt", "w")
f.write("Hello\n")
f.write("write.samle text file\n"
f.close()
"""
"""
write_string = "Hello\nwrite_sample text file\n"
with open("write_sample.txt", "w") as handle:
    handle.write(write_string)
"""

"""
file_name = "write_sample.txt"
with open(file_name, "a") as handle:
    handle.write("harry\n")

s = "s1,s2,s3" #csv
data = s.split(",")
print(data) #['s1', 's2'. 's3']

with open(file_name, "a") as handle:
    handle.write("**".join(data) +"\n")
"""

#019. 예외처리하기 (debugging)
"""
with open("noname.txt", "r") as fr: #page 107
     read = fr.readlines()
print(read)

try:
    with open("noname.txt", "r") as handle:
         read = handle.readlines()
except FileNotFoundError as err:
    print("no file") #noname.txt 를 생성하는 과정
    sys.exit() 

print(read)
"""   
 
"""
import sys

try: 
    num = int(input("Enter: ")) #109
except ValueError as err:
    print(err)
    sys.exit()

try:
    print(10/num)
except ZeroDivisionError as err:
    print("This is zero")
    sys.exit()
"""
"""
import sys
try:
    num = int(input("Enter: "))
    print(10/num)
except ZeroDivisionError as err1:
    print(err1)
    sys.exit()
except ValueError as err2:
    print(err2)
    sys.exit()
"""

"""
import sys
try:
    num = int(input("Enter: "))
    print(10/num)
except (ZeroDivisionError, ValueError) as err:
    print(err)
    sys.exit()
"""

#020. 문자열 더하기
"""
a = "Bio"
b = "informatics"
c = a+b
print(c)
"""
# Class 지문
"""
class A:
    def __init__(self, val):
        self.val = val

    def __add__(self, other):
        return self.val + other.val

    def __mul__(self, other):
        return "__mul__"

    def __len__(self):
        return 0

a1 = A("a")
a2 = A("b")
print(a1.val + a2.val)
print(a1 + a2)
print(a1 * a2)
print(len(a1))
"""

# class 다른 파일에 불러오는 법
"""
class ValueCalculator():
    def __init__(self, val: str):
        self.val = val법
    
    def __add__(self, other):
        return self.val + other.val

def Add(n1, n2):
    return n1 + n2

if __name__ == "__main__":
    print("hi")

class A:
    pass
"""
"""
#from ValueCalculator import ValueCalculator # 다른 파일에서 가져온다고 쳤을때
#from ValueCalculator import ValueCalculator, A
#from ValueCalculator import * #모든 class 나 함수 소환


value_calculator_1 = ValueCalculator("a")
value_calculator_2 = ValueCalculator("b")

res = value_calculator_1 + value_calculator_2
print(res)
print(Add(2, 3))
"""

#021. 문자열 n번째 출력하기
"""
Seq1 = "AGTTTATAG"
print(Seq1[5])
"""

#022. 문자열 나누기
"""
Seq1 = "AGTTTATAG"
print(Seq1[3:6])
"""

#023. 문자열 길이 구하기
"""
Seq1 = "AGTTTATAG"
print(len(Seq1))
"""

#024. 문자열 대소문자 변환하기
"""
Seq1 = "ATGttATaG"
print(Seq1.upper())
print(Seq1.lower())
"""
#복습 p117
"""
import gzip

path = './covid19.fasta.gz'

data = {}

with gzip.open(path, 'rb') as f:
    print(f.readlines())
    for line in f:
        if line.startswith(">"):
            continue
        for base in line.strip():
            if base not in data:
                data[base] = 0
            data[base] += 1
         
"""
#모델 답 - plain text 
"""
file_name = "covid19.fasta"

data = dict() # data = {}

with open(file_name, 'r') as handle:
    for line in handle:
        if line.startswith(">"):
             continue
        for base in line.strip():
            if base not in data:
                data[base] = 0
            data[base] += 1
print(data)
"""
# 모델 답 - gzip 읽는법
"""
import sys
import gzip

if len(sys.argv) !=2:
    print(f"usage: python {sys.argv[0]} [file]")
    sys.exit()

#file_name = "covid19.fasta.gz"
file_name = sys.argv[1]

data = dict() # data = {}

with gzip.open(file_name, 'rt') as handle:
    for line in handle:
        if line.startswith(">"):
             continue
        for base in line.strip():
            if base not in data:
                data[base] = 0
            data[base] += 1
print(data)
"""
# 모델 답 - Biopython으로 풀이 (txt 파일)
"""
from Bio import SeqIO

f = "./covid19.fasta"

record = SeqIO.read(f, "fasta")

print(f"A: {record.seq.count ('A')}")
print(f"C: {record.seq.count ('C')}")
print(f"G: {record.seq.count ('G')}")
print(f"T: {record.seq.count ('T')}")
"""
# 모델 답 - Biopython으로 풀이 (gzip 파일)
"""
import gzip
from Bio import SeqIO

f = "./covid19.fasta.gz"

with gzip.open(f, "rt") as handle:
    record = SeqIO.read(handle, "fasta")

print(f"A: {record.seq.count ('A')}")
print(f"C: {record.seq.count ('C')}")
print(f"G: {record.seq.count ('G')}")
print(f"T: {record.seq.count ('T')}")
"""

#025. 문자열 n씩 건너뛰며 출력하기***
"""
Seq1 = "ATGTTATAG"
for i in range(0,len(Seq1),3):
    print(Seq1[i])
"""

#026. 문자열 n씩 건너뛰며 출력하기 - codon 처럼 뽑기
"""
Seq1 = "ATGTTATAG"
for i in range(0, len(Seq1), 3):
    print(Seq1[i:i+3])
"""

#027. 문자열 순서 뒤집기
"""
Seq1 = "ATGTTATAG"
print(Seq1[::-1])
"""
# 모델 답
"""
s = "ATGTTATAG"
s_rev = s[::-1]
print(s)
print(s_rev)

for i in range(len(s)):
    print(f"{s[1]}{s_rev[i]"}
"""
#028. 문자열 바꾸기
"""
Seq1 = "ATGTTATAG"
d_Seq1 = {'A' : 'T', 'T' : 'A', 'G' : 'C', 'C' : 'G'}
for i in Seq1:
    print(d_Seq1[i], end = '')
print()
"""    
# 모델 답
"""
seq = "ATGTTATAG"
comp_seq = {'A' : 'T', 'T' : 'A', 'G' : 'C', 'C' : 'G'}
for s in seq:
    comp_seq += comp_data[s]
print(seq)
print(com_seq)
print("")

for i in range(len(seq)):
    s = seq[i]
    cs = comp_seq[i]
    bond = "≡"
    if s == "A" or s == "T":
        bond = "="
    print(f"{s}{bond}{cs}")
"""
#029. 특정 문자 확인하기
"""
Seq1 = "ATGTTATAG"
print("C" in Seq1)
"""

#030. 문자열 index 번호 출력하기 <- 마크로젠 코딩테스트 문제
"""
Seq1 = "AGTTTATAG"
for i in range(len(Seq1)):
    s = Seq1[i:i+2] 
    print(i, s, s == "TT")   
       # if s == TT:
           # print(i)
"""
#031. 문자열 리스트로 바꾸기
"""
s = "AA,AC,AG,AT"
print(s.split(","))
"""
#032. 리스트에 요소 추가하기
"""
s = "AA,AC,AG,AT"
data = s.split(",")
print(data)
data.append("CA")
print(data)
"""
#033. 리스트 순서 뒤집기
"""
s = "AA,AC,AG,AT"
data = s.split(",")
print(data[::-1])
"""
#034. 리스트에서 가장 큰 값, 작은 값 구하기
"""
data = [3, 1, 1, 2, 0, 0, 2, 3, 3]
print(min(data))
print(max(data)) 
"""
#035. 리스트의 요소값을 사전으로 세기
"""
l_data = [3, 1, 1, 2, 0, 0, 2, 3, 3]
d_data = {}
for i in l_data:
    if i not in d_data:
        d_data[i] = 0
    d_data[i] += 1
print(d_data)
""" 






