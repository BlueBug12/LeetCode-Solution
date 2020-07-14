class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>m = new HashMap<Integer, Integer>();
        for(int i=0;i<nums.length;m.put(nums[i], i++)){
            if(m.containsKey(target-nums[i]))
                return new int[] {m.get(target-nums[i]),i};
        }
        return new int[]{0,0};
    }
}
