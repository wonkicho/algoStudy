from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = defaultdict(list)
        for word in strs:
            w = ''.join(sorted(word))
            anagrams[w].append(word)
            
        return anagrams.values()
