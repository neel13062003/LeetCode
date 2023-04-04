class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
//         vector<int>vec;
//         for(int i=0;i<arr1.size();i++){
//             for(int j=0;j<arr2.size();j++){
//                 vec.push_back(arr1[i]&arr2[j]);
//             }
//         }
//         int xorSum=vec[0];
        
//         for(int i=1;i<vec.size();i++){
//             xorSum= xorSum^vec[i];
//         }
        
//         return xorSum;
         int x = 0,y = 0;
        for(auto &i: arr1){
            x ^= i;
        }
        for(auto &i: arr2){
            y ^= i;
        }
        return (y&x);
    }
};