import math

def F(x):
    return 1 - math.exp(-x / 2.0)

def main():
    a = float(input("Initial value of x: "))
    b = float(input("Final value of x: "))
    n = int(input("Number of segments n (divisible by 3): "))
    h = (b - a) / n
    m = n // 3
    sum = 0.0
    x = a
    f1 = F(x)

    for i in range(m):
        f2 = F(x + h)
        f3 = F(x + 2 * h)
        f4 = F(x + 3 * h)
        sum += f1 + 3 * f2 + 3 * f3 + f4
        f1 = f4
        x += 3 * h

    ics = sum * 3 * h / 8.0

    print(f"Integral from {a} to {b}")
    print(f"when h = {h:.3f} is {ics:.3f}")


main()
print("Suyog Rana Magar")
