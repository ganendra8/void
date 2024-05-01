import math

def F(x):
    return 1.0 - math.exp(-x / 2.0)

def main():
    print("TRAPEZOIDAL RULE:")
    a = float(input("Input initial value of x: "))
    b = float(input("Input final value of x: "))
    h = float(input("Input the segment width: "))

    if a != b:
        n = int((b - a) / h)
        sum_ = (F(a) + F(b)) / 2.0

        for i in range(1, n):
            sum_ += F(a + i * h)

        ict = sum_ * h

        print(f"\nIntegration between {a} and {b} when h = {h} is {ict:.4f}\n")
    else:
        print("Exiting\n")


main()
print("Suyog Rana Magar")