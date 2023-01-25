class Solution {
    public int findComplement(int num) {
        // to create a mask of set bits, if num=5(101) then Intger.    highestOneBit of 101 is 100. left shift by 1 makes it 1000, binary subtraction by 1 =(1000-1)= 111, So xor of 101 ^ 111 = 010
     int mask =( Integer.highestOneBit(num) << 1 ) -1;

     return num ^ mask;
    }
}