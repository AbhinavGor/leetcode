class MinStack:

    def __init__(self):
        self.stack = deque()

    def push(self, val: int) -> None:
        curr = val
        if len(self.stack) > 0:
            curr = self.stack[-1][1]
            
        self.stack.append([val, min(val, curr)])

    def pop(self) -> None:
        # curr = self.stack[-1]
        self.stack.pop()
        # self.stack[-1][1] = min(self.stack[-1][1], curr[1])

    def top(self) -> int:
        return self.stack[-1][0]

    def getMin(self) -> int:
        return self.stack[-1][1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()