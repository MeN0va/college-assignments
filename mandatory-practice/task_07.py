class PhoneBook:
    def __init__(self, size=8):
        self.size = size
        self.count = 0
        self.table = [[] for _ in range(self.size)]

    def _hash(self, key):
        total = 0
        for char in key:
            total += ord(char)
        return total % self.size

    def _resize(self):
        old_table = self.table
        self.size *= 2
        self.table = [[] for _ in range(self.size)]
        self.count = 0
        for bucket in old_table:
            for name, phone in bucket:
                self.add(name, phone)

    def add(self, name, phone):
        if self.count / self.size > 0.75:
            self._resize()
        index = self._hash(name)
        for i, (n, p) in enumerate(self.table[index]):
            if n == name:
                self.table[index][i] = (name, phone)
                return
        self.table[index].append((name, phone))
        self.count += 1

    def get(self, name):
        index = self._hash(name)
        for n, p in self.table[index]:
            if n == name:
                return p
        return None

    def delete(self, name):
        index = self._hash(name)
        for i, (n, p) in enumerate(self.table[index]):
            if n == name:
                self.table[index].pop(i)
                self.count -= 1
                return True
        return False

    def contains(self, name):
        index = self._hash(name)
        for n, p in self.table[index]:
            if n == name:
                return True
        return False

    def __len__(self):
        return self.count

pb = PhoneBook()
pb.add("Emma", "+1234567890")
pb.add("James", "+0987654321")
pb.add("Jessica", "+1122334455")

print(pb.get("Emma"))
print(pb.contains("James"))
pb.delete("James")
print(pb.contains("James"))
print(len(pb))
