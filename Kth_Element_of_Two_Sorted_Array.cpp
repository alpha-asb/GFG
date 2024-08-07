class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        /*
        Approach 1: O(K) Time and O(1) Space
        
        int i =0;
        int j =0;
                while (i < arr1.size() && j < arr2.size()) {
            if (k == 1) {
                return min(arr1[i], arr2[j]);
            }

            if (arr1[i] < arr2[j]) {
                i++;
            } else {
                j++;
            }
            k--;
        }

        while (i < arr1.size()) {
            if (k == 1) {
                return arr1[i];
            }
            i++;
            k--;
        }

        while (j < arr2.size()) {
            if (k == 1) {
                return arr2[j];
            }
            j++;
            k--;
        }
        return -1;
        */
    }
};
