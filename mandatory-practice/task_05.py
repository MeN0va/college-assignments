import time

def climb_recursive(n: int) -> int:
    if n == 1:
        return 1
    if n == 2:
        return 2
    return climb_recursive(n - 1) + climb_recursive(n - 2)

def climb_iterative(n: int) -> int:
    if n == 1:
        return 1
    if n == 2:
        return 2
    a, b = 1, 2
    for _ in range(3, n + 1):
        a, b = b, a + b
    return b

for n in [10, 20, 30, 35]:
    start = time.time()
    climb_recursive(n)
    rec_time = time.time() - start

    start = time.time()
    climb_iterative(n)
    iter_time = time.time() - start

    print(f"n={n}: recursive={rec_time:.6f}s, iterative={iter_time:.6f}s")
