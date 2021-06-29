class ProductOfNumbers {

    public ProductOfNumbers() {
        al = new ArrayList<Integer>();
    }
    
    public void add(int num) {
        al.add(num);
    }
    
    public int getProduct(int k) {
        int result = 1;
        while (k!=0){
            result  *= al.get(al.size()-k);
            k--;
        }
        return result;
    }
    
    private ArrayList<Integer> al;
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */