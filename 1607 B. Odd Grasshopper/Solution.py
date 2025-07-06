# 324980838
def solve():
    x,n = map(int,input().split())

    rr,eff = n%4,0

    if rr==0:
        eff=0
    elif rr==1:
        eff=n
    elif rr==2:
        eff=-1
    else:
        eff=-(n+1)
    
    if x%2==0:
        x -= eff
    else:
        x += eff

    print(x)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
