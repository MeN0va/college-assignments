def search_dictionary(dictionary: list, word: str) -> str:
    left = 0
    right = len(dictionary) - 1

    while left <= right:
        mid = (left + right) // 2
        mid_word = dictionary[mid][0]

        if mid_word == word:
            return dictionary[mid][1]
        elif mid_word < word:
            left = mid + 1
        else:
            right = mid - 1

    return "Word not found"


dictionary = [
    ("camera", "a device used to capture photos and videos"),
    ("display", "a screen that shows visual output"),
    ("keyboard", "an input device used for typing"),
    ("memory", "hardware that stores data temporarily"),
    ("network", "a system of connected devices"),
]

print(search_dictionary(dictionary, "compiler"))
print(search_dictionary(dictionary, "keyboard"))
