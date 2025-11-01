class Solution{
public:
    vector<int> find(vector<int> &nums, int target) {
        int first = -1;
        int N = nums.size();
        int st = 0;
        int end = N-1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                first = mid;
                end = mid-1;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }

        if(first == -1){
            return {-1,-1};
        }else{

            int last = -1;
            st = 0;
            end = N-1;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(nums[mid]==target){
                    last = mid;
                    st = mid+1;
                }else if(nums[mid]>target){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }

            return {first,last};
        }
    }
};