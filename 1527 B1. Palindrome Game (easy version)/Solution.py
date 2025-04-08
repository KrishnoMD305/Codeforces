# 314433767	      Apr/08/2025 07:23UTC+6	      Krishno_MD	      1527B1 - Palindrome Game (easy version)	      PyPy 3-64	      Accepted	      156 ms	      4900 KB

#Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    s = input()
    z = 0
    for i in s:
        if i=='0':
            z+=1
    if z==1 or z%2==0:
        print("BOB")
    else:
        print("ALICE")
