import numpy as np

n = int(input("Enter order of matrix: "))

a = np.zeros((n,n))

print("Enter Matrix Coefficients:")
for i in range(n):
    for j in range(n):
        a[i][j] = float(input( "a["+str(i)+"]["+ str(j)+"]="))

x = np.zeros((n))

print("Enter initial guess vector: ")
for i in range(n):
    x[i] = float(input( "x["+str(i)+"]="))


tolerable_error = float(input("Enter tolerable error: "))


max_iteration = int(input("Enter maximum number of steps: "))

lambda_old = 1.0
condition =  True
step = 1
while condition:
    x = np.matmul(a,x)
    
    lambda_new = max(abs(x))
    
    x = x/lambda_new
    
    print("\nSTEP %d" %(step))
    print("----------")
    print("Eigen Value = %0.4f" %(lambda_new))
    print("Eigen Vector: ")
    for i in range(n):
        print("%0.3f\t" % (x[i]))
    
    step = step + 1
    if step > max_iteration:
        print("Not convergent in given maximum iteration!")
        break
    
    # Calculating error
    error = abs(lambda_new - lambda_old)
    print("errror="+ str(error))
    lambda_old = lambda_new
    condition = error > tolerable_error

print("\nSuyog Rana Magar")
"""
 1. Start
 
 2. Read Order of Matrix (n) and Tolerable Error (e)
 
 3. Read Matrix A of Size n x n
 
 4. Read Initial Guess Vector X of Size n x 1
 
 5. Initialize: Lambda_Old = 1
 
 6. Multiply: X_NEW = A * X 
 
 7. Replace X by X_NEW
 
 8. Find Largest Element (Lamda_New) by Magnitude from X_NEW
 
 9. Normalize or Divide X by Lamda_New
 
 10. Display Lamda_New and X

 11. If |Lambda_Old - Lamda_New| > e then 
     set Lambda_Old = Lamda_New and goto 
     step (6) otherwise goto step (12)
 
 12. Stop

"""