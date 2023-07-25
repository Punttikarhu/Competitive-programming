/*
First Unique Character in a String
Given a string s, find the first non-repeating character in it and return its index. 
If it does not exist, return -1.
*/

#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    long unsigned int size = s.size();
    long unsigned int start = 0;
    vector<char> v(s.begin(), s.end());
    vector<char> checked;
    while(start < size) 
    {
        if (find(v.begin()+start+1, v.end(), s[start]) != v.end()) 
        {    
            checked.push_back(s[start]);
            start++;
            continue;
        } else 
        {
            if (find(checked.begin(), checked.end(), s[start]) != checked.end()) 
            {
                start++;
                continue;
            }
            return start;
        }
    }
    return -1;
}

int main() {
    int index = firstUniqChar("aabb");
    printf("%i", index);
}
