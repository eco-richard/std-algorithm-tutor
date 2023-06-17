#include <algorithm>
#include <ranges>
#include <vector>

#include <algorithms-tutor.hpp>

bool exercise_03_none_of() {
  std::vector<int> not_evens{1, 3, 5, 7, 9, 11};

  auto is_even = [](int n) {
    return n % 2 == 0;
  };

  return std::none_of(not_evens.begin(), not_evens.end(), is_even);
}
