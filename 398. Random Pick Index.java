class Solution {
    
    int[] array;
    Random ran;
    
    public Solution(int[] nums) {
        array = nums;
        ran = new Random();
    }
    
    public int pick(int target) {
        int count = 0;
        int result = -1;
        for(int i = 0; i < array.length; i++){
            if(array[i]!=target)
                continue;
            else{
                if(ran.nextInt(++count)==0)
                    result = i;
            }
        }
        return result;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int param_1 = obj.pick(target);
 */

/*1、class 成员无修饰时表示包内可调用；
2、Random ran = new Random(); ran.newInt(x); 表示在【0,x)区间内随机生成一个整数；
3、当所有结果概率一致返回时，可以采用计数，并随机改变的方式，被称为蓄水池方法，理解了老半天。*/
