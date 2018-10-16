#include <cassert>
#include "max-subsequence.cpp"

auto main() -> int {
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");
    assert(input);
    assert(output);
    output << sumMaxSubSequence(input);
    input.close();
    output.close();
    return 0;
}