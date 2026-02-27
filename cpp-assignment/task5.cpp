#include <iostream>
#include <string>

int main() {
   for (int number = 0; number <= 999999; number++) {
      std::string ticket = std::to_string(number);
      while (ticket.size() < 6) {
         ticket = "0" + ticket;
      }

      int sumLeft = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
      int sumRight = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

      if (sumLeft == sumRight) {
         std::cout << ticket << std::endl;
      }
   }
   return 0;

}
