class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
         int ay = abs(ay2-ay1);
        int ax = abs(ax2-ax1);
        int area1 = ay*ax;
        int by = abs(by2-by1);
        int bx = abs(bx2-bx1);
        int area2 = by*bx;
       
       int overlap=0;
       int x5 = max(ax1,bx1);
       int y5 = max(ay1,by1);
       int x6 = min(ax2,bx2);
       int y6 = min(ay2,by2);

       if(x5>x6 || y5>y6){  //condition true mean no intersection ->no overlap:
           overlap=0;
       }
       else{
       overlap =  abs(x6-x5)*abs(y6-y5);    //find the distance between them:
       }
       int real_area = area1+area2-overlap;
       return real_area;
    }
};