import numpy as np


n = int(input("How many data points? "))

x = np.zeros(n)
y = np.zeros(n)

print("Enter data:")
for i in range(n):
    x[i] = float(input("x["+str(i)+"]= "))
    y[i] = float(input("y["+str(i)+"]= "))

sumX,sumX2,sumY,sumXY = 0,0,0,0
for i in range(n):
    sumX = sumX + x[i]
    sumX2 = sumX2 + x[i]*x[i]
    sumY = sumY + y[i]
    sumXY = sumXY + x[i]*y[i]

# Finding coefficients A and B
b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX)
A = (sumY - b*sumX)/n

# Obtaining a and b
a = A

print("Suyog Rana Magar")


# Displaying coefficients a, b & equation
print("\nCoefficients are:")
print("a: ", a)
print("b: ", b)
