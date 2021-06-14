class Solution {
    public String[] getFolderNames(String[] names) {
        ArrayList<String> result = new ArrayList<String>();
        HashMap<String,Integer> hm = new HashMap<String,Integer>();
        for(String eachString:names){
            if(!hm.containsKey(eachString)){
                hm.put(eachString,0);
                result.add(eachString);
            }
            else{
                Integer index = hm.get(eachString)+1;
                //有可能还是重复
                while(hm.containsKey(eachString + "(" + index + ")")){
                    index ++;
                }
                hm.put(eachString,index);
                result.add(eachString + "(" + index + ")");
                //作为新的key
                hm.put(eachString + "(" + index + ")",0);
            }
        }
        return result.toArray(new String[0]);
    }
}