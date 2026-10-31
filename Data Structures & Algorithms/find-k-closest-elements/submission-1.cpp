
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int position = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        int left = position - 1;
        int right = position;

        while (right - left - 1 < k) {
            if (left < 0) {
                right++;
            }
            else if (right >= arr.size()) {
                left--;
            }
            else if (x - arr[left] <= arr[right] - x) {
                left--;
            }
            else {
                right++;
            }
        }

        return vector<int>(arr.begin() + left + 1, arr.begin() + right);
    }
};
