def find_product(products: list, target: str) -> int:
    for i in range(len(products)):
        if products[i] == target:
            return i + 1
    return -1

products = ["Keyboard", "Smartwatch", "Tablet", "Headphones", "Laptop"]

target = "Headphones"
result = find_product(products, target)
if result != -1:
    print(f"Product found at position: {result}")
else:
    print("Product not found")

target = "Refrigerator"
result = find_product(products, target)
if result != -1:
    print(f"Product found at position: {result}")
else:
    print("Product not found")
