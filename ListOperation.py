n=int(input())
arr = list(map(int, input().split()))
result = [abs(x) for x in arr]
flag=0

for i in range(0,n-1):
    for j in range(i+1,n):   # ✅ fixed
        if result[i] >= result[j]:
            flag=1

if flag==1:
    print(True)
else:
    print(False)