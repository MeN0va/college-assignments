#include <iostream>
#include "int_vector.h"

int main() {
    int raw_data[3] = {10, 20, 30};
    int_vector v;
    v.data = raw_data;
    v.size = 3;
    v.capacity = 3;

    std::cout << "Front: " << v.front() << std::endl;
    std::cout << "Back: " << v.back() << std::endl;
    
    v.pop_back();
    std::cout << "New Back after pop: " << v.back() << std::endl;

    return 0;
}
