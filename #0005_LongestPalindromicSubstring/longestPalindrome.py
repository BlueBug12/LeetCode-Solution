class Solution:
    def __init__(self):
        self.sub=""

    def longestPalindrome(self, s: str) -> str:
        if(len(s)<2):
            return s
        for i in range(len(s)):
            self.palindrome(s,i,i)
            self.palindrome(s,i,i+1)
        return self.sub;

    def palindrome(self, s:str, left:int, right:int):
        while left >= 0 and right < len(s) and s[left] == s[right]:
            left -= 1
            right += 1
        if(right-left-1>len(self.sub)):
            self.sub = s[left+1:right]
        
