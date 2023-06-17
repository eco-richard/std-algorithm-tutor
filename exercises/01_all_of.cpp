#include <algorithm>
#include <ranges>
#include <vector>

#include <algorithms-tutor.hpp>

bool exercise_01_all_of() {
    std::vector<int> evens {2, 4, 6, 8, 10};
    std::vector<int> not_evens {2, 4, 6, 7, 10};

    auto is_even = [](int n) { return n % 2 == 0; };

    bool res1 = std::all_of(evens.begin(), evens.end(), is_even);

    return (res1 && !res2);
}
