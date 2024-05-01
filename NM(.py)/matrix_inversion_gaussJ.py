import numpy as np
import sys


n = int(input("Enter order of matrix: "))


a = np.zeros((n,2*n))


print("Enter Matrix Coefficients:")
for i in range(n):
    for j in range(n):
        a[i][j] = float(input( "a["+str(i)+"]["+ str(j)+"]="))


for i in range(n):        
    for j in range(n):
        if i == j:
            a[i][j+n] = 1


for i in range(n):
    if a[i][i] == 0.0:
        sys.exit("Divide by zero detected!")
        
    for j in range(n):
        if i != j:
            ratio = a[j][i]/a[i][i]

            for k in range(2*n):
                a[j][k] = a[j][k] - ratio * a[i][k]


for i in range(n):
    divisor = a[i][i]
    for j in range(2*n):
        a[i][j] = a[i][j]/divisor


print("\nINVERSE MATRIX IS:")
for i in range(n):
    for j in range(n, 2*n):
        print(a[i][j], end="\t")
    print()

print("Suyog Rana Magar")