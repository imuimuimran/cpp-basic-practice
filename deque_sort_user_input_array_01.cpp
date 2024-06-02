#include <iostream>
#include <deque>
#include <algorithm>

int main() {
  std::deque<int> nums;
  int num;

  std::cout << "Enter numbers to add to the deque (enter -1 to stop):\n";
  while (true) {
    std::cin >> num;
    if (num == -1) {
      break;
    }
    nums.push_back(num);
  }

  std::sort(nums.begin(), nums.end());

  std::cout << "Sorted deque:\n";
  for (auto n : nums) {
    std::cout << n << " ";
  }
  std::cout << "\n";

  return 0;
}
