class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer,Integer> hp = new HashMap<Integer,Integer>();
        Set<Integer> set = new HashSet<Integer>();
        for(int i = 0; i<nums.length; i++){
            if(set.contains(nums[i])){
                if(hp.get(nums[i]) == 2) {
                    set.remove(nums[i]);
                    continue;
                }
                else{
                    
                    hp.put(nums[i],(hp.get(nums[i]))+1);
                }
            }
            else{
                hp.put(nums[i],1);
                set.add(nums[i]);
            }
        }
        Iterator<Integer> it = set.iterator();
        //if(it.hasNext())
            return it.next();
        //return set.size();
    }
}