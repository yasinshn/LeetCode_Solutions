#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        
        if(nums1.size() % 2 == 0){
            return (double)(nums1[(nums1.size() / 2) - 1] + nums1[nums1.size() / 2]) / 2;
        }
        else{
            return (double)nums1[(nums1.size() - 1) / 2];
        }

    }
};

int main(){
    Solution sol;
    vector<int> v1 = {1,3};
    vector<int> v2 = {2,5};
    cout<<sol.findMedianSortedArrays(v1, v2)<<endl;
}
