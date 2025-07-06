# 324906129
t = int(input())
while t>0:
    a,b,c = map(int,input().split())
    
    if (a+2*(b-a))>=c and (a+2*(b-a))%c==0 and (a+2*(b-a))!=0:
        print("YES")
        
    elif (2*b-c)>=a and (2*b-c)%a==0 and (2*b-c)!=0:
        print("YES")
        
    elif (a+(c-a)//2)>=b and (c-a)%2==0 and (a+(c-a)//2)%b==0 and (a+(c-a)//2)!=0:
        print("YES")
        
    else:
        print("NO")

    t -= 1
