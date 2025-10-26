#include <gtest/gtest.h>

#include "PalindromeChecker.hpp"

TEST(PalindromeCheckerTest, SimplePalindromes) {
    EXPECT_TRUE(lab01::PalindromeChecker::IsPalindrome("aba"));
    EXPECT_TRUE(lab01::PalindromeChecker::IsPalindrome("abba"));
    EXPECT_TRUE(lab01::PalindromeChecker::IsPalindrome("a"));
    EXPECT_TRUE(lab01::PalindromeChecker::IsPalindrome(""));
}

TEST(PalindromeCheckerTest, MixedCase) {
    EXPECT_FALSE(lab01::PalindromeChecker::IsPalindrome("RaceCar"));
    EXPECT_FALSE(lab01::PalindromeChecker::IsPalindrome("Aa"));
    EXPECT_TRUE(lab01::PalindromeChecker::IsPalindrome("racecar"));
}

TEST(PalindromeCheckerTest, WithSpacesAndPunctuation) {
    EXPECT_FALSE(lab01::PalindromeChecker::IsPalindrome("A man, a plan, a canal: Panama"));
    EXPECT_FALSE(lab01::PalindromeChecker::IsPalindrome("No 'x' in Nixon"));
    EXPECT_TRUE(lab01::PalindromeChecker::IsPalindrome("amanaplanacanalpanama"));
}

TEST(PalindromeCheckerTest, NotPalindrome) {
    EXPECT_FALSE(lab01::PalindromeChecker::IsPalindrome("ab"));
    EXPECT_FALSE(lab01::PalindromeChecker::IsPalindrome("palindrome"));
}
