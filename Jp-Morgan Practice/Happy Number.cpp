/**
 * LeetCode Practice Problem 
 * ~ Shadman S.
 * Problem Statement: Write an algorithm to determine if a number n is happy.
 * A happy number is a number defined by the following process:
 * - Starting with any positive integer, replace the number by the sum of the squares 
 *   of its digits.
 * - Repeat the process until the number equals 1 (where it will stay), or it 
 *   loops endlessly in a cycle which does not include 1.
 * - Those numbers for which this process ends in 1 are happy.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isHappy(int n){
    unordered_set <int> seen; //initailize a set to store seen #

    // while n is not 1 and n has not been seen before
    while (n != 1 && seen.find(n) == seen.end()){
        //add n to seen
        seen.insert(n);
        
        int sum = 0;
        
        while (n!=0){
            int digit = n %10;
            sum += digit * digit;
            n/=10;
        }
        n = sum;
    }
    return n == 1;
}

int main()
{
    int n;
    
    cout << "Enter a number to see if it reaches a happy number (1)" << endl;
    
    cin >> n;
    
    cout << isHappy(n);

    return 0;
}
