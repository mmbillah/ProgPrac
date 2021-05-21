t=int(input())

for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    d=list(map(int,input().split()))
    i=n-1
    j=1
    m=0
    for k in range(n):
        if (a[i]+a[j])<d[k]:
            if d[k]>m:
                m=d[k]
        i=(i+1)%n
        j=(j+1)%n
    if m==0:
        print(-1)
    else:
        print(m)
