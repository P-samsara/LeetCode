string multiply(string num1, string num2) {
	string sum(num1.size()+num2.size(),'0');
	for(int i = num1.size()-1; i >= 0; i--)
	{
		int carry = 0;
		for(int j = num2.size()-1; j >= 0; j--)
		{
			int tmp = (sum[i+j+1]-'0') + (num1[i]-'0')*(num2[j]-'0')+carry;
			sum[i+j+1] = tmp % 10 + '0';
			carry = tmp / 10;
		}
		sum[i] += carry; //高端：进位（int）和‘0’ 相加，既完成了进位存储，又完成了转换成字符。
	}
	size_t startpos = sum.find_first_not_of("0");
	if(string::npos != startpos)
	{
		return sum.substr(startpos);
	}
	return "0";
}

//注释： 两个数的i位和j位决定了乘积的i+j+1位。