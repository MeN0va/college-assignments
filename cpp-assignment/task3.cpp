#include <iostream>
#include <cstring>

int main() {
const char* length = "Hello, World!";
std::cout << length << std::endl;
std::cout << "The length of the string is: " << strlen(length) << std::endl;

return 0;
}
