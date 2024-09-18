class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        d={}
        for c in s:
            if c in d:
                d[c]=d[c]+1