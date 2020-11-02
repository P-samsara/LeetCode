class Solution {
    public int numOfMinutes(int n, int headID, int[] manager, int[] informTime) {
        List<Integer> Times = new ArrayList();
        for(int i = 0; i < n; i++){
            int k = i;
            int eachTime = 0;
            while(manager[k]!=-1){
                eachTime += informTime[manager[k]];
                k = manager[k];
            }
            Times.add(eachTime);
            
        }
        //System.out.println(Collections.max(Times).getClass().toString());
        return Collections.max(Times).intValue();

    }
}