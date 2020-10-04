class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int j=height.length-1;
        int max_area = 0;

        while(i<j){
            int min_height = Math.min(height[i],height[j]);
            max_area = Math.max(max_area,(j-i)*min_height);
            while(height[i]<=min_height&&i<j){
                ++i;
            }
            while(height[j]<=min_height&&i<j){
                --j;
            }

        }
        return max_area;
    }
}
