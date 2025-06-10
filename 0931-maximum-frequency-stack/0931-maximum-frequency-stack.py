class FreqStack:

    def __init__(self):
        self.count = defaultdict(int)
        self.maxCnt = 0
        self.stack = defaultdict(list)

    def push(self, val: int) -> None:
        self.stack[self.count[val]+1].append(val)
        self.count[val] += 1
        self.maxCnt = max(self.maxCnt, self.count[val])

    def pop(self) -> int:
        res = self.stack[self.maxCnt].pop()

        self.count[res] -= 1

        if not self.stack[self.maxCnt]:
            self.maxCnt -= 1

        return res 
        


# Your FreqStack object will be instantiated and called as such:
# obj = FreqStack()
# obj.push(val)
# param_2 = obj.pop()