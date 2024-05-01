import numpy as np


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

# Applying Guass Jordan Elimination
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

print("\nSuyog Rana Magar")

"""
1. Start

2. Read Order of Matrix (n).

3. Read Matrix (A) of Order (n).

4. Augment and Identity Matrix of Order n to Matrix A.

5. Apply Gauss Jordan Elimination on Augmented Matrix (A).

6. Perform Row Operations to Convert the Principal Diagonal to 1.

7. Display the Inverse Matrix.

8. Stop.
"""