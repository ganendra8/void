def lagrange_interpolation(x, data_points):
    n = len(data_points)
    sum = 0.0
    for i in range(n):
        lf = 1.0
        xi, fi = data_points[i]
        for j in range(n):
            if i != j:
                xj, _ = data_points[j]
                lf *= (x - xj) / (xi - xj)
        sum += lf * fi
    return sum

def main():
    data_points = []
    n = int(input("Input no. of data points: "))
    for i in range(n):
        print(f"Input x{[i]}: ",end="")
        x = float(input())
        print(f"Input fx{[i]}: ", end="")
        f = float(input())
        data_points.append((x, f))

    xp = float(input("Input x where the interpolation is required: "))
    result = lagrange_interpolation(xp, data_points)
    print("\nLAGRANGIAN INTERPOLATION")
    print(f"Interpolated function value at x={xp}: {result:.2f}")


main()
print("\nSuyog Rana Magar")

