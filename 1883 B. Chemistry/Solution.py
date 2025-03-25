# Krishno_MD_KUET_CSE
t = int(input())

for i in range(t):
    n,k = map(int,input().split())
    alphabet = [0] * 27
    s = input()
    for i in s:
        alphabet[ord(i)-ord('a')] += 1

    odd_ocur = 0
    for i in alphabet:
        if i%2 != 0:
            odd_ocur += 1

    if odd_ocur>k+1:
        print("NO")
    else:
        print("YES")
