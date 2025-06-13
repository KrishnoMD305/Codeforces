# 321331387
# Krishno_Mondol_KUET_CSE
def solve(): 
    n = int(input())
    if n%2!=0 or n<4: print("-1")
    else:
        mn = n//6
        if n%6!=0: mn += 1
        mx = n//4
        print(f"{mn} {mx}")

t = int(input())
for i in range(t):
    solve()
