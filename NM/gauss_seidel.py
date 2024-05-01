import numpy as np

def gaseid(a: np.ndarray, b: np.ndarray, x: np.ndarray, max_iterations: int = 50, epsilon: float = 0.000001) -> tuple[np.ndarray, int, int]:
    n = len(b)
    x_prev = np.zeros(n)
    count = 1
    status = 0

    while count <= max_iterations:
        for i in range(n):
            x_prev[i] = x[i]
            sum_ = b[i] - np.dot(a[i], x)
            x[i] = sum_ / a[i][i]

            if np.allclose(x, x_prev, atol=epsilon):
                status = 1
                break

        if status == 1:
            break

        count += 1

    return x, count, status

def main():
    n = int(input("Input the size of the system: "))
    a = np.zeros((n, n))
    b = np.zeros(n)
    x = np.zeros(n)

    print("Input coefficients, a(i, j)")
    for i in range(n):
        for j in range(n):
            a[i][j] = float(input())

    print("Input vector b:")
    for i in range(n):
        b[i] = float(input())

    solution, iterations, status = gaseid(a, b, x)

    np.set_printoptions(formatter={'float': lambda x: "{:.6f}".format(x)})
    if status == 2:
        print(f"No convergence in {iterations} iterations.")
    else:
        print("Solution vector X:")
        print(solution)

        print(f"Iterations = {iterations}")



main()
print("Suyog Rana Magar")