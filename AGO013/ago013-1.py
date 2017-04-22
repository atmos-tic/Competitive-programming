N = float(input())
a = list(map(float, input().split()))
count = 0.0
f = 0
if a[1]-a[0]>0.0:
	sign = 1.0
elif a[1]-a[0]<0.0:
	sign = -1.0
else:
	sign = 0.0
	f = 1	
time = 0.0

while time < int(N - 1):
	time = time + 1.0
	if f == 1:
		f = 0
		if a[int(time)]-a[int(time-1)]>0.0:
			sign = 1.0
		elif a[int(time)]-a[int(time-1)]<0.0:
			sign = -1.0
		else:
			sign = 0.0
			f = 1	
	if (a[int(time)]-a[int(time-1)])*sign<0.0:
		count = count + 1.0
		if time < N - 1:
			if a[int(time+1)]-a[int(time)]>0.0:
				sign = 1.0
			elif a[int(time+1)]-a[int(time)]<0.0:
				sign = -1.0
			else:
				f = 1
			time = time + 1
print(int(count+1.0))
