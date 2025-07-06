# 325065520
def solve():
    n = int(input())
    s = str(n)
    ans = len(s)
    div = ["00","25","50","75"]
    for st in div:
        i = len(s)-1
        while i>=0 and s[i]!=st[1]:
            i -= 1
        if i<0:
            continue
        i -= 1
        while i>=0 and s[i]!=st[0]:
            i -= 1
        if i<0:
            continue
        rem = len(s)-1-i-1
        ans = min(ans,rem)
    print(ans)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
