class Solution:
    def pop(self, stack):
        if stack:
            return stack.pop()
        return 0

    def calPoints(self, operations: List[str]) -> int:
        s = deque()
        for op in operations:
            if op == "+":
                s.append(s[-1] + s[-2])
            elif op == "D":
                if s:
                    s.append(s[-1]*2)
            elif op == "C":
                s.pop()
            else:
                s.append(int(op))
            print(s)
            
        return sum(s)