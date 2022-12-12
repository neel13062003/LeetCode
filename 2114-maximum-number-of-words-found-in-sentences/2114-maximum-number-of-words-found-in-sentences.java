class Solution {
    public int mostWordsFound(String[] sentences) {
        //logic count space in each senetences
        //return count+1
        
        int res=0;
        int currentCount=0;
        for(String s:sentences){
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)==' '){
                    currentCount+=1;
                }
            }
            res=Math.max(currentCount,res);
            currentCount=0;
        }
        return res+1;
    }
}