#include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int countTriplets(vector<int>& arr, int k) {
    int count = 0;
    unordered_map<int, int> suffix, prefix;
    for(int el : arr)
        suffix[el]++;
    int x, z;
    for(int y : arr) {
        suffix[y]--;
        x = y / k;
        z = y * k;
        count += prefix[x] * suffix[z];
        prefix[y]++;
    }
    return count;
}

int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int triplets = countTriplets(arr, k);
    cout <<"\ntriplets : "<< triplets << endl;
}