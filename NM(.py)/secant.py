
def f(x):
    return x**3 - 5*x - 9

def secant(x0,x1,e,N):
    step = 1
    condition = True
    while condition:
        if f(x0) == f(x1):
            print("Divide by zero error!")
            break
        
        x2 = x0 - (x1-x0)*f(x0)/( f(x1) - f(x0) ) 
        print("Iteration No.%d, x2 = %0.6f and f(x2) = %0.6f" % (step, x2, f(x2)))
        x0 = x1
        x1 = x2
        step = step + 1
        
        if step > N:
            print("Not Convergent!")
            break
        
        condition = abs(f(x2)) > e
    print("\nRequired root is: %0.8f" % x2)


x0 = float(input("Enter First Guess: "))
x1 = float(input("Enter Second Guess: "))
e = float(input("Tolerable Error: "))
N = int(input("Maximum Step: "))
secant(x0,x1,e,N)

print("Suyog Rana Magar")
"""
This program implements Secant Method for finding real root of nonlinear equation in python programming language.

1. Start

2. Define function as f(x)

3. Input initial guesses (x0 and x1),
   tolerable error (e) and maximum iteration (N)

4. Initialize iteration counter i = 1

5. If f(x0) = f(x1) then print "Mathematical Error" 
   and goto (11) otherwise goto (6) 

6. Calcualte x2 = x1 - (x1-x0) * f(x1) / ( f(x1) - f(x0) )

7. Increment iteration counter i = i + 1

8. If i >= N then print "Not Convergent" 
   and goto (11) otherwise goto (9) 

9. If |f(x2)| > e then set x0 = x1, x1 = x2 
   and goto (5) otherwise goto (10)

10. Print root as x2

11. Stop
"""

