N = int(input())
a = list(map(float, input().split()))
a.sort()
S = 0.0
k = 0
for i in a[N:2*N]:
	S += i

print(int(S))	
