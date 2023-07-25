/*
Given an integer array nums and an integer k, return the kth largest element in the array.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findKthLargest(vector<int> nums, int k) {
    printf("nums: ");
    for (auto x : nums) printf("%i,", x);
    printf("\nk: %i\n", k);

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    printf("nums sorted: ");
    for (auto x : nums) printf("%i,", x);
    
    
    vector<int>::iterator it = nums.begin();
    advance(it, k-1);
    return *it;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int src[] = {-98,-89,3,-99,2,4,5,5,6};
    vector<int> v(begin(src), end(src));
    int kth_largest = findKthLargest(v, 4);
    printf("%i", kth_largest);

}
