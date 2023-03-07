class Solution {
    public int removeDuplicates(int[] nums) {
       int point=0;
        for(int i=1;i<nums.length;i++){
            if(nums[i-1]!=nums[i]){
                point++;
                nums[point]=nums[i];
            }

        }
        return(point+1);
    }
}
