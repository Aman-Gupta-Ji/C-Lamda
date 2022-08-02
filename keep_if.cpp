#include <bits/stdc++.h>
// #include <fplus/fplus.hpp>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> res = keep_if([](int x) -> bool
                              { return x % 2 == 0; },
                              arr);
    //lamda
    //[capture list] (parameters) -> return type
    // return is optional and can be decided by reuturn type of the function 
    // {
    //     body
    // }
    for(int r: res)
        cout << r << " ";
    cout << endl;

    int val = 42;
    const auto add_value = [&val](int x) -> int
    { // caputre by reference means function is affected by change is val
        return x + val;
    };
    return 0;
}
