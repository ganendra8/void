
import numpy as np


n = int(input("Enter number: "))

a = np.zeros((n,n+1))

x = np.zeros(n)


print("Enter Augmented Matrix Coefficients:")
for i in range(n):
    for j in range(n+1):
        a[i][j] = float(input( "a["+str(i)+"]["+ str(j)+"]="))

# Applying Gauss Jordan Elimination
for i in range(n):
    if a[i][i] == 0.0:
        sys.exit("Divide by zero detected!")
        
    for j in range(n):
        if i != j:
            ratio = a[j][i]/a[i][i]

            for k in range(n+1):
                a[j][k] = a[j][k] - ratio * a[i][k]



for i in range(n):
    x[i] = a[i][n]/a[i][i]


print("\nRequired solution is: ")
for i in range(n):
    print("X%d = %0.2f" %(i,x[i]), end = "\t")

print("\nSuyog Rana Magar")

"""
This python program solves systems of linear equation with n unknowns using Gauss Jordan Method.

1. Start

2. Read Number of Unknowns: n

3. Read Augmented Matrix (A) of n by n+1 Size

4. Transform Augmented Matrix (A) 
   to Diagonal Matrix by Row Operations.

5. Obtain Solution by Making All Diagonal Elements to 1.

6. Display Result.

7. Stop
"""