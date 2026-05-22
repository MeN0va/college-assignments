def create_rating(students: list) -> list:
    n = len(students)
    for i in range(n):
        max_idx = i
        for j in range(i + 1, n):
            if students[j][1] > students[max_idx][1]:
                max_idx = j
        students[i], students[max_idx] = students[max_idx], students[i]
    return students

students = [
    ("Ethan", 88.5),
    ("Chloe", 94.0),
    ("Marcus", 76.3),
    ("Riley", 94.0),
    ("Jasmine", 81.7),
]

rating = create_rating(students)
for i, (name, score) in enumerate(rating, 1):
    print(f"{i}. {name} — {score}")
