/**
 * LeetCode Practice Problem 
 * ~ Shadman S.
 * Problem Statement: You are given two strings s1 and s2 of equal 
 * length consisting of letters "x" and "y" only. Your task is to make these two 
 * strings equal to each other. You can swap any two characters that belong to 
 * different strings, which means: swap s1[i] and s2[j].
 * Return the minimum number of swaps required to make s1 and s2 equal, 
 * or return -1 if it is impossible to do so.
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minSwap (string s1, string s2){
    
    int x = 0; // integer variable to keep track 
    int y = 0; // integer variable to keep track
    for (int i=0; i < s1.size(); i++){ // loop to find similarities and count them
        if (s1[i] == 'x' && s2[i] == 'y'){
            x++;
        }
        else if (s1[i] == 'y' && s2[i] == 'x'){
            y++;
        }
    }
    
    if ( (x+y)%2 != 0){ // if the remainder is not zero then return -1
        return -1;
    }
    
    return (x/2) + (y/2) + (x%2) * 2; 
}

int main()
{
    string s1;
    string s2;
    
    cout << "Enter your same length of strings consisting x's & y's" << endl;
    cin >> s1;
    cin >> s2;
    
    int result = minSwap (s1, s2);
    
    if (result == -1){
        cout << "Impossible to swap" << endl;
    }
    else{
        cout << "Swaped " << result << " times" << endl;
    }

    return 0;
}
