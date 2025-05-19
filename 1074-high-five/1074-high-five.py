class Solution:
    def highFive(self, items: List[List[int]]) -> List[List[int]]:
        m = defaultdict(list)
        items.sort(reverse=True)
        for item in items:
            if len(m[item[0]]) < 5:
                m[item[0]].append(item[1])
        res = []
        for i, scores in m.items():
            avg = sum(scores)/5
            res.append([i, int(avg)])
        res.sort()
        return res