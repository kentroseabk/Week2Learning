// Week2Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int numberOfInput = 3;
    float inputNumbers[numberOfInput];

    cout << "Please enter three numbers..." << endl;

    float total = 0;

    for (int i = 0; i < numberOfInput; i++) {
        cin >> inputNumbers[i];

        total += inputNumbers[i];
    }

    cout << "Your sum is " << total << " and the average is " << (total / numberOfInput);
}
