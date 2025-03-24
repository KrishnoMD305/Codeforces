# Krishno_MD_KUET_CSE

def move(x,y,a,b):
    return {
        (x + a, y + b), (x + a, y - b), (x - a, y + b), (x - a, y - b),
        (x + b, y + a), (x + b, y - a), (x - b, y + a), (x - b, y - a)
    }

t = int(input())

for i in range(t):
    a,b = map(int,input().split())
    xk,yk = map(int,input().split())
    xq,yq = map(int,input().split())

    king = move(xk,yk,a,b)
    queen = move(xq,yq,a,b)

    cnt = len(king & queen)
    print(cnt)
