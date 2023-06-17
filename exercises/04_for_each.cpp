#include <algorithm>
#include <vector>

std::vector<int> exercise_04_for_each() {
  std::vector<int> v{1, 2, 3, 4, 5};

  // We want to increment each element of the above vector and then return it
  std::for_each(v.begin(), v.end(), [](int& x) { x++; });

  return v;
}
