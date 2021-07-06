#! /usr/bin/env python

"""
A sample of 
multiline
comment with 
triple quotes
"""

#TODO colour~~

# This is an exmaple code
#print ("Hello, World!")

#Numbering
"""
1
1.
-3.2
0o1311
0x2c9
0x1
0xa
type(1)
type(1.)
type(0o43)
7+3
7-3
7 * 3
7 / 3
2 ** 5
7 % 3
7 // 3
"""

#Wording
#print("""Hello, World""")
#print("Hello, \'World!\'")
#print ("Hello, \tWorld!")
#print ("Hello, \nWorld!")
#print("""Hello,
#print(num)
#World!""")

"""
print("Hello, \rWorld!")
print("Hello,\n\rBi!")
print("Hello, " + "World!")
print("Hello " *3)
"""

#Word Mixing & Indexing & Slicing
"""
fruit = 'apple'
print(fruit)
print(fruit + 'tree')
print(fruit + ' tree') 
tree = fruit + ' tree'
print(fruit, 'from', tree)
print(fruit, 'from', fruit, 'tree')
print(fruit*3)
print('-' * 30)
print(fruit[0])
print(fruit[1])
print(fruit[2])
print('-' * 30)

print(fruit[0:3])

fruit = 'apple'
print(fruit)
print(fruit[1:3])
print(fruit[:3])
print(fruit[1:4])
print(fruit[2:])

#String splicing

A = 'Red Apple'
B = 'Yellow Banana'
print(B[:7]+A[4:])
print(A[:3]+B[6:])

sample='HumptyDumptysatonawallHumptyDumpty\
hadagreatfallAlltheKingshorsesandallthe\
KingsmenCouldntputHumptyDumptyinhisplaceagain.'
#Humpy Dumpy Problem
print(sample[22:28]+' '+sample[97:103])
print(sample[22:28], sample[97:103])
print(sample[22:28], end = ' ')
print(sample[97:103])
"""

#문자열 포맷팅
"""
cntApple = 1
print('there are %d apples.' % cntApple)
cntApple = 2
print('there are %d apples.' % cntApple)
cntApple = 3
print('there are %d apples.' % cntApple)
cntApple = 4
print('there are %d apples.' % cntApple)
print('-' * 30)

fruit='apples'
print('there are %s from %s tree.' % (fruit, fruit))
fruit='peachs'
print('there are %s from %s tree.' % (fruit, fruit))
fruit='plum'
print('there are %s from %s tree.' % (fruit, fruit))


cnt = 1
print('there are {} apples.'.format(cnt))
cnt = 'one'
print('there are {} {}.'.format(cnt, 'peaches'))
"""

#문자열 함수
"""
fruit = 'apple'
print('apple.count(p):', fruit.count('p'))
print('apple.find(p):', fruit.find('p'))
print('apple.find(k):', fruit.find('k'))
print('apple.index(p):', fruit.index('p'))
#print('apple.index(k):', fruit.index('k'))
print('"".join(p):', "_".join('apple'))
print('Apple:', 'Apple'.upper())
print('Apple:', 'Apple'.lower())
print(' apple :', ' apple ')
print(' apple .lstrip() :', ' apple '.lstrip())
print(' apple .rstrip() :', ' apple '.rstrip())
print(' apple .strip() :', ' apple '.strip())
print('"apple from apple tree".replace("apple", "peach"):\n', "apple from apple tree".replace("apple", "peach"))
print('"apple from apple tree".split(" "):\n', "apple from apple tree".split(" "))
"""

#연습문제 p45
"""
CMA = "1,234,567"
print(int(CMA.replace(",", ""))+100)
print(type(CMA.replace(',','')))
print(int(CMA.replace(",", ""))+100)
print(type(int(CMA.replace(',',''))))
"""

#List
"""
first = 1
second = 2
third = 3

print(first)
print(second)
print(third)
print()

one2three = [1, 2, 3]
l_fruits = [1, 2, 3, 'apple', ' ']
print(one2three)

print(l_fruits[0] + l_fruits[2])
print(l_fruits[1:3])
print(l_fruits[:4])

l_test1 = [1, 2, 3, 'apple', ' ']
l_test2 = ['a', 'b', 'c']
print(l_test1)
print(l_test2)
print(l_test1 + l_test2)
print(l_test1 *3)

l_test3 = [1, 2, 3, 4, [5, 6, 7, 8, 9]]
print(l_test3)
print(l_test3[3:5])
print(l_test3[:4])
print(l_test3[2])

strList = ['String', 'list']
print(strList)

numbers = [1, 2, 3]
print("numbers[1]:", numbers[1])
print("numbers[-1]:", numbers[-1])
print("numbers[::-1]:", numbers[::-1])

multiple = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("multiple[1:5:1]:", multiple[1:5:1])
print("multiple[1:5:2]:", multiple[1:5:2])
print("multiple[1:5:3]:", multiple[1:5:3])
print()
print("multiple[::-1]", multiple[::-1])

print("multiple[::1]", multiple[::1])
print("multiple[::2]", multiple[::2])
print("multiple[::3]", multiple[::3])
print()
print("multiple[::-1]", multiple[::-1])
print("multiple[::-2]", multiple[::-2])
print("multiple[-2:-6:-2]", multiple[-2:-6:-2])

links = [0, 1, 2, 3]
print(links)
links[2] = 5
print(links)
"""

#리스트 함수
"""
num = [1, 2, 3, 4]
print(num)
num[1] = 6
print(num)
del num[2:]
print(num)

num.append(3)
print('append  3  :', num)
num.append([1,2])
print('append [1,2] :', num)
num.remove([1,2])
print(num)
num.sort()
print(num)
num.reverse()
print(num)

print(num.index(1))
print(num[1])

num.insert(2, ['a', 'b'])
print(num)
print(num.pop())
print(num.pop(2))
print(num)
num.extend(['A', 'B'])
print(num)

num = [1, 3, 6, 7]
print(num)
print(num.index(3)) #1
num.insert(0, 0)
num.insert(3, 2)
print(num)
print(num.pop())
print(num.pop())
print(num.pop())
print(num)

print(num.pop(0))
print(num)

countList = [1, 1, 2, 1, 1, 3, 4, 4]
print(countList.count(1)) #4
countList.extend(num)
print(countList)
"""

#리스트 만들기 연습 p52
"""
lang0 = ["Python", "JAVA"]
lang1 = ["C", "C++", "VB"]

#totalLang = lang0 + lang1
#print(totalLang)

totalLang = lang0
totalLang.extend(lang1)
print(totalLang)
"""

#튜플
"""
t_num = (1, 2, 3, 'a')
print(type(t_num))
print(t_num)

print(t_num[0])
print(t_num[0:2])
#t_num[1] = 5
"""

#딕션너리
"""
d_table = {'fruit':'apple', 'color':'red', 'dia': 10}
print(d_table['color'])
d_table['color'] = 'orange'
print(d_table['color'])
print(d_table)

print(d_table.keys())
print(list(d_table.keys())[1])
print(d_table.values())
print(list(d_table.values())[1])

print(d_table.items())
print(list(d_table.items())[1])

print(type(list(d_table.items())[1]))
print(list(d_table.items())[1][1])

print(d_table.get('fruit'))
print(d_table['fruit'])
print('-' *50) 

apple1 = {'price': 1000, 'color': 'red', 'harvest': 'apple tree', 'price': 2000}
print('\napple1: ', apple1)
print('apple1.keys():', apple1.keys())
print('apple1.values():', apple1.values())
print('apple1.items():', apple1.items())

print("\napple1.get('harvest'):", apple1.get('harvest'))

print()
print('price' in apple1)
print('color' in apple1)
print('fruit' in apple1)

#apple1.clear()
print('\napple1:', apple1)
print('-'*50)
"""

#딕셔너리 활용 p56
"""
regNum0 = '951213-0000000'
regNum1 = '960125-0000000'
regNum2 = '970705-0000000'

d_months ={ 'regNum0' : 'Dec-13',  'regNum1': 'Jan-25', 'regNum2' : 'Jul-05' }
print('regNum0:', d_months.get('regNum0'))
print('regNum0:', d_months.get('regNum1'))
print('regNum0:', d_months.get('regNum2'))
"""

# 모범답안
# d_mon = { '01' : 'Jan', '02' : 'Feb', '07' : 'Jul', '12' : 'Dec'}
# prt0 = d_mon[regNum0[2:4]] + '-' + regNum0[4:6]
# prt1 = d_mon[regNum0[2:4]] + '-' + regNum0[4:6]
# prt2 = d_mon[regNum0[2:4]] + '-' + regNum0[4:6]
# print('regNum0:', prt0)

"""
d_dict = {
         'a_str' : 'Apple!',
         'b_list' : [1, 2, 3, 4],
         'c_tuple': ('a', 'b', 'c'),
         'e_dict' : {1: 'one', 2: 'two'}
         }
print('d.dict:', d_dict)
print('d.dicta:', 'a_str')
print('d.dictb:',' b_list')
print('d.dictc:', 'c_tuple')
print('d.dicte:', 'e_dict')

print('d_dictb0:', d_dict['b_list'][0])
print('d_dictb1:', d_dict['b_list'][1])
print('d_dictb2:', d_dict['b_list'][2])
print('d_dictb3:', d_dict['b_list'][3])
"""

#집합
"""
print(set([1, 2, 3, 4, 4, 5, 7, 4, 4, 5]))

mySet = {'a', 'b', 'c'}
print(mySet)

setA = {2, 4, 6, 8, 10, 12}
setB = {9, 3, 12, 6}
"""
"""
#union (|)
print( setA | setB )
#interaction (&)
print( setA & setB )
#difference (-)
print( setA - setB )
#symmetric_difference (^)
print( setA ^ setB )
"""
#addition
#setA |= {100}
#위에랑  똑같은거 -> setA.add(100)
"""
print(setA)
setA.remove(100)
print(setA)

print(setA | setB)
"""
# 위에랑 똑같은거 -> print(set.union(setA, setB))
"""
setC = {'j', 'b'}
print( set.union(setA, setB, setC))
print( setA | setB | setC )
"""
#Boolean
"""
print(True, False)
print(bool('aa'))

print( 1 < 10 )

condition = 1 < 10
print(condition)
"""
#사용자입력
#myVar = input('Please input string: ')
#print()
#print(myVar)

#myVar1 = input('Var1: ')
#myVar2 = input('Var2: ')
#myVar3 = input('Var3: ')
#print()
#print(myVar1)
#print(myVar2)
#print(myVar3)

# 제어문 - tab vs spaces
#myVar1 = input ('Var1: ')

#if myVar1 == '1':
#    print('myVar1 is 1!')
#    print ('lalala')
#else:
#    print('myVar1 is not 1!')

# 제어문 - if
#myVar1 = input('Var1: ')

#if myVar1 == '1':
#    print('myVar1 is 1!')
#else:
#    print('myVar1 is not 1!')
#    pass
#    raise Exception('myVar1 is not 1!')
#print('Good Bye!')

#연산자 
"""
print(1 < 10)
print(1 > 10)
print(1 == 10)
print(1 == 1)
print(1 != 10) #1이 10과 다르냐
print(5 <= 10)
print(5 >= 10)
print(not (5 >= 10))
print(not False)
print(not True)
print(( 1 < 10 ) and ( True ))
print(( 1 < 10 ) and ( False ))
print(2 in [1, 2, 3])
"""
# 큰수 출력하기 p65
"""
num0 = 5
num1 = 7

if num1 > num0:
    print(num1)
"""
# 모델 답
"""
if num0 < num1:
    print(num1)
else:
    print(num0)
"""
# 아니면 이렇게 쓰는 방법도 가능 하다 -> # print(num1) if num0 < num1 else print(num0)

# if 문 further - elif
"""
fruit = 'apple'
if fruit == 'peach':
    print('peach')
elif fruit == 'apple':
    print('apple')
else:
    print('else~~~')
"""

#등급 지정하기 p66
#score = int(input('score: '))
#if score.isdigit(): print("score:", score, "is digit!")

#if score.isdigit():
#   print("score: ", score, "is digit!")  
#if 90 <= score <= 100:
#    print('grade: A')
#elif 80 <= score <= 90:
#    print('grade: B')
#elif 70 <= score <= 80:
#    print('grade: C')
#elif 60 <= score <= 70:
#    print('grade: D')
#elif 0 <= score <= 60:
#    print('grade: F')
#elif:
#    print('Wrong input')
#else:
#    pass

#모델 답
#score = input('score: ')
#score = int(score)
#if (score =<100) and (score >= 90):
#    grade = "A"
#elif (score =< 90) and (score >= 80):
#    grade = "B"
#elif (score =< 80) and (score >= 70):
#    grade = "C"
#elif (score =< 70) and (score >= 60):
#    grade = "D"
#elif (score < 60)
#    grade = "F"
#else:
#    grade = 'Incorrect Score'
#print(grade)

# 환율계산기 p67
"""
inStr = '10 USD, 5 EUR, 7 JPY, 9 CNY'
d_value = {'USD': 1203.82,'EUR': 1365.73,'JPY': 11.22,'CNY': 172.04}

Num = inStr.split(',')
USD = d_value['USD']
EUR = d_value['EUR']
JPY = d_value['JPY']
CNY = d_value['CNY']
print(Num)

A = Num[0].split(' ')
B = Num[1].split(' ')
C = Num[2].split(' ')
D = Num[3].split(' ')
print(A, B, C, D)

A = float(A[0])
B = float(B[1])
C = float(C[1])
D = float(D[1])
print(A, B, C, D)

A1 = A*USD
B1 = B*EUR
C1 = C*JPY
D1 = D*CNY
print(A1, B1, C1, D1)

A1 = round(A1, 3)
print(type(A1))
print(A1)

A1 = str(A1)
B1 = str(B1)
C1 = str(C1)
D1 = str(D1)

outStr = '{}{}, {}{}, {}{}, {}{}'.format(A1, 'KRW', B1, 'KRW', C1, 'KRW', D1, 'KRW')
print(outStr)
"""

#모델 답
# inStr = '10 USD, 5 EUR, 7 JPY, 9 CNY'
# d_value = {'USD': 1203.82,'EUR': 1365.73,'JPY': 11.22,'CNY': 172.04}
# inStr = inStr.split(',')
# VALUE0 = inStr[0].strip().split()[0]
# TYPE0 = inStr[0].strip().split()[1]
# VALUE1 = inStr[1].strip().split()[0]
# TYPE1 = inStr[1].strip().split()[1]
# VALUE2 = inStr[2].strip().split()[0]
# TYPE2 = inStr[2].strip().split()[1]
# VALUE3 = inStr[3].strip().split()[0]
# TYPE3 = inStr[3].strip().split()[1]
#print(VALUE0, VALUE1, VALUE2, VALUE3)
#print(TYPE0, TYPE1, TYPE2, TYPE3)

#RESULT0 = str(round(int(VALUE0))) * d_value[TYPE0], 3)
#RESULT1 = str(int(VALUE1)) * d_value[TYPE1]
#RESULT2 = str(int(VALUE2)) * d_value[TYPE2]
#RESULT3 = str(int(VALUE3)) * d_value[TYPE3]

#print(RESULT0, RESULT1, RESULT2, RESULT3)
# ''.join(inStr)

#While 문
#i = 1
#while i < 11: #12345678910
#    print('loop test while.' +str(i))
#    i += 1

#i = 1
#while True :
#    print('loop test: ' + str (i))
#    if 50 < i :
#        break
#    i += 1

#삼각형 그리기 p69
#i = 1
#while i < 11:
#    print('*'*i)
#    i += 1

#모델 답 1
# i = 1
# while True :
#    print ('*' *i)
#    i += 1
#    if 7 < i:
#        break

#모델 답 2
# star =''
# while True:
#    print(star)
#    star += '*'
#    i += 1
#    if 7 < i:
#        break

# 정삼각형 만들기
#i = 1
#j = 1
#while i <11 and j <11:
#    print(' '*(11-i) + '* '*j)
#    i += 1
#    j += 1

#정사각형 만들기
#i = 1
#j = 1
#while i < 11 and j < 11:
#    print('* '*(11-i) + '* '*j)
#    i += 1
#    j += 1

#역삼각형 만들기 (도전)

# for 문
"""
l_range = [1, 2, 5]

for i in l_range: # 1, 2, 5 차례로 코드 프린트
    print(i)
print('done!')

l_range = [1, 2, 5]
i = '*'
for a in l_range:
    print(a)
    print(i)
print('done')

l_range = [1, 2, 5, 3, 1, 7]
for i in l_range:
    print('current i: ', i)
    if i == 1: # indent required 
        print(i)
    else: 
        print('Not 1!')
print('done!')

for i in l_range:
    if i == 1:
        print(i)
    else:
        continue # continue는 for로 다시 돌아
    print('current i:', i)

for i in range(2):
    print('*')

print(range(5))
print(list(range(5)))
print('hello'[0:2], 'hello'[::-1])
range(0, 5, 1)

print('0123456789'[0:5:1])
print(list(range(0,5,1)))

#예제
totalSum = 0

for i in range(3):
    totalSum += i
    print(i)

print('totalSum:', totalSum)

for i in range(3):
    if i == 2:
        print(i)
    else:
        pass #pass 라는 줄이 실행했을때 내가 control 하지 않겠다는 뜻임
    print('current i:', i)
"""

#구구단 출력하기 p72
"""
i = input('please put number 2:')
myrange = list(range(2,20,1))
for i in myrange:
    if i == 2:
        print(myrange[0::2])
"""
"""
myInput = input('') #input 할때 항상 string으로 들어감
myInput = int(myInput)
i = 1
if myInput == 2:
    while i < 10:
        print(i * 2)
        i += 1
"""

#모델 답
"""
gugu = input('gugu?')

while not gugu.isdigit():
    gugu = input('gugu is not digit!:')
print("gugu!!!: ", gugu)

gugu = int(gugu)
for i in range(1, 10):
    dan = i * gugu
    print('{} * {}: {}'.format(gugu, i, dan))
"""

"""
gugu = input('gugu?')

while not gugu.isdigit():
    gugu = input('gugu is not digit!:')
gugu = int(gugu)
#gugu is integer
while (2 <= gugu <=19):
   gugu = input('[2,19]:')
"""

#Rosalnd Q - Conditions and Loops. The sum of all odd from 'a through 'b'
"""
total = 0
for i in range (101, 200, 2):
    total += i
print(total)

myList = []
for i in range(101, 200):
    if i % 2 == 1:
        myList.append(i)
print(sum(myList))

print(sum(range(101, 200, 2)))
"""

"""
inStr = input('a(Space)b:')
a, b = inStr.split()

myList = []
for i in range(int(a), int(b)):
    if i % 2 == 1:
        myList.append(i)
print(myList)
print(sum(myList))
"""

# Palindromic Sequence 판별 p74 (재연습 필요)
"""
pal_seq = input('Put DNA sequence:')
d_comp = {'A':'T', 'T':'A', 'G':'C', 'C': 'G'}
"""

# 모델 답
"""
inSeq = input('Give Me Sequence!: ')
d_nucl = {'A':'T', 'T':'A', 'G':'C', 'C':'G'}
outSeq = ''
for i in inSeq[::-1]:
    outSeq += d_nucl[i]
if (outSeq == inSeq):
    print('{} is palindromic'.format(inSeq))
else:
    print('{} is not palindromic'.format(inSeq))
"""

# Rosalind Q - Dictionaries p59 (재연습 필요)
"""
toCount = 'We tried list and we tried dicts also we tried Zen'
l_toCount=(toCount.split( ))
for i in l_toCount:
     print(i.strip())
"""

# 모델 답
"""
oCount = 'We tried list and we tried dicts also we tried Zen'
d_Count = dict()
print(d_Count)

l_toCount = toCount.split()
for key in l_toCount:  # 단어 리스트
    print(key.strip())  # 단어 확인

    if key not in d_Count: # 딕셔너리 키 유무
        d_Count[key] = 1 # 없으면 1
    else:
        d_Count[key] += 1 # 있으면 +1

for i in d_Count:
    print(i, d_Count[i])

for k, v in d_Count.items():
    print(k, v)
"""

"""
from collections import Counter

toCount = 'We tried list and we tried dicts also we tried Zen'

l_toCount = toCount.split()
cnt = Counter(l_toCount)
print(cnt)   

for k, v in cnt.items():
    print(k, v)
"""

#함수
"""
def showHello():
    print("Hello")
    return '1'

showHello()
print(showHello())

a = showHello()
print("number?")
print(a)
"""
#함수 매개변수 
"""
def add(a,b):
    print('add',a,'and',b)
    print('%d + %d =' % (a,b), a+b)
    return a+b

result = add(3,4)
print('result:',result)
"""
#함수 python 3.9부터 바뀐 사항
"""
def hello() -> None:
    print('hello!!!')

def add(a, b) -> int:
    print a+b

print(hello())
print(add(3,4))
"""
# 매개변수 기본값 설정
"""
def add(a, b = 3):
    return a+b

print(add(3))
"""
#예제 p78
"""
def book_0(name, age, book1, book2):
    print('name: {} age: {}'.format(name, age), end = ' ')
    print('book:', book1, book2)

def book_1(name, age, *books): # * 가벼운 매개변수 활용 - > 다 books 라는 리스트에 넣어버림
    print('name: {} age: {}'.format(name, age), end = ' ')
    print('book:', end = ' ')
    for book in books:
        print(book, end = ' ')
    print()

book_0('yune', 5, 'python', 'basic')
book_1('yune', 5, 'python', 'basic')
book_1('yune', 5, 'python', 'basic', 'photo')
book_0('yune', 5, 'python', 'basic', 'photo') #error
"""
# lambda 사용
"""
print('lambda:', (lambda a,b: a+b)(3,4))

def add(a,b): return a+b
"""

#사칙연산 함수 p79
"""
def cal(num0, num1, op): 
    if ('%d + %d ='% (num0,num1)):
        result = num0 + num'  %d ='% (num0,num1)): 
    elif ('%d + %d ='% (num0,num1)):
        result =num0 + num1
    elif ('%d 'op' %d ='% (num0,num1)): 
        result = num0 * num1
    elif ('%d 'op' %d ='% (num0,num1)):
        result = num0 / num1
    else:
        print('wrong input')
return result
"""
# 모델답
"""
def cal(num0, num1, op):
    print( '{} {} {}'.format(num0, op, num1))
    if op == '+':
        result = num0 + num1
    elif op == '-':
        result = num0 - num1
    elif op == '*':
        result = num0 * num1
    elif op == '/':
        result = num0 / num1
return result

cal1 = cal(7, 8, '+')
cal2 = cal(2, '/')
print(cal1)
print(cal2)
"""


#피보나치 수열 p80
"""
n_pivo = int(input('n_th pivo:'))
l_pivo = [0, 1]

def pivo(n):
     n_pivo = n
     for l_pivo in range(n):
         pivo(l_pivo[n]-1) + pivo(l_pivo[n]-2)   
     return pivo(n-1) + pivo(n-2)
"""
#모델 답
"""
#리스트 사용
n_pivo = int(input('n_th pivo: '))
l_pivo = [0, 1]
print('len(l_pivo):', len(l_pivo))
#Use list and .append
def pivo(n):
    #while len(l_pivo) < n:
    for i in range(n- len(l_pivo)):
        l_pivo.append(l_pivo[-1] + l_pivo[-2])
    print(l_pivo[-1])
    print(l_pivo)
pivo(n_pivo)

#재귀함수 사용
def pivo_r(n):
    if n == 0:
       return 0
    elif n == 1:
       return 1
    else:
       return pivo_r(n-1) + pivo_r(n-2)
print(pivo_r((n_pivo -1))
"""

# 모델 답 (인터넷 - 재귀함수 -> 오래 걸림)
"""
n_pivo = int(input('n_th pivo:'))
l_list =[]
def pivo(n):
    if n == 0:
        return 0
    elif n ==1 or n ==2:
        return 1
    else:
        return pivo(n-1) + pivo(n-2)
for i in range(n_pivo): 
    l_list.append(pivo(i))
print(l_list)
cal1 = pivo(n_pivo)
print(cal1)
"""

#변수 유효 범위 p81 예
"""
chicken = 10 # 전역변제수

def countChicken(people):
    chicken = 20 #지역변수
    chicken -= people
    print(chicken, 'chickcen remained')

def countChicken_global(people):
    global chicken
    chicken = chicken - people
    print(chicken, 'chicken remained')

print('chicken', chicken) # 전역변수
countChicken(5) #지역변수 사용, 전역변수 그대로
print('chicken', chicken) # 전역변수
print()
print('chicken', chicken) # 전역변수
countChicken_global(5) # 전역변수 수정
print('chicken', chicken) # 전역변수
"""

# 파일 입출력 p82 
# 파일 만들기 test_file.txt => 첫줄 1 2 3 둘째줄 10 20 30 셋째줄 100 200 300

#읽는것
"""
FILE = open('./test_file.txt', 'r')
print(FILE.read(), end = ' ')

total = FILE.read()
print(total)

FILE.readline() # 줄대로 볼수 있는 명령어
FILE.readlines() #각줄들을 리스트로 볼수 있는 명령어

FILE = open('./test_file.txt', 'r')
for i in FILE.readlines(): #[line0, line1, ...]
    print(i.strip().split()[0])

FILE.close()
"""
# 쓰는것
"""
FILE = open('./write_file.txt', 'w')

for i in ['I', 'like', 'apple']:
    FILE.write(i + '\n')

FILE.write('writeData!!\n')

FILE.close()

# 파일안에 추가하는것
FILE = open('./write_file.txt', 'a')

for i in ['I', 'like', 'apple']:
    FILE.write(i + '\n')

FILE.write('writeData!!\n')
FILE.close()
"""

#with 문 사용법 - 오픈한 파일은 클로즈 해야하지만 with open으로 열면 자동적으로 닫아준다 
"""
with open('.write.file.txt', r) as FI:
    for i in FI.readlines():
        print(i.strip())
    print('with out! Bye!')
print('hi')
"""

#Pickle 이용 예제

#클래스
"""
a = 'apple'
a.count('p')
# count 함수. a라는 객체안에 .을 붙여 count라는 함수를 쓴다
# a.count에는 count라는 함수가 있다
# a.split에는 split라는 함수가 있다
# 불문율: 첫 클래스 명은 무조건 대문자로 시작
"""

#클래스 (3) p89 예제
"""
class Person:
    nation = 'A nation'
    def greeting(self):
        print('(method)greeting:', 'Hi')
   
    def hi1(self):
        self.greeting()

    def hi2(self):
        greeting()

def greeting(): #클래스랑 따로 독립적인 함수 (indent 없음)
    print('(function)greeting:', 'Hello!')

yune = Person()
yune.greeting()
print()
yune.hi1()
yune.hi2()
"""    
# Class init 예제
"""
class Person:
    def __init__(self, in_nation): 
        self.nation = in_nation

    def showNation(self):
        print(self.nation)

yune = Person('Korea')
yune1 = Person('AAA')

yune.showNation()
yune1.showNation()
"""
# Class 상속 예제 p93
"""
class Cat:
    def __init__(self):
        self.sleepy = True

    def snack(self):
        print('Myeo~')

    def showSleepy(self):
        print(self.sleepy)

class KoShort(Cat):
    def setAge(self, Age):
        self.__age = Age
        print('set age to', Age)

    def showAge(self):
        print(self.__age, 'years old.')

    def snack(self):
        print("야옹")

catcat = Cat()
catcat.snack()
print(catcat.sleepy, end = '\n\n')

minyong = KoShort()
minyong.setAge(7)
minyong.snack()
minyong.showAge()
print(minyong.sleepy)
print(minyong.__age)
"""

#모듈 부분은 직접 풀어보면서 

#예외처리 예제
"""
print('Try:')
try: 
    print("aaaaaaa")
    print(minyong.__age)
    print("aaaaaaa")

except:
    print('Error!')

print("Done!")
"""

# 원의 면적 구하는 함수 만들기 p85

def totalarea(a):
    input1 = float(input('please put radius:'))
    print(input1 **2 * 3.141592)
    return

totalarea('a')


# 사람(국적)_클래스 만들기 p91
d_persons=['Guillaume' : 'Canada', 'Niklas' : 'Germany', 'Mark' : 'USA', 'Alex' : 'Swiss', 'Alberto' : 'Italia'}

class Person:
    nation = 'A nation'
    def name(self)
        print(d_persons[''])


        

