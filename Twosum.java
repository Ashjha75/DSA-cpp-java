class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sum[]=new int[2];
        HashMap<Integer,Integer>Map=new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
             if(Map.containsKey(target-nums[i])){
                 sum[0]=Map.get(target-nums[i]);
                 sum[1]=i;
                 return sum;
             }
             Map.put(nums[i],i);
        }
        return sum;
    }
}


