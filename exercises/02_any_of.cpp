#include <algorithm>
#include <vector>
#include <algorithms-tutor.hpp>

bool is_even(int n) { return n % 2 == 0; }

bool exercise_02_any_of() {
    // Given a vector of integers, we want to see 
    // if any of the values in the vector are even
    
    std::vector<int> v {1, 3, 5, 6, 7, 9};

    // You can use the is_even function defined above for 
    // convenience 
       
    return std::any_of(v.begin(), v.end(), is_even);
}
