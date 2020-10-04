class Solution:
    def maxArea(self, height: List[int]) -> int:
        i = 0
        j = len(height)-1
        max_area=0
        while(i<j):
            min_height = min(height[i],height[j])
            max_area = max(max_area,(j-i)*min_height)
            while(height[i]<=min_height and i<j):
                i+=1
            while(height[j]<=min_height and i<j):
                j-=1
        return max_area
