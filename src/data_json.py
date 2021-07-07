# import json

# with open("data.json", "r") as handle:
#     data = json.load(handle)

# print(data)

# for i in data:
#     print(f"{i['id']}\t{i['sequence']}\t{i['species']}")

# FASTA p162
# 모델 답
# d_dict = {}
# with open("059.fasta", "r") as handle:
#     for i in handle:
#         if i.startswith(">"):
#             continue
#         for base in i.strip():
#             if base not in d_dict:
#                 d_dict[base] = 0
#             d_dict[base] += 1
# print(d_dict)


# # FASTQ p166 #@의 숫자 세어보기
# d_dict = {}
# with open("061.fastq", "r") as handle:
#     for i in handle:
#         if i.split("").startswith("@"):

#         d_dict["@"] += 1

# print(d_dict)

# 모델답
# cnt = 0
# data = dict()

# with open("061.fastq", "r") as handle:
#     for line in handle:
#         if cnt % 4 == 1: # header
#             pass
#         elif cnt %4 == 2: # base
#              for base in i.strip():
#                  if base not in data:
#                     data[base] = 0
#                  data[base] += 1
#         elif cnt %4 == 3: # delimiter
#             pass
#         elif cnt % 4 == 0: # qual
#             pass
#         cnt += 1

# print(cnt / 4) # 100.0
# print(data) #ATGC count

# BED p171
# result = 0
# with open("077.bed", "r") as handle:
#     for line in handle:
#         data = line.strip().split("\t")
#         # int(data[2]) - int(data[1])
#         chrom, start, end = data
#         length = int(end) - int(start)
#         result += length
# print(result)

# VCF p175
# 모델답
# cnt_all = 0
# cnt_pass = 0
# with open("070.vcf", "r") as handle:
#     for line in handle:
#         if line.startswith("##"):
#             continue
#         elif line.startswith("#"):
#             header = line.strip().split("\t")
#             filter_idx = header.index("FILTER")
#             continue
#         data = line.strip().split("\t")
#         cnt_all += 1
#         # for i in line.strip().split("\t"):
#         # cnt_all += 1
#         # if data[6] == "PASS":
#         if data[filter_idx] == "PASS":
#             cnt_pass += 1
# print(cnt_pass, cnt_all, round(cnt_pass / cnt_all, 4))

# 피보나치 수열 p184
# 모델 답
# import sys

# def fib():
#     if n == 0:
#         return 0
#     elif n == 1:
#         return 1
#     else:
#         return(fib[n-1] + fib[n-2])

# n = sys.argv[1]
# print(fib(n))

# def fib2(l, n):
#     for i in range(n):
#         l.append(l-[-1]) + l[-2])
#     return l

# l = [0, 1]
# print(fib2(l, 10))

# k-mer generation p186
# import sys

# def rec(l1, l2, n):
#     if n < 2:
#         return l2
#     else:
#         ltmp = []
#         for s1 in l1:
#             for s2 in l2:
#                 ltmp.append(s1 + s2)
#         return rec(l1, ltmp, n - 1)


# l1 = ["A", "C", "G", "T"]
# l2 = ["A", "C", "G", "T"]
# n = int(sys.argv[1])
# l = rec(l1, l2, n)
# print(l)
