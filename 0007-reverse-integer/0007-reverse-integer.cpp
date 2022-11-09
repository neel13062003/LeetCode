class Solution {
public:
    int reverse(int x) {
       /* string str=to_string(x);
        //reverse(str.begin(),str.end());

        string str_rev;
        for(int i=str.size()-1;i>=0;i--){
            str_rev.push_back(str[i]);
        }   
        
        int num= stoi(str_rev);
        return num;*/
        int y=0,n;
        while( x != 0){
            n = x%10;
            //Checking the over/underflow.
            //Actually, it should be y>(INT_MAX-n)/10, but n/10 is 0, so omit it.
            if (y > INT_MAX/10 || y < INT_MIN/10){
                 return 0;
            }
            y = y*10 + n;
            x /= 10;
        }
        return y; 
    }
};