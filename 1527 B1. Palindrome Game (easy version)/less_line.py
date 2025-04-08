# 314433788	      Apr/08/2025 07:23UTC+6	      Krishno_MD	      1527B1 - Palindrome Game (easy version)	      PyPy 3-64	      Accepted	      187 ms	      5500 KB

#Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    st = input()
    zr = 0
    zr = sum(1 for i in st if i=='0')
    print("BOB" if zr==1 or zr%2==0 else "ALICE")
