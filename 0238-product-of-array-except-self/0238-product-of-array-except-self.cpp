class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums1) {
        vector<int> nums2(nums1.size(),1);
        for(int i=0;i<nums1.size();i++){
            if(i==0){
                nums2[i] = 1;
            }else {
                nums2[i]= nums2[i-1] * nums1[i-1];
            }
           
        }
        int postfix = 1;
        for(int i=nums1.size()-1;i>=0;i--){
            nums2[i]  *= postfix;
            postfix*=nums1[i];
        }
        return nums2;
       
    }
};

