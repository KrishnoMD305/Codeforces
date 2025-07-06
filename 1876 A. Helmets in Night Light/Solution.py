# 327815608
import sys
input = sys.stdin.readline

def main():
    t = int(input())
    for _ in range(t):
        n,p = map(int,input().split())
        a = list(map(int,input().split()))
        b = list(map(int,input().split()))
        vec = []
        for i in range(n):
            vec.append((a[i],min(b[i],p)))
        vec.sort(key=lambda x : x[1])
        if vec[0][1]>=p:
            print(p*n)
            continue
        cost,people = p,1
        for i in vec:
            if people + i[0] >= n:
                cost += (n-people)*i[1]
                break
            people += i[0]
            cost += i[0] * i[1]
        print(cost)


if __name__ == "__main__":
    main()
