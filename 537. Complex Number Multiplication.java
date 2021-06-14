class Solution {
    public String complexNumberMultiply(String num1, String num2) {
        String[] num1_splitedArray = num1.split("\\+");
        int real1 = Integer.parseInt(num1_splitedArray[0]);
        int imaginary1 = Integer.parseInt(num1_splitedArray[1].split("i")[0]);
        String[] num2_splitedArray = num2.split("\\+");
        int real2 = Integer.parseInt(num2_splitedArray[0]);
        int imaginary2 = Integer.parseInt(num2_splitedArray[1].split("i")[0]);
        return real1*real2-imaginary1*imaginary2 + "+" + (real1*imaginary2+imaginary1*real2) + "i";
    }
}
//复数乘法