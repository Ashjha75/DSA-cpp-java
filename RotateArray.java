class Solution {
    public void swap(int[] nums ,int start,int end){
        if(nums.length>1){
            while(start<=end){
                int temp=nums[start];
                nums[start]=nums[end];
                nums[end]=temp;
                start++;
                end--;
            }
        }
    }

    public void rotate(int[] nums, int k) {
        k=k%nums.length;
        swap(nums,0,nums.length-k-1);
        swap(nums,nums.length-k,nums.length-1);
        swap(nums,0,nums.length-1);
        
        
    }
}
