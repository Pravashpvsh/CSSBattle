/*
Given an integer x, return true if x is a
palindrome
, and false otherwise.



Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 */

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int original = x;
    long long reversed = 0;
    while (x > 0)
    {
        int digit = x % 10;
        reversed = reversed * 10LL + digit;
        x /= 10;
    }
    return original == reversed;
}
// Not needed for leetcode solution
/*
int main()
{
    int num1 = 121;
    printf("Input: %d, Output: %s\n", num1, isPalindrome(num1) ? "true" : "false");
    int num2 = -121;
    printf("Input: %d, Output: %s\n", num2, isPalindrome(num2) ? "true" : "false");
    int num3 = 10;
    printf("Input: %d, Output: %s\n", num3, isPalindrome(num3) ? "true" : "false");
    return 0;
}
*/