class MinStack:

    def __init__(self):
        self.s = deque()

    def push(self, val: int) -> None:
        if not self.s:
            self.s.append((val, val))
        else:
            top = self.s[-1]
            self.s.append((min(val, top[0]), val))

    def pop(self) -> None:
        self.s.pop()

    def top(self) -> int:
        return self.s[-1][1]

    def getMin(self) -> int:
        return self.s[-1][0]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()