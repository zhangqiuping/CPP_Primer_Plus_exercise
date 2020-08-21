//¡¶C++ Primer Plus¡·µÚ11ÕÂ ±à³ÌÁ·Ï°3 chapter11.3.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cstring>
//#include "vector00.h"
#include "vector01.h"

int main()
{

    using VECTOR::Vector;
    using namespace std;

    string filename = "randwalk.txt";
    ofstream outFile;
    outFile.open(filename.c_str(), ios_base::out);

    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    int N, n = 0;
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned long maxstep=0;
    unsigned long minstep=0;
    unsigned long totalstep=0;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        n++;
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        outFile << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
        cout << "Please enter the numbers of test:";
        cin >> N;
        cin.get();
        for (n = 0; n < N; n++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
                step.rect_mode();
                outFile << result << endl;
            }
            outFile <<"The "<<".Test: "<< "After " << steps << " steps, the subject has the following locations:\n";
            outFile << result << endl;
            cout << "After " << steps << " steps, the subject has the following locations:\n";
            cout << result << endl;
            result.polar_mode();
            outFile << " or\n" << result << endl;
            outFile << "Average outward distance per step = " << result.magval() / steps << endl;
            cout << "Average outward distance per step = " << result.magval() / steps << endl;
            totalstep += steps;
            if (maxstep < steps)
                maxstep = steps;
            if (n == 0)
                minstep = steps;
            if (minstep > steps)
                minstep = steps;
            steps = 0;
            result.reset(0.0, 0.0, Vector::RECT);
        }
        cout << "Test is over. After " << n << " times test, maxstep is " << maxstep << ", minstep is " << minstep << ", average steps is " << totalstep / N << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    return 1;
}