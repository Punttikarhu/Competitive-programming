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
#define ll long long

vector<int>::iterator closerToX(vector<int>::iterator it1, vector<int>::iterator it2, int x) {
    int dist_a = abs(*it1-x);
    int dist_b = abs(*it2-x);
    if (dist_a  < dist_b) return it1;
    else if (*it1 < *it2 && dist_a == dist_b) return it1;
    return it2;
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    printf("arr: ");
    for (auto x : arr) printf("%i,", x);
    printf("\nk: %i\n", k);
    printf("x: %i\n", x);

    vector<int> result;

    auto it = find(arr.begin(), arr.end(), x);

    vector<int>::iterator it1, it2;
  
    if (it != arr.end()) // x is in arr 
    {
        //i = it - arr.begin();
        result.push_back(*it);

        it1 = prev(it, 1);
        it2 = next(it, 1);

    } 

    for (int i = 0; i < k-1; i++)
    {
        if (closerToX(it1, it2, x) == it1) {
            result.push_back(*it1);
            it1 = prev(it1, 1);
        } else {
            result.push_back(*it2);
            it2 = next(it2, 1);
        }

    }

    sort(result.begin(), result.end());
    return result;
}



int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> arr = {1,2,3,4,5};
    int k = 4;
    int x = 3;
    vector<int> result = findClosestElements(arr, k, x);
    printf("result: ");
    for (auto x : result) printf("%i,", x);

}
