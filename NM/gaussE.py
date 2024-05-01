import numpy as np


n = int(input("Enter number: "))

a = np.zeros((n,n+1))

x = np.zeros(n)


print("Enter Augmented Matrix Coefficients:")
for i in range(n):
    for j in range(n+1):
        a[i][j] = float(input( "a["+str(i)+"]["+ str(j)+"]="))

# Applying Gauss Elimination
for i in range(n):
    if a[i][i] == 0.0:
        sys.exit("Divide by zero detected!")
        
    for j in range(i+1, n):
        ratio = a[j][i]/a[i][i]
        
        for k in range(n+1):
            a[j][k] = a[j][k] - ratio * a[i][k]

# Back Substitution
x[n-1] = a[n-1][n]/a[n-1][n-1]

for i in range(n-2,-1,-1):
    x[i] = a[i][n]
    
    for j in range(i+1,n):
        x[i] = x[i] - a[i][j]*x[j]
    
    x[i] = x[i]/a[i][i]


print("\nRequired solution is: ")
for i in range(n):
    print("X%d = %0.2f" %(i,x[i]), end = "\t")

print("\nSuyog Rana Magar")

"""
This python program solves systems of linear equation with n unknowns using Gauss Elimination Method.
1. Start

2. Read Number of Unknowns: n

3. Read Augmented Matrix (A) of n by n+1 Size

4. Transform Augmented Matrix (A) 
   to Upper Trainagular Matrix by Row Operations.

5. Obtain Solution by Back Substitution.

6. Display Result.

7. Stop
"""