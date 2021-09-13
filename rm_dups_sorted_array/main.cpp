#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> nums) {
        if (nums.empty()) {
            return 0;
        }

        int result = 0;
        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] != nums[result]) {
                result++;
                nums[result] = nums[index];
            }
        }

        return result + 1;
    }
};

int main() {

    Solution solution;

    vector<int> testVector{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int result = solution.removeDuplicates(testVector);

    cout << result << "\n";

    return 0;
}
