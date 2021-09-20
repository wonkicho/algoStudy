class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        digits = [log for log in logs if log.split()[1].isdigit()]
        letters = [log for log in logs if not log.split()[1].isdigit()]
        #x.split()[1:] 이 동일하다면, x.split()[0] 다음 기준
        letters.sort(key = lambda x : (x.split()[1:], x.split()[0]))
        
        letters.extend(digits)
        return letters
