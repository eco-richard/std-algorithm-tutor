#include <algorithm>
#include <iostream>
#include <vector>

namespace ranges {

template <typename Container, typename Func>
void for_each(Container cont, Func f) {
    for (auto it = cont.begin();
         it != cont.end();
         ++it)
    {
        f(*it);
    }
}

template <typename Container, typename Func>
bool all_of(Container cont, Func f) {
    for (const auto& elem : cont) {
        if (!f(elem)) {
            return false;
        }
    }
    return true;
}

template <typename Container, typename Func>
bool any_of(Container cont, Func f) {
    for (const auto& elem : cont) {
        if (f(elem)) {
            return true;
        }
    }
    return false;
}

}

int main() {
    namespace r = ranges;
    std::vector v {2, 4, 6, 8, 10};

    std::cout << std::boolalpha 
        << ranges::all_of(v, [](int n) { return n % 2 == 0; });

    std::cout << r::any_of(v, [](int n) { return n >= 10; });


}
