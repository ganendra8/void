def f(x):
    return x**3 - 5*x - 9

def g(x):
    return 3*x**2 - 5

def newtonRaphson(x0,e,N):
    step = 1
    flag = 1
    condition = True
    while condition:
        if g(x0) == 0.0:
            print("Divide by zero error!")
            break
        
        x1 = x0 - f(x0)/g(x0)
        print("Iteration No.%d, x1 = %0.6f and f(x1) = %0.6f" % (step, x1, f(x1)))
        x0 = x1
        step = step + 1
        
        if step > N:
            flag = 0
            break
        
        condition = abs(f(x1)) > e
    
    if flag==1:
        print("\nRequired root is: %0.8f" % x1)
    else:
        print("\nNot Convergent.")


x0 = float(input("Enter Guess: "))
e = float(input("Tolerable Error: "))
N = int(input("Maximum Step: "))


newtonRaphson(x0,e,N)
print("Suyog Rana Magar")

'''
This program implements Newton Raphson method for finding real root of nonlinear function in python programming language.

1. Start

2. Define function as f(x)

3. Define first derivative of f(x) as g(x)

4. Input initial guess (x0), tolerable error (e) 
   and maximum iteration (N)

5. Initialize iteration counter i = 1

6. If g(x0) = 0 then print "Mathematical Error" 
   and goto (12) otherwise goto (7) 

7. Calcualte x1 = x0 - f(x0) / g(x0)

8. Increment iteration counter i = i + 1

9. If i >= N then print "Not Convergent" 
   and goto (12) otherwise goto (10) 

10. If |f(x1)| > e then set x0 = x1 
    and goto (6) otherwise goto (11)

11. Print root as x1

12. Stop
'''