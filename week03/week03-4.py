#學習計畫第4週Easy 在一堆草堆裡haystack,找到一支針needle
#在python只要1行 a.find(b) 在字串a 裡找到字串 b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)
