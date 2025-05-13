# Krishno_Mondol_KUET_CSE

def solve():
    n = int(input())
    v = list(map(int,input().split()))
    z_count = 0
    for i in v: 
        if i==0: z_count += 1
    if z_count==n: print("0")
    else:
        if n%2==0:
            print("2")
            print(f"1 {n}")
            print(f"1 {n}")
        else:
            print("4")
            print(f"1 {n}")
            print(f"2 {n}")
            print("1 2")
            print("1 2")

test = int(input())
for i in range(test):
    solve()
