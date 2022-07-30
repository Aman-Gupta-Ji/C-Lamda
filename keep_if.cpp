#include <bits/stdc++.h>
// #include <fplus/fplus.hpp>
using namespace std;

bool is_even(int x) {
    return (x & 1) == 0;
}

template<typename F, typename T>
vector<T> tranform_vec(F f, const vector<T>& xs) {
    vector<T> re;
    re.reserve(xs.size());
    transform(begin(xs), end(xs), back_inserter(re), f);
    return re;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> res = keep_if(is_even, arr);
    for(int r: res)
        cout << r << " ";
    cout << endl;
}
