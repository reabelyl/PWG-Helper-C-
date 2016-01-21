//
//  main.cpp
//  PWGHelper
//
//  Created by Lyle Baer on 1/18/16.
//  Copyright © 2016 Lyle Baer. All rights reserved.
//
//

#include <iostream>
#include <vector>
using namespace std;

// Main Script

int main()
{
    // Vector to store Calculated Grades
    vector <int> calculatedGrades;
    
    cout << "Enter Number of Students: ";
    int nStudent;
    cin >> nStudent;
    
    // Loop
    if (nStudent > 1)
    {
        const int MAX = 50;
        float grades[MAX];
        float weights[MAX];
        
        // Greeting
        cout << "\nHello, its me\n\n";
        cout << "Your Personal Weighted Grade Helper\n\n";
        cout << "Call me PWG Helper for short.\n\n";
        
        // Input # of exercises
        cout << "Enter number of exercises: ";
        int num;
        cin >> num;
        
        // Input Weights
        int correct = 0;
        while (correct == 0)
        {
            for (int i = 0; i < num; i++)
            {
                cout << "\nWhat is the weight in percent? ";
                cin >> weights[i];
                weights[i] = weights[i] / (float)100.0;
            }
            correct = 1;
        }
        // Input Grades
        for (int i = 0; i < num; i++)
        {
            cout << "\nWhat is the Grade? ";
            cin >> grades[i];
        }
        
        // Values
        cout << "Printed Values\n";
        for (int i = 0; i < num; i++)
        {
            cout << grades[i] << "\n";
            cout << weights[i] << "\n";
        }
        
        // Find Average
        float sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum = sum + grades[i] * weights[i];
        }
        // Total Sum
        cout << "This student has a score of: " << sum;
        cin >> sum;
        calculatedGrades.push_back(sum);
        
        // Keep console open
        cin.get();
        cin.get();
    }
    else
    {
        // Variables
        const int MAX = 50;
        float grades[MAX];
        float weights[MAX];
        
        // Greeting
        cout << "Hello, its me\n\n";
        cout << "Your Personal Weighted Grade Helper\n\n";
        cout << "Call me PWG Helper for short.\n\n";
        
        // Input # of exercises
        cout << "Enter number of exercises: ";
        int num;
        cin >> num;
        
        // Input Weights
        int correct = 0;
        while (correct == 0)
        {
            for (int i = 0; i < num; i++)
            {
                cout << "\nWhat is the weight in percent? ";
                cin >> weights[i];
                weights[i] = weights[i] / (float)100.0;
            }
            correct = 1;
        }
        // Input Grades
        for (int i = 0; i < num; i++)
        {
            cout << "\nWhat is the Grade? ";
            cin >> grades[i];
        }
        
        // Values
        cout << "Printed Values\n";
        for (int i = 0; i < num; i++)
        {
            cout << grades[i] << "\n";
            cout << weights[i] << "\n";
        }
        
        // Find Average
        float sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum = sum + grades[i] * weights[i];
        }
        //Total Sum
        cout << "This student has a score of: " << sum;
        cin >> sum;
        calculatedGrades.push_back(sum);
        
        // Calculate letter grade
        for (float i = 0; i < sum; i++);
        cout << "Average Letter Grade" << 1 + sum << " is:" << "\n\n" << sum;
        if (sum < 59.9)
            cout << "\n F " << "\n";
        else if (sum <= 69.9)
            cout << "\n D " << "\n";
        else if (sum <= 79.9)
            cout << "\n C " << "\n";
        else if (sum <= 89.9)
            cout << "\n B " << "\n";
        else
            cout << "\n A " << "\n";
        
        // Keep console open
        cin.get();
        cin.get();
    }
        
    return 0;
}
