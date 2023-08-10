#include <iostream>
#include <vector>

using namespace std;

// Hàm quay lui kiểm tra xem có thể chia tập thành 2 tập con có tổng bằng nhau hay không
bool canPartition(vector<int>& nums, int target, int currSum, int start) {
    if (currSum == target)
        return true;

    for (int i = start; i < nums.size(); ++i) {
        if (currSum + nums[i] <= target) {
            // Thử thêm số này vào tập con thứ nhất và đệ quy kiểm tra các số tiếp theo
            if (canPartition(nums, target, currSum + nums[i], i + 1))
                return true;
        }
    }

    return false;
}

// Hàm kiểm tra xem có thể chia tập thành 2 tập con có tổng bằng nhau hay không
bool canPartition(vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    // Nếu tổng các số là lẻ thì không thể chia thành 2 tập con có tổng bằng nhau
    if (totalSum % 2 != 0) {
        return false;
    }

    int targetSum = totalSum / 2;
    return canPartition(nums, targetSum, 0, 0);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> nums(N);
        for (int i = 0; i < N; ++i) {
            cin >> nums[i];
        }

        if (canPartition(nums)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
