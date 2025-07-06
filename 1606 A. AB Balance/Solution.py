# 325047893
def solve():
    s = input()
    if len(s)==1 or s[0]==s[-1]:
        print(s)
    else:
        if s[0]=='a':
            s = 'b' + s[1:]
        else:
            s = 'a' + s[1:]
        print(s)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__=="__main__":
    main()
