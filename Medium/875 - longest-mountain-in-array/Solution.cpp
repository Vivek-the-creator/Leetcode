class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size() < 3){
            return 0;
        }
        int count = 0;
        for(int i=1; i<arr.size()-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                
                int j = i;
                int k = i;
                while(j > 0 && arr[j]>arr[j-1]){
                    
                    j--;
                }
                while(k < arr.size()-1 && arr[k]>arr[k+1]){
                    
                    k++;
                }
                int len = k-j+1;
                count = max(count, len);
            }
            
        }
        return count;
    }
};