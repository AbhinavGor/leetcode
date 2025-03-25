class Solution:
    def findOrder(self, numCourses: int, prereqs: List[List[int]]) -> List[int]:
        prereqmap = {c: [] for c in range(numCourses)}

        for crs, pre in prereqs:
            prereqmap[crs].append(pre)

        output = []
        visit, cycle = set(), set()

        def dfs(crs):
            if crs in cycle:
                return False
            if crs in visit:
                return True
            
            cycle.add(crs)

            for pre in prereqmap[crs]:
                if not dfs(pre):
                    return False
            
            cycle.remove(crs)
            visit.add(crs)
            output.append(crs)

            return True
        
        for crs in prereqmap:
            if not dfs(crs):
                return []
        
        return output
        
        