n=int(input())
for i in range(0,n):
    a,b=map(int,input().split())
    diff=0
    if(b>a):
        diff=b-a
    print(diff)

