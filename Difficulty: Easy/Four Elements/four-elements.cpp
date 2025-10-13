// User function Template for C++

bool find4Numbers(int nums[], int N, int target) {
    

        sort(nums,nums+N);


        for(int i=0;i<N-3;i++){

            if(i>0 && nums[i]==nums[i-1])
                continue;

            for(int j=i+1;j<N-2;j++){

                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int m = j+1;
                int n = N-1;

                while(m<n){

                    long long sum = (long long)nums[i]+nums[j]+nums[m]+nums[n];

                    if(sum>target){
                        n--;
                    }else if(sum<target){
                        m++;
                    }else{
                        return 1;
                    }
                }
            }
        }

        return 0;;
}