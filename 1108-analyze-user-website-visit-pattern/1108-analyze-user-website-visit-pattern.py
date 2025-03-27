class Solution:
    def mostVisitedPattern(self, username: List[str], timestamp: List[int], website: List[str]) -> List[str]:
        users = defaultdict(list)

        for user, time, site in sorted(zip(username, timestamp, website), key = lambda x: (x[0], x[1])):
            users[user].append(site)
        
        patterns = defaultdict(int)
        for user, sites in users.items():
            for c in list(set(combinations(sites, 3))):
                patterns[c] += 1
        
        pq = [[-j, i] for i, j in patterns.items()]
        heapq.heapify(pq)
        
        return pq[0][1]