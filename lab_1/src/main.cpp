#include "PalindromeChecker.hpp"

#include <iostream>
#include <string>

int main() {
  std::string input;
  if (!std::getline(std::cin, input)) {
    return 0;
  }

  bool is_pal = lab01::PalindromeChecker::IsPalindrome(input);

  if (is_pal) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}
