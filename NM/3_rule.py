def main():
    x = []
    y = []
    sum = 0.0

    n = int(input("Input no. of data points: "))
    for i in range(n):
        print(f"X{i+1} : Y{i+1}")
        xi, yi = map(float, input().split())
        x.append(xi)
        y.append(yi)

    a = float(input("Input initial value of x: "))
    b = float(input("Input final value of x: "))
    h = float(input("Input the segment width: "))

    n1 = int(abs(a - x[0]) / h + 1.5)
    n2 = int(abs(b - x[0]) / h + 1.5)
    m = n2 - n1

    if m % 2 == 0:
        i2 = 0.0
        l = n2 - 2
    else:
        i2 = (y[n2 - 1] + y[n2]) * h / 2.0
        l = n2 - 3

    for i in range(n1, l + 1, 2):
        sum += y[i] + 4 * y[i + 1] + y[i + 2]

    i1 = sum * h / 3.0
    ics = i1 + i2

    print(f"Integral from {a} to {b} is {ics}")


main()
print("Suyog Rana Magar")