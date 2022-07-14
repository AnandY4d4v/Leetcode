class Solution {
public:
    int searchInsert(vector<int>& arr, int key) {
            int start = 0;
    int end = arr.size()-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return mid;
}
        
    
};