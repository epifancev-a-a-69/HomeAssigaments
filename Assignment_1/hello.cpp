#include "hello.h"

#include <iostream>
#include <string>

void myproject::sayHello() {
  std::string word = "world";
  while (true) {
    std::cout << "Hello, " << word << "!" << std::endl;
    std::getline(std::cin, word);
    if (word.empty()) {
      break;
    }
  }
}
