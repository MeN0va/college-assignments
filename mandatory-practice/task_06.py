def merge_orders(web_orders: list, app_orders: list) -> list:
    # Merging two chronologically sorted order lists in O(n + m)
    result = []
    i = 0
    j = 0
    while i < len(web_orders) and j < len(app_orders):
        if web_orders[i][0] <= app_orders[j][0]:
            result.append(web_orders[i])
            i += 1
        else:
            result.append(app_orders[j])
            j += 1
    while i < len(web_orders):
        result.append(web_orders[i])
        i += 1
    while j < len(app_orders):
        result.append(app_orders[j])
        j += 1
    return result

web_orders = [
    ("2024-01-01 08:00", "Smartphone"),
    ("2024-01-01 10:00", "Charger"),
    ("2024-01-01 14:00", "Earbuds"),
]
app_orders = [
    ("2024-01-01 09:00", "Tablet"),
    ("2024-01-01 11:00", "Case"),
    ("2024-01-01 16:00", "Stylus"),
]

for order in merge_orders(web_orders, app_orders):
    print(order)
