#! /usr/bin/env python
"""
Samsung = 50000
Stock = 10
Total = Samsung * Stock
print(Total)

A = 298000000000
B = 50000
PER = 15.79
print(A)
print(B)
print(PER)
 
s = 'hello'
t = 'python'
print(s+"!"+t)

print(2 + 2 * 3)

a = 128
print(type(a))

z = "132"
print(type(z))

num_str = "720"
print(int(num_str))

number = 100
print("number")


data = "15.79"
data = float(data)
print(data,type(data))

year = "2020"

print(int(year)-3)
print(int(year)-2)
print(int(year)-1)

Air = 48584
months = 36
Total = Air * months
print(Total)

letters = 'python'
print(letters[0], letters[2])

license_plate = '24가 2210'
print(license_plate[4:])

string = "ababab"
print(string[::2])

string = "PYTHON"
print(string[::-1])

phone_number = "010-1111-2222"
print(phone_number.replace('-', ' '))
print(phone_number.replace('-', ''))

url = "http://sharebook.kr"
url_split = url.split('.')
print(url_split)
print(url_split[-1])

#lang = 'pytho'
#lang[0] = "P"
#pring(lang)

string = 'abcdfe2a354a32a'
print(string.replace('a', 'A'))

print('aBcd')

print("34")

print("HiHiHi")

print('-' * 80)

t1 = 'python'
t2 = 'java'
t3 = t1 + ' ' + t2 + ' '
print(t3* 4)

name1 = 'Harry'
age1 = 10
name2 = "Sam"
age2 = 13
print('name: %s age: %d' % (name1, age1))
print('name: %s age: %d' % (name2, age2))

print('name: {} age: {}'.format(name1, age1))
print('name: {} age: {}'.format(name2, age2))

IP = "5,969,782,550"
print(int(IP.replace(',', '')))

quarter = "2020/03(E) (IFRconnection)"
print(quarter[0:6])

data = "    samsung   "
print(data.strip())

ticker = "btc_krw"
print(ticker.upper())

ticker = "BTC_KRW"
print(ticker.lower())

fourtythree = "hello"
print(fourtythree.replace('h', 'H'))

a = "hello world"
print(a.split(" "))

ticker = "btc_krw"
print(ticker.split("_"))

date = "2020-05-01"
print(date.split("-"))

data2 ="039490     "
print(data2.rstrip())

#51
movie_rank = ['docstrange', 'split', 'lucky']

#52
movie_rank.append("batman")

#53
movie_rank = ['docstrange', 'split', 'lucky', 'batman']
movie_rank.insert(1, 'superman')
print(movie_rank)

#54
movie_rank.remove('lucky')

#55
movie_rank.remove('split')
movie_rank.remove('batman')

#56
lang1 = ["C", "C++", "JAVA"]
lang2 = ["Python", "Go", "C#"]
langs = lang1
langs =lang1.extend(lang2)

#57
nums = [1, 2, 3, 4, 5, 6, 7]
print("max: ", max(nums))
print("min: ", min(nums))

#58
num = [1, 2, 3, 4, 5]
print(sum(nums))

#59
cook = ["pizz" + "pasta" + "salad" +"stew" + "mandu" + "kimchi"]
print(len(cook))

#60
nums = [1, 2, 3, 4, 5]
average = (sum(nums))/(len(cook))
print(average)

#61
price = ['20180728', 100, 130, 140, 150, 160, 170]
print(price[:1])

#62
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(nums[::3])

#63
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(nums[::2])

#64
num = [1, 2, 3, 4, 5]
print(nums[-1])

#65
interest = ['samsung', 'LG', 'Naver']
print(interest[0:2])

#66
interest = ['samsung', 'LG', 'Naver', 'SK', 'Mirae']
print(interest[0:])
print(" ".join(interest))

#67
print("/".join(interest))

#68
print("\n".join(interest))

#69
string = "Samsung/LG/Naver"
interest = string.split("/")
print(interest)

#70
data = [2, 4, 3, 1, 5, 10, 9]
print(data.sort())

#71
my_vairable = ()

#72 
movie_rank = ('docstrange', 'split', 'lucky')

#73
my_tuple = (1, )

#74
#t = (1,2,3)
#t[0] = 'a'

#75
#t = 1, 2, 3, 4 <-> t = (1, 2, 3, 4)

#76
t = ('A', 'b', 'c')

#77
interest = ('samsung', 'LG', 'SK')
interest1 = list(interest)

#78
interest = ['samsung', 'LG', 'SK']
interest1 = tuple(interst)

#79
temp ('apple', 'banana', 'cake')
a, b, c = temp
print(a, b, c)

#80
data = tuple(range(2, 100, 2))
print(data)
"""

#81
"""
*valid_scores,_,_ = [8.8, 8.9, 8.7, 9.2, 9.7, 9.9, 9.5, 7.8, 9.4]
print(*valid_scores,_,_)
print(*valid_scores)
print(_)
"""

#82
"""
a,b, *valid_scores = [8.8, 8.9, 8.7, 9.2, 9.7, 9.9, 9.5, 7.8, 9.4]
print(a,b, *valid_scores)
"""

#83
"""
a, *valid_scores, b = [8.8, 8.9, 8.7, 9.2, 9.7, 9.9, 9.5, 7.8, 9.4]
print(a, *valid_scores, b)
"""

#84
#temp = {}

#85
"""
ice_price ={'m': 1000, 'p': 1200, 'pp':1800}
print(ice_price)
"""
#86
"""
ice_price['j'] = 1200
ice_price['W'] = 1500
print(ice_price)
"""
#87
"""
ice_price ={'m': 1000, 'p': 1200, 'pp':1800}
ice = input('Put icecream name:')
price = ice_price[ice]
print(price)

#88
ice_price['m'] = 1300

#89
del ice_price['m']
prine(ice_price)
"""
#90
#No value on the key

#91
"""
inventory = {'m': [300,20], 'b': [400,3], 'c': [250, 100]}
print(inventory)

#92
print(inventory['m'][0])

#93
print(inventory['m'][1])

#94
investory['W'] = [500,7]
"""
#95
"""
inventory = {'m': [300,20], 'b': [400,3], 'c': [250, 100]}
print(inventory.keys())

#96
print(inventory.values())

#97
ice_price ={'m': 1000, 'p': 1200, 'pp':1800}
print(sum(ice_price.values()))

#98
ice = {'a': 1, 'b': 2, 'c': 3, 'd': 4}
new = {'e': 5, 'f': 6}
ice.update(new)
print(ice)

#99
keys = ("apple", "pear", "peach")
vals = (300, 250, 400)
result = dict(zip(keys, vals))
print(result)

#100
date = ['09/05', '09/06', '09/07', '09/08', '09/09']
close_price = [10500, 10300, 10100, 10800,11000]
result = dict(zip(date, close_price))
print(result)

#101
#bool

#102
print(3 == 5)
#False

#103
print(3 < 5)
#True

#104
x = 4
print(1 < x < 5)
#True

#105
print ((3 == 3) and (4 !=3))
#False

#106
#print(3 => 4)

#107
if 4 < 3:
    print("Hello World")
# 코드 안나옴

#108
if 4 < 3:
    print("Hello World.")
else:
    print("Hi, there.")
#Hi, there. 

#109
if True:
    print ("1")
    print ("2")
else: 
    print ("3")
print("4")
#1
#2
#4

#110
if True:
   if False:
        print("1")
        print("2")
   else:
        print("3")
else:
   print("4")
print("5")
#3
#5

#111
user = input("input:")
print(user*2)

#112
user = input("input number:")
print(int(user) + 10)

#113
user = input("What is the number?")
if int(user) % 2 == 0:
    print("even")
else:
    print("odd")

#114
user = input("number:")
num = 20 + int(user)
if num > 255:
    print(255)
else:
    print(num)

#115
user = input("number:")
num = int(user) - 20
if num > 255:
    print(255)
elif num < 0:
    print(0)
else:
    print(num)

#116
time = input("time now:")
if time [-2:] == "00":
    print("right time")
else:
    print("not right time")

#117
fruit = ['apple', 'grape', 'melon']
user = input("What do you like:")
if user in fruit:
    print("in list")
else:
    print("not in list")

#118
warn_investment_list = ["Microsoft", "Google", "Naver", "Kakao", "Samsung", "LG"]

l_list = input("the list:")
if l_list in warn_investment_list:
    print("it is right one.")
else:
    print("it is wrong one.")

#119
d_fruit = {"spring" : "strawberry", "summer": "tomato", "autumn": "apple"}
user = input("What season do yo like?:")
if user in d_fruit:
    print("right answer")
else:
    print("wrong answer")

#120
d_fruit = {"spring" : "strawberry", "summer": "tomato", "autumn": "apple"}
user = input("What season do yo like?:")
if user in d_fruit.values():
    print("right answer")
else:
    print("wrong answer")

#121
user = input("put character:")
if user.islower():
    print(user.upper())
else:
    print(user.lower())

#122
score = input("put grademark:")
grade = int(user)
if 81 <= score <= 100:
    print("grade is A")
elif 61 <= score <= 80:
    print("grade is B")
elif 41 <= score <= 60:
    print("grade is C")
elif 21 <= score <= 40:
    print("grade is D")
else: 
    print("grade is E")

#123
d_currency = {'dollar':1167, 'yen':1.096, 'euro': 1268, 'yian': 171}
c1 = input(": ")
num, currency = c1.split()
print(float(num) *d_currency[currency], "Won")

#124
num1 = int(input("input number 1: "))
num2 = int(input("input number 2: "))
num3 = int(input("input number 3: "))

if num1 > num2 and num1 > num3:
    print(num1)
elif num2 > num1 and num2 > num3:
    print(num2)
else: 
    print(num3)
"""
#125
"""
num1 =input('please put phone number:')
num2 = num1.split('-')
if num2[0] == "011":
   print('You are a SKT user')
elif num2[0] == "016":
   print('You are a KT user')
elif num2[0] == "019":
   print('You are a LG user')
elif num2[0] == "010":
   print('You are an unknown user')
else:
   print('Wrong input')
"""
#126
"""
z_code = input("put a zipcode")
z = z_code[:3]
if z in ['010','011','012']:
    print('river_north')

elif z in ['013','014','015']:
    print('Dobong')

elif z in ['016','017','018','019']:
    print('Nowon')

else:
    print('wrong input')
"""

#127
"""
c_code = input("put a c_code:")
c = c_code[7:8]
if c in ["1","3"]:
    print("male")
elif c in ["2","4"]:
    print("female")
else:
    print("wrong input")
"""

#128
"""
c_code = input("put a c_code:")
c = c_code[9:10]
c = int(c)
if 0 <= c <= 8:
    print("Seoul")
else: 
    print("not Seoul")
"""

#129
"""
n = input("put a c_code:")
i = int(n[0]) * 2 + int(n[1]) * 3 + int(n[2]) *4 + int(n[3]) * 5 + int(n[4]) * 6 + int(n[5]) * 7 + int(n[7]) * 8 + int(n[8]) * 9 + int(n[9]) * 2 + int(n[10]) * 3 + int(n[11]) * 4 + int(n[12]) * 5
i1 = 11 - (i % 11)
i2 = str(i1)

if n[-1] == i2[-1]:
    print("right output")
else: 
    print("wrong output")
"""

#130
"""
import requests
d_btc = requests.get("http://api.bithumb.com/public/ticker/").json()['data']

up = float(d_btc['max_price']) - float(d_btc['min_price'])
now = float(d_btc['opening_price'])
max_out = float(d_btc['max_price'])

if (now + up) > max_out:
    print("upstream")
else: 
    print("downstream")
"""
#131
"""
fruit = ['apple', 'tangeline', 'watermelon']
for i in fruit:
    print(i)
"""
#132
"""
fruit = ['apple', 'tangeline', 'watermelon']
for i in fruit:
    print('####')
"""

#133
"""
i = "A"
print(i)
i1 = "B"
print(i1)
i2 = "C"
print(i2)
"""
#134
"""
i = "A"
print("출력:", i)
i1 = "B"
print("출력:", i1)
i2 = "C"
print("출력:", i2)
"""
#135
"""
i1 = "A"
b = i1.lower()
print("변환:", b)
i2 = "B"
b = i2.lower()
print("변환:", b)
i3 = "C"
b = i3.lower()
print("변환:", b)
"""
#136
"""
for i in [10, 20, 30]: 
    print(i)
"""
#137
"""
for i in [10, 20, 30]:
    print(i)
"""

#138
"""
for i in [10, 20, 30]:
    print(i)
    print("-------")
"""

#139
"""
print("++++")
for i in [10, 20, 30]:
    print(i)
"""
#140
"""
for i in [1, 2, 3, 4]:
    print("--------")
"""
#141
"""
l = [100, 200, 300]
for i in l:
    print(i + 10)
"""
#142
"""
l = ['ki', 'ra', 'T']
for i in l:
    print("menu:", i)
""" 
#143
"""
l = ['dog', 'cat', 'parrot']
for i in l:
    print(len(i))
"""
#144
"""
l = ['dog', 'cat', 'parrot']
for i in l:
    print(i,  len(i))
"""
#145***
"""
l = ['dog', 'cat', 'parrot']
for dog in l:
    print(dog[0])
"""
#146
"""
l = [1, 2, 3]
for i in l:
    print('3 x', str(i))
"""
#147
"""
l = [1, 2, 3]
for i in l:
     x = 3 * i
     print('3 x', str(i), '=', x)
"""
#148
"""
l = ['a', 'b', 'c', 'd']
for i in l[1:]:
    print(i)
"""
#149
"""
l = ['a', 'b', 'c', 'd']
for i in l[:2]:
    print(i)
"""

#150
"""
l = ['a', 'b', 'c', 'd']
for i in l[::-1]:
    print(i)
"""

#151
"""
l = [3, -20, -3, 44]
for i in l[1:3]:
    print(i)

l = [3, -20, -3, 44]
for i in l:
    if i < 0:
        print(i)
"""
#152
"""
l = [3, 100, 23, 44]
for i in l:
    if i % 3 == 0:
        print(i)
"""

#153
"""
l = [13, 21, 12, 14, 30, 18]
for i in l:
    if i % 3 == 0 and i < 20:
        print(i)
"""
#154
"""
l = ["I", "study", "python", "language", "i"]
for i in l:
    if len(i) >= 3:
        print(i)
"""    
#155
"""
l = ["A", "b", "c", "D"]
for i in l:
    if i.isupper():
         print(i)
"""
#156
"""
l = ["A", "b", "c", "D"]
for i in l:
    if i.islower():
        print(i)
"""
#157***
"""
l = ['dog', 'cat', 'parrot']
for i in l:  
    print(i[0].upper() + i[1:])
"""
#158***
"""
l = ['hello.py', 'ex01.py', 'intro.hwp']
for i in l:
    split = i.split('.')
    print(split[0])
"""
#159***
"""
l = ['intra.h', 'intra.c', 'define.h', 'run.py']
for i in l:
    split = i.split('.')
    if split[1] == 'h':
        print(i)
"""
#160
"""
l = ['intra.h', 'intra.c', 'define.h', 'run.py']
for i in l:
    split = i.split('.')
    if (split[1] == 'h') or (split[1] == 'c'):
        print(i)
"""
#161
"""
for i in range(1,100):
    print(i)
"""
#162
"""
for i in (range(2002,2051,4)):
    print(i)
"""
#163
"""
for i in (range(3,31,3)):
    print(i)
"""
#164
"""
for i in (range(100,0,-1)):
    print(i)
"""
#165***
"""
for i in range(10):
    print(i / 10)
"""
#166
"""
for i in range(1,10):
    print(3, "x", i, '=', i*3)
"""
#167
"""
for i in range(1,10,2):
    print(3, "x", i, '=', i*3)
"""
#168
"""
hab = 0
for i in range(1, 11):
    hab += i
print('sum:', hab)
"""

