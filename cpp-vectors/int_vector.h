struct int_vector {
	int* data;
	int size;
	int capacity;

	void pop_back() {
		if (size > 0) {
			size--;
		}
	}

	void clear() {
		size = 0;
	}

	bool is_empty() {
		return size == 0;
	}

	int& front() {
		return data[0];
	}

	int& back() {
		return data[size - 1];
	}
};
