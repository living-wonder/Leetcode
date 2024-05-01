class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();
    if (n <= 1) return 0; // No overlaps if there's 0 or 1 interval
    int cnt = 0;
    
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0]; // Sort based on start times
    });
    
    int prevEnd = intervals[0][1];
    for (int i = 1; i < n; ++i) {
        if (intervals[i][0] < prevEnd) { // Overlapping intervals
            ++cnt;
            prevEnd = min(prevEnd, intervals[i][1]); // Choose the one with smaller end time
        } else {
            prevEnd = intervals[i][1]; // No overlap, update the end time
        }
    }
    
    return cnt;
}

};