/*
You are given a list of integers nums. You can reduce the length of nums by taking any two integers, 
removing them, and appending their sum to the end. The cost of doing this is the sum of the two integers 
you removed.

Return the minimum total cost of reducing nums to one integer.

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(vector<int> nums) {
    
    vector<int> taken;
    
    sort(nums.begin(), nums.end());
    
    deque<int> d;
    for (auto x : nums)
    {
        d.push_back(x);
    }
    for (auto x : d) printf("%i,", x);
    printf("\n");
    
    while (d.size() > 1)
    {

        int first = d.front();
        d.pop_front();
        int second = d.front();
        d.pop_front();
        taken.push_back(first);
        taken.push_back(second);
        d.push_back(first+second);
        sort(d.begin(), d.end());

        printf("d: ");
        for (auto x : d) printf("%i,", x);
        printf("\n");        

    }
    int sum = 0;
    for (auto x : taken)
    {
        sum += x;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    printf("%i", solve({-98,-66,-48,-43,1,13,99}));
}
