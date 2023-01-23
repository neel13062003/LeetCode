class Solution {
public:
     
    /*int  doSingleDigit(int n){
        int sum=0;
        while(n>0){
            int temp= n%10;
            sum = sum+ temp;
            n = n/10;
        }
        return sum;
    }
    
    string doOperation(string s){
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z')
            sum = sum +  doSingleDigit(int(s[i])-96);
            else
            sum = sum +  doSingleDigit(int(s[i])-64);  
        }
        string str =  to_string(sum);
        return str;
    }
    
    int getLucky(string s, int k) {
        string str;
        while(k--){
           str = doOperation(s);
           s=str; 
        }
        int ans = stoi(str);
        return ans;
    }*/
     int getLucky(string s, int k) {
        string t = "";
        for(auto i:s) t+=to_string(i-'a'+1);
        int ans = 0;
        while(k--){
            for(auto i:t) ans+=i-'0';
            t=to_string(ans);
            if(k)ans=0;
        }
        return ans;
     }
};



/*

 string str= "a";
    cout << str[0] + '0' << endl;              //             97 + 48 = > 145
    cout << str[0] - '0' << endl;              //             97 - 48 = > 49
    cout << int(str[0])  << endl;              //             97


    string str1= "A";
    cout << str1[0] + '0' << endl;              //             65 + 48 = >  113
    cout << str1[0] - '0' << endl;              //             65 - 48 = >  17
    cout << int(str1[0])  << endl;              //             65

*/