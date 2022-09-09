#include<string>
#include <iostream>
# define ll long long 
using namespace std;



ll int str_to_int(string str){
	int numbers_in_str=0;
	
	
	for (int i=0;i<str.length();i++){
		if (str[i]<='9' && str[i]>='0') numbers_in_str+=1;
	}
	
	
	int unit=1;
	for(int i=1;i<numbers_in_str;i++){
		unit*=10;
	}

	int result=0,num;
	for (int i=0;i<str.length();i++){
		if (str[i]<='9' && str[i]>='0'){
			num = int(str[i]-'0');
			num*=unit;
			result+=num;
			unit/=10;
		}
	}
	
	return result;
}


ll int multiply(string str1, string str2){
	ll int num1 = str_to_int(str1);
	ll int num2 = str_to_int(str2);
	return num1 * num2;
}



int main (){
string strn1,strn2;
cin >> strn1 >> strn2;
cout << multiply(strn1,strn2);

return 0;
}

