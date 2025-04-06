class RandomizedSet:

    def __init__(self):
        self.random_set = defaultdict(int)
        

    def insert(self, val: int) -> bool:
        if val not in self.random_set:
            self.random_set[val] = val
            return True
        return False

    def remove(self, val: int) -> bool:
        if val not in self.random_set:
            return False
        del self.random_set[val]
        return True

    def getRandom(self) -> int:
        keys = list(self.random_set.keys())
        random_index = random.randint(0, len(keys)-1)
        return self.random_set[keys[random_index]]

# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()