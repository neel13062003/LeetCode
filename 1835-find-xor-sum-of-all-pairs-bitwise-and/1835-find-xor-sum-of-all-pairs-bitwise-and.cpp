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
         int x = arr1[0],y = arr2[0];
        for(int i=1;i<arr1.size();i++){
            x ^= arr1[i];
        }
        for(int i=1;i<arr2.size();i++){
            y ^= arr2[i];
        }
        return (y&x);
    }
};