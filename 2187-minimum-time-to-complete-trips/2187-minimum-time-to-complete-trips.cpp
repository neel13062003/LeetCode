class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long min= *min_element(time.begin(),time.end());
        long long left=1, right= min * totalTrips;   //possible maximum total trips
        while(left<right)
        {
            long long mid= (left+right)/2;
            long long total=trips(time,mid);   //total trips for the given time: mid
            if(total<totalTrips) left=mid+1;   //discard the left most part
            else right=mid;    //discard the right most part
        }
        return left;

    }

    long long trips(vector<int> time,long long mid){
        long long total_trips=0;
        for(int trip_time:time)  total_trips+=mid/trip_time; 
        return total_trips;
    }
};