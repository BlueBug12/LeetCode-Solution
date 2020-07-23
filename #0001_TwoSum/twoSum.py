class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numbers = {}
        for i in range(len(nums)):
            try:
                return [numbers[target-nums[i]], i]
            except:
                numbers[nums[i]] = i
