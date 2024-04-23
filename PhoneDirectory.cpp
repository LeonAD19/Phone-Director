#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Read area code, prefix, and line number
    int areaCode, prefix, lineNumber;
    cin >> areaCode >> prefix >> lineNumber;
    
    // Output directory heading
    cout << setw(9) << left << "Country" << "Phone Number" << endl;
    cout << setw(9) << left << "-------" << "------------" << endl;
    
    // Output phone number for the United States with proper format
    cout << setw(9) << left << "U.S." << "+1 (" << areaCode << ")" << prefix << "-" << lineNumber << endl;
    
    // Output the phone number for Brazil
    cout << setw(9) << left << "Brazil" << "+55 (" << areaCode << ")" << (prefix + 100) << "-" << lineNumber << endl;
    
    // Output the phone number for Croatia
    cout << setw(9) << left << "Croatia" << "+385 (" << areaCode << ")" << prefix << "-" << (lineNumber + 50) << endl;
    
    // Output the phone number for Egypt
    cout << setw(9) << left << "Egypt" << "+20 (" << (areaCode + 30) << ")" << prefix << "-" << lineNumber << endl;
    
    cout << setw(9) << left << "France" << "+33 (" << prefix << ")" << areaCode << "-" << lineNumber << endl;
    return 0;
}
