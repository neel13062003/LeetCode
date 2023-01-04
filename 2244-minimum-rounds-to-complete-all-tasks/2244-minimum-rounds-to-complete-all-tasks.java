class Solution {
    public int minimumRounds(int[] arr) {
        Map<Integer,Integer>map = new HashMap<>();
        for(int i:arr){
            map.put(i,map.getOrDefault(i,0)+1);
        }
        int ans = 0;
        for(Integer val:map.values()){
            int freq= val;
            if(freq<2){
                return -1;
            }
            else if(freq==2){
                ans+=1;
            }
            else{
                double res = freq/3.0;
                ans+=Math.ceil(res);
            }
        }
        return ans;
    }
}