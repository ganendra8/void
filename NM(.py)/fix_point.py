import math

def f(x):
    return x*x*x + x*x -1

# f(x)=0 to x = g(x)
def g(x):
    return 1/math.sqrt(1+x)


def fixedPointIteration(x0, e, N):
    step = 1
    flag = 1
    condition = True
    while condition:
        x1 = g(x0)
        print("Iteration-%d, x1 = %0.6f and f(x1) = %0.6f" % (step, x1, f(x1)))
        x0 = x1

        step = step + 1
        
        if step > N:
            flag=0
            break
        
        condition = abs(f(x1)) > e

    if flag==1:
        print("\nRequired root is: %0.8f" % x1)
    else:
        print("\nNot Convergent.")

x0 = float(input("Enter Guess: "))
e = float(input("Tolerable Error: "))
N = int(input("Maximum Step: "))


fixedPointIteration(x0,e,N)
print("Suyog Rana Magar")
"""
Python program to find real root of non-linear equation using Fixed Point Iteration Method. This method is also known as Iterative Method.

1. Start 

2. Define function f(x)

3. Define function g(x) which is obtained 
   from f(x)=0 such that x = g(x) and |g"(x) < 1|

4. Choose intial guess x0, Tolerable Error e 
   and Maximum Iteration N

5. Initialize iteration counter: step = 1

6. Calculate x1 = g(x0)

7. Increment iteration counter: step = step + 1

8. If step > N then print "Not Convergent" 
   and goto (12) otherwise goto (10) 

9. Set x0 = x1 for next iteration

10. If |f(x1)| > e then goto step (6) otherwise goto step (11)

11. Display x1 as root.

12. Stop

"""