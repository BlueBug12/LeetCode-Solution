class Solution:
    def reverse(self, x: int) -> int:
        sign = [1,-1][x < 0]
        rst = sign * int(str(abs(x))[::-1])#reverse the number
        if(-(2**31)-1< rst <2**31):
            return rst
        else:
            return 0
