N = list(map(float,input().split()))
X = [ list(map(float,input().split(" "))) for i in range(int(N[0]))]
for t in range(int(N[2])):
	for n in range(int(N[0])):
		if X[n][1] == 1.0:
			X[n][0] = X[n][0] + 0.5;		
		elif X[n][1] == 2.0:
			if X[n][0] == 0.0:
				X[n][0] = N[1]-0.5
			else:
				X[n][0] = X[n][0] - 0.5;
	for k in range(int(N[0])):
		for l in range(int(N[0])):
			if X[k][0] == X[l][0] and k != l:
				print("a")
				if X[k][1] == 1.0:
					X[k][1] = 2.0
				elif X[k][1] == 2.0:
					X[k][1] = 1.0
	for o in range(int(N[0])):
		if X[o][1] == 1.0:
			if X[o][0] == N[1]-0.5:
				X[o][0] = 0
			else:
				X[o][0] = X[o][0] + 0.5;		
		elif X[o][1] == 2.0:	
			X[o][0] = X[o][0] - 0.5;
	for p in range(int(N[0])):
		for q in range(int(N[0])):
			if X[p][0] == X[q][0] and p != q:
				if X[p][1] == 1.0:
					X[p][1] = 2.0
				elif X[p][1] == 2.0:
					X[p][1] = 1.0
for m in range(int(N[0])):
	print(int(X[m][0]))
