#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }

    return result;
}


int main() {
    vector<int> numbers{2,8,6,4};
    int target = 6;

    vector<int> result = twoSum(numbers, target);

    cout << "Result: " << result[0] << " & " << result[1] << "\n";

    return 0;
}
