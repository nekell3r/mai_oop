#include "PalindromeChecker.hpp"

#include <algorithm>

namespace lab01 {

bool PalindromeChecker::IsPalindrome(const std::string& input) {
  std::string tmp = input;
  std::reverse(tmp.begin(), tmp.end());

  if (input != tmp) {
    return false;
  }

  return true;
}

}  // namespace lab01
