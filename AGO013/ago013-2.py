N = float(input())
a = list(map(float, input().split()))
count = 0.0
if a[1]-a[0]>0:
	sign = 1.0
else:
	sign = -1.0
pre_a = 0.0
for n in a:
	if (n-pre_a)*sign<0:
		count = count + 1
		sign *= -1
	pre_a = n
print(count+1)
