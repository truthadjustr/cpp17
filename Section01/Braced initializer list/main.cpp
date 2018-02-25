#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main ( ) {

        // std::initializer_list<int>
        auto intInitializerValues = { 1, 2, 3, 4, 5 };

        // std::initializer_list<double>
        auto doubleInitializerValues = { 1.5, 2.5, 3.5 };

        // auto t = { 1.0, 1, 2.0f };

        vector<int> vectorOfIntegers = intInitializerValues;
        vector<double> vectorOfDoubles = doubleInitializerValues;

        cout << "\nValues in integer vectors are ..." << endl;
        copy ( vectorOfIntegers.begin(), vectorOfIntegers.end(),
               ostream_iterator<int> ( cout, "\t" ) );
        cout << endl;

        cout << "\nValues in double vectors are ..." << endl;
        copy ( vectorOfDoubles.begin(), vectorOfDoubles.end(),
               ostream_iterator<double> ( cout, "\t" ) );
        cout << endl;

        return 0;
}
