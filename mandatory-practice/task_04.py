def validate_brackets(code: str) -> bool:
    stack = []
    for symbol in code:
        if symbol == "(" or symbol == "[" or symbol == "{":
            stack.append(symbol)
        elif symbol == ")" or symbol == "]" or symbol == "}":
            if len(stack) == 0:
                return False
            top = stack[-1]
            if symbol == ")" and top != "(":
                return False
            if symbol == "]" and top != "[":
                return False
            if symbol == "}" and top != "{":
                return False
            stack.pop()
    return len(stack) == 0

print(validate_brackets("if (x > 0) { print(x) }"))
print(validate_brackets("((())"))
