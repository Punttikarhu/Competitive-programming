/*
You are playing a solitaire game with three piles of stones of sizes a​​​​​​, b,​​​​​​ and c​​​​​​ respectively. 
Each turn you choose two different non-empty piles, take one stone from each, and add 1 point to your score. 
The game stops when there are fewer than two non-empty piles (meaning there are no more available moves).

Given three integers a​​​​​, b,​​​​​ and c​​​​​, return the maximum score you can get.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maximumScore(int a, int b, int c) {
    printf("a: %i, b: %i, c: %i\n", a, b, c);
    
    vector<int> v = {a, b, c};
    int score = 0;
    while (v.at(0) > 0)
    {
        sort(v.begin(), v.end());
        v.at(0)--;
        v.at(2)--;
        score++;
    }
    while (v.at(1) > 0)
    {
        sort(v.begin(), v.end());
        v.at(1)--;
        v.at(2)--;
        score++;
    }
    return score;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

}
