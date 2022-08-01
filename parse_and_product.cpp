// "1,5,4,7,2,2,3" -> 1*5*4*7*2*2*3 -> 1680

// #include "https://raw.githubusercontent.com/Dobiasd/FunctionalPlus/master/include_all_in_one/include/fplus/fplus.hpp"

#include <bits/stdc++.h>
using namespace std;

int str_to_int(const string& str) {
    int res;
    istringstream(str) >> res;
    return res;
}

int main() {
    const string input = "1,5,4,7,2,2,3";
    const auto parts = split(',', false, input);
    const auto nums = transform(str_to_int, parts);
    const auto result = reduce(multiplies<int>(), 1, nums);
    cout << result << endl;
}
