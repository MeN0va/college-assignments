# Section 1 — Algorithms and Data Structures

Implementation of classic algorithms and data structures in Python as part of a software engineering practical course (Навчальна практика, ІПЗ-22, Specialty 121).

## Contents

### 1.1 Linear Search — `linear_search.py`
Implements `find_product(products, target)` — searches a product list using linear search without `index()` or `find()`. Returns position (1-indexed) or "Product not found".

### 1.2 Binary Search — `binary_search.py`
Implements `search_dictionary(dictionary, word)` — searches a sorted word-definition dictionary using binary search with O(log n) complexity. Returns the definition or "Word not found".

### 1.3 Selection Sort — `selection_sort.py`
Implements `create_rating(students)` — sorts a list of name-score pairs by average score from highest to lowest using Selection Sort, without `sort()` or `sorted()`.

### 1.4 Bracket Validation — `bracket_validation.py`
Implements `validate_brackets(code)` — uses a stack to verify correct bracket placement `()`, `[]`, `{}` in code strings. Returns `True` if balanced, `False` otherwise.

### 1.5 Stair Climbing — `stair_climbing.py`
Implements `climb_recursive(n)` and `climb_iterative(n)` — counts the number of ways to climb n stairs taking 1 or 2 steps at a time. Compares execution time for n = 10, 20, 30, 35.

**Performance difference:** the recursive approach has O(2^n) time complexity due to repeated recalculation of the same subproblems. The iterative approach runs in O(n) by storing only the previous two values. At n=35, the difference becomes clearly measurable.

### 1.6 Merge Sorted Orders — `merge_orders.py`
Implements `merge_orders(web_orders, app_orders)` — merges two chronologically sorted order lists from different sources into one sorted list with O(n + m) complexity, without using built-in sort functions.

### 1.7 Hash Table Phone Book — `phonebook.py`
Implements class `PhoneBook` — a hash table based contact manager with:
- Custom hash function
- Collision handling via chaining
- Automatic resize when load factor exceeds 0.75
- Operations: `add`, `get`, `delete`, `contains`, `__len__`
- No built-in `dict` used

### 1.8 Palindrome Checker — `palindrome.py`
Implements `is_palindrome(phrase)` — checks if a phrase is a palindrome, ignoring spaces, punctuation, and case. Uses a custom `Deque` class with `add_front`, `add_rear`, `remove_front`, `remove_rear`, `is_empty`. No `collections.deque` used.

## Environment

- Python 3.x
- No external dependencies
