/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        ListNode result = null;
        ArrayList all = new ArrayList<Integer>();
        for(int i=0; i<lists.length; i++){
            ListNode tmp = lists[i];
            while(tmp!=null){
                all.add(tmp.val);
                tmp = tmp.next;
            }
        }
        Collections.sort(all,new Comparator<Integer>(){
            @Override
            public int compare(Integer i1, Integer i2){
                return i2 - i1;
            }
        });
        for(int i=0; i<all.size(); i++){
            //int tmpint = all.get(i);
            int tmpint = Integer.parseInt(String.valueOf(all.get(i)));
            ListNode tmp = new ListNode(tmpint);
            tmp.next = result;
            result = tmp;
        }
        return result;
    }
}

//arrayList 用 add and get
//对arraylist 和 array 排序，用collections.sort, 其中可以自定义comparator，注意只能返回int而不是bool
//int tmpint = Integer.parseInt(String.valueOf(all.get(i)));