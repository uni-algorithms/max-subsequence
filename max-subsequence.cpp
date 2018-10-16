#ifndef MAX_SUB_CPP
#define MAX_SUB_CPP

#include <algorithm>
#include <fstream>

auto sumMaxSubSequence(std::istream &input) -> int {
    int n = 0;
    int sol = 0;
    int sum = 0;

    input >> n;

    for (int i = 0; i < n; ++i) {
        int tmp = 0;
        input >> tmp;
        sum += tmp;

        if (sum < 0) sum = 0;
        sol = std::max(sol, sum);
    }

    return sol;
}

#endif //MAX_SUB_CPP
