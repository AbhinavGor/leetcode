class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned_str = ""
        for i in s:
            if i.isalnum():
                cleaned_str += i.lower()
        
        n = len(cleaned_str)
        for i in range(n//2):
            if cleaned_str[i]!=cleaned_str[n-i-1]:
                return False
        return True
