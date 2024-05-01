import numpy as np

def lu_decomposition(a):
    n = len(a)
    l = np.zeros((n, n))
    u = np.zeros((n, n))

    for i in range(n):
        u[i, i] = 1
        l[i, i] = 1

    for k in range(n - 1):
        for i in range(k + 1, n):
            l[i, k] = a[i, k] / a[k, k]
            for j in range(k + 1, n):
                a[i, j] -= l[i, k] * a[k, j]

    for i in range(n):
        for j in range(n):
            if j < i:
                u[i, j] = 0
            elif j == i:
                u[i, j] = 1
            else:
                u[i, j] = a[i, j]
            l[i, j] = a[i, j]

    return l, u


a = np.array([[1, 3, 5], [2, 4, 7], [1, 1, 0]], dtype=float)
l, u = lu_decomposition(a)

print("L matrix:")
print(l)
print("\nU matrix:")
print(u)
print("Suyog Rana Magar")