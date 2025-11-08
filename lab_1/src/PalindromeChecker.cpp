#include "PalindromeChecker.hpp"

#include <algorithm>

namespace lab01 {

bool PalindromeChecker::IsPalindrome(const std::string& input) {
  if (input.empty()) {
    return true;
  }
  std::string reversed = input;
  std::reverse(reversed.begin(), reversed.end());

  if (input != reversed) {
    return false;
  }

  return true;
}

}  // namespace lab01
