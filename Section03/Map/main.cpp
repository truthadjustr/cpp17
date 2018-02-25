#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main ( ) {

map<string, long> contacts;

contacts["Jegan"] = 1234567890;
contacts["Meena"] = 5234562890;
contacts["Nitesh"] = 6238567290;
contacts["Sriram"] = 9934567890;

auto pos = contacts.find( "Sriram" );

if ( pos != contacts.end() )
cout << "\nMobile number of "
<< pos->first << " is " << pos->second << endl;
else
cout << "\nContact not found." << endl;

return 0;
}
