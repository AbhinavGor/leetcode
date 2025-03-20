class RandomizedSet:

    def __init__(self):
        self.s = defaultdict(int)
        self.l = 0

    def insert(self, val: int) -> bool:
        if val in self.s:
            return False
        self.s[val] = val
        self.l+=1
        return True

    def remove(self, val: int) -> bool:
        if val in self.s:
            del self.s[val]
            self.l-=1
            return True
        return False

    def getRandom(self) -> int:
        k = list(self.s.keys())
        i = random.randint(0, len(k)-1)
        print(i, len(k))
        return self.s[k[i]]

# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()