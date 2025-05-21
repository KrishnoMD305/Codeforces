# 319951756	        May/17/2025 05:00UTC+6	        Krishno_MD	        1828B - Permutation Swap	        PyPy 3-64	        Accepted	        218 ms	        16900 KB

# Krishno_Mondol_KUET_CSE
from math import gcd
from functools import reduce
def solution():
    n = int(input())
    print(reduce(gcd,(abs(v-i-1) for i,v in enumerate(map(int,input().split())))))

test = int(input())
for i in range(test):
    solution()
