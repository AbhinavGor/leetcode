class Solution:
    def isValid(self, s: str) -> bool:
        inp = []
        out = []
        
        for i in s:
            if i in ["(", "{", "["]:
                inp.append(i)
            else:
                if not inp:
                    return False
                current = inp.pop()
                
                if current == "(":
                    if i != ")":
                        return False
                if current == "{":
                    if i != "}":
                        return False
                if current == "[":
                    if i != "]":
                        return False
        if inp:
            return False
        else:
            return True
            