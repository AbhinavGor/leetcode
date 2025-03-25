class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre = [1]
        post = [1]

        for i in nums:
            pre.append(pre[-1]*i)
        # pre = pre[:]

        for i in nums[::-1]:
            post.append(post[-1]*i)
        post = post[::-1][1:]

        res = []
        for i in range(len(nums)):
            res.append(pre[i]*post[i])

        return res