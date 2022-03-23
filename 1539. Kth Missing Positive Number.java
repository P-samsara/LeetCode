class Solution {
    public int findKthPositive(int[] arr, int k) {
        int index = 0;
        while((index<arr.length)&&((arr[index]-(index+1)) < k)){
            index ++;
        }
        return index + k;
    }
}