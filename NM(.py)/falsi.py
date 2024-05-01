def f(x):
    return x**3-5*x-9


def falsePosition(x0,x1,e):
    step = 1
    condition = True
    while condition:
        x2 = x0 - (x1-x0) * f(x0)/( f(x1) - f(x0) )
        print("Iteration-%d, x2 = %0.6f and f(x2) = %0.6f" % (step, x2, f(x2)))

        if f(x0) * f(x2) < 0:
            x1 = x2
        else:
            x0 = x2

        step = step + 1
        condition = abs(f(x2)) > e

    print("\nRequired root is: %0.8f" % x2)



x0 = float(input("First Guess: "))
x1 = float(input("Second Guess: "))
e = float(input("Tolerable Error: "))

if f(x0) * f(x1) > 0.0:
    print("Given guess values do not bracket the root.")
    print("Try Again with different guess values.")
else:
    falsePosition(x0,x1,e)

print("Suyog Rana Magar")
"""
This program implements the bisection method to find the root of a given function within a specified interval

1. start

2. Define function f(x)

3. Choose initial guesses x0 and x1 such that f(x0)f(x1) < 0

4. Choose pre-specified tolerable error e.

5. Calculate new approximated root as: 
   
   x2 = x0 - ((x0-x1) * f(x0))/(f(x0) - f(x1))

6. Calculate f(x0)f(x2)
	a. if f(x0)f(x2) < 0 then x0 = x0 and x1 = x2
	b. if f(x0)f(x2) > 0 then x0 = x2 and x1 = x1
	c. if f(x0)f(x2) = 0 then goto (8)
	
7. if |f(x2)|>e then goto (5) otherwise goto (8)

8. Display x2 as root.

9. Stop
"""