/*class Solution {
public:
    string capitalizeTitle(string str) {
        if (str[0] >= 'a' && str[0] <= 'z') // Convert lowercase to uppercase
             str[0] = str[0] - 32;
        for(int i=1;i<str.size();i++){
            if(str[i]>='A' && str[i]<='Z'){  //convert upper to lower
                str[i]=str[i]+32;
            }
            else if(str[i]== ' '){
                 if(str[i+1]>='a' && str[i+1]<='z'){    //convert lower to upper
                    str[i+1]=str[i+1]-32;
                    i++; 
                 }                
            }
        }
        return str;
        
        //toupper(str) , tolower(str);
    }
};*/
class Solution {
public:
    string capitalizeTitle(string word) 
{
   string ans="";
   int idx=0;
   
   while(idx < word.length())
   {
   	  if(idx<word.length() and (word[idx]>='A' and word[idx]<='Z') or (word[idx]>='a' and word[idx]<='z'))
   	  {
 	    string str="";
   	  	while(idx<word.length() and (word[idx]>='A' and word[idx]<='Z') or (word[idx]>='a' and word[idx]<='z'))
   	  	{
   	  		str.push_back(tolower(word[idx]));
   	  		idx++;
        }
        if(str.length() <= 2)
        {
        	ans=ans+str;
            if(idx<word.length())
            {
                ans.push_back(' ');
            }
		}
		else if(str.length() > 2)
		{
			str[0]=toupper(str[0]);
			ans=ans+str;
            if(idx<word.length())
            {
                ans.push_back(' ');
            }
		}
      }
      while(idx<word.length() and word[idx]==' ')
      {
      	idx++;
	  }
   }
   return ans;
}
};