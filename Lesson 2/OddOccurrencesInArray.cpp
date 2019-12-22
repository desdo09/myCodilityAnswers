#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &vector) {
    sort(vector.begin(), vector.end());

    for (unsigned int i = 0; i < vector.size(); i+=2) {
        if( i ==  vector.size() - 1 ||  vector.at(i+1) != vector.at(i))
            return vector.at(i);
    }

    return -1;
}
