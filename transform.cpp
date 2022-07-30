#include <bits/stdc++.h>
using namespace std;

int square(int x) {
    return x * x;
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
    vector<int> res = tranform_vec(square, arr);
    // res.reserve(n);
    // transform(begin(arr), end(arr), back_inserter(res), square);
    for(int r: res)
        cout << r << " ";
    cout << endl;
}
