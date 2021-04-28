t = int(input())
for i in range(t):
    n, k = map(int,input().split())
    s = input()
    ast = '*'
    temp = k * ast
    if temp in s:
        print("YES")
    else:
        print("NO")

