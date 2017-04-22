x = list(input().split())
y = list(input().split())

for n in range(0, size(x)+size(y)):
	if n % 2 == 0:
		S += x
	else: