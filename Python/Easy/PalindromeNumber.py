"""
Leetcode:
https://leetcode.com/problems/palindrome-number/

Question:
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Constraints:
-231 <= x <= 231 - 1
 
Follow up:
Could you solve it without converting the integer to a string
"""

class Solution:
    def isPalindrome(self, x: int) -> bool:
        num = x
        reverse = 0
        
        while num > 0:
            last_digit = num%10
            reverse = (reverse*10)  + last_digit
            num = num // 10

        return x == reverse

"""
Time Complexity: O(log10(n))
Space Complexity: O(1)
"""