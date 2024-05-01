import math
from tabulate import tabulate

def func(x, y):
    return y + math.sqrt(y)

def main():
    x = float(input("Input initial value of x: "))
    y = float(input("Input initial value of y: "))
    xp = float(input("Input x at which y is required: "))
    h = float(input("Input step size, h: "))

    n = int((xp - x) / h + 0.5)

    for i in range(1, n + 1):
        m1 = func(x, y)
        m2 = func(x + 0.5 * h, y + 0.5 * m1 * h)
        m3 = func(x + 0.5 * h, y + 0.5 * m2 * h)
        m4 = func(x + h, y + m3 * h)
        x += h
        y += (m1 + 2.0 * m2 + 2.0 * m3 + m4) * h / 6.0
        print(tabulate([[i, f"{x:.9f}", f"{y:.9f}"]]))

    print("\nThe value of y at x =", x, "is", y)


main()
print("Suyog Rana Magar")
