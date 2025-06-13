# 321409086
# Krishno_Mondol_KUET_CSE
def solve(): 
    str = input()
    cnt_1,cnt_0 = 0,0
    for i in str:
        if i=='1': cnt_1+=1
        else: cnt_0+=1
    if cnt_0==cnt_1:
        print("0")
        return
    for i in str:
        if i=='1':
            if cnt_0>0: cnt_0-=1
            else: break
        else:
            if cnt_1>0: cnt_1-=1
            else: break
    print(cnt_1+cnt_0)

t = int(input())
for i in range(t):
    solve()
