/*
Find K Closest Elements
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. 
The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or

|a - x| == |b - x| and a < b

Constraints:

1 <= k <= arr.length

1 <= arr.length <= 10^4

arr is sorted in ascending order.

-10^4 <= arr[i], x <= 10^4
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {

    vector<int> result;
    
    deque<pair<int, int>> d;

    for (auto e : arr) d.push_back({abs(e-x), e});

    sort(d.begin(), d.end());


    while (k--)
    {
        result.push_back(d.front().second);
        d.pop_front();
    }
    sort(result.begin(), result.end());
    return result;    
}

int main() {
    vector<int> v = {1,-2,-3,-4,5, 23, -5};
    int k = 4;
    int x = 3;
    auto r = findClosestElements(v,k,x);

    for (auto k : r) cout << k << endl;
}

