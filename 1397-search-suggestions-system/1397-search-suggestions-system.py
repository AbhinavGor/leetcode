class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        products.sort()
        res = []

        for i in range(1, len(searchWord)+1):
            temp = []
            for p in products:
                if p.startswith(searchWord[:i]):
                    temp.append(p)
                    if len(temp) == 3:
                        break
            res.append(temp)
        return res