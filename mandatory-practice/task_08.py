class Deque:
    def __init__(self):
        self.items = []

    def add_front(self, item):
        self.items.insert(0, item)

    def add_rear(self, item):
        self.items.append(item)

    def remove_front(self):
        return self.items.pop(0)

    def remove_rear(self):
        return self.items.pop()

    def is_empty(self):
        return len(self.items) == 0


def is_palindrome(phrase: str) -> bool:
    deque = Deque()
    for char in phrase.lower():
        if char.isalnum():
            deque.add_rear(char)

    while len(deque.items) > 1:
        if deque.remove_front() != deque.remove_rear():
            return False
    return True

phrase = input("Enter a phrase: ")
if is_palindrome(phrase):
    print("It's a palindrome.")
else:
    print("It's not a palindrome.")
