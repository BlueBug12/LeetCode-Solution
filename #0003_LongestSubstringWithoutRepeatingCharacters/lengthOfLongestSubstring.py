class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        start=0
        chars=dict()
        for i in range(len(s)):
            if s[i] in chars and chars[s[i]]>=start:
                start=chars[s[i]]+1
            chars[s[i]]=i
            longest=max(longest,i-start+1)

        return longest
            
