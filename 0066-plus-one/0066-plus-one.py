class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        c = 0
        digits[-1] += 1
        if digits[-1] >= 10:
            c = digits[-1]//10
            digits[-1] %= 10
            for d in range(len(digits) - 2, -1, -1):
                digits[d] += c
                c = 0
                if digits[d] >= 10:
                    c = digits[d]//10
                    digits[d] = digits[d]%10
        if c != 0:
            digits = digits[::-1]
            digits.append(c)
            digits = digits[::-1]

        return digits