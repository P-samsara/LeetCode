class Solution {
    public int[] findRightInterval(int[][] intervals) {
        int[] result = new int[intervals.length];
        java.util.NavigableMap<Integer,Integer> m = new TreeMap<Integer,Integer>();
        for(int i = 0; i < intervals.length; i++){
            m.put(intervals[i][0],i);
        }
        for(int i = 0; i < intervals.length; i++){
            Map.Entry<Integer,Integer> entry = m.ceilingEntry(intervals[i][1]);
            result[i] = (entry==null) ? -1:entry.getValue();
        }
        return result;
    }
}