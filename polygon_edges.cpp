#include<iostream>
#include<bits/stdc++.h>
#include<fplus/fplus.hpp>

using namespace std;

float point_distance(const point& p1, const point& p2) {
    const float dx = p2.first - p1.first;
    const float dy = p2.second - p1.second;
    return sqrt(dx * dx + dy * dy);
}

int main(void) {
    vector<point> polygon = {{1, 2}, {7, 3}, {6, 5}, {4, 4}, {2, 9}};
    // find the longest edge of the polygon
    auto edges = fplus::overlapping_pairs_cyclic(polygon);

    auto res = maximum_on([](const pair<point, point> &e) -> float
                          { return point_distance(e.first, e.second); },
                          edges);

    cout << fplus::show(result) << endl;
}