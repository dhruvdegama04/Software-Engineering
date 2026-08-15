/*5.Given a file called insta_followers.txt containing Instagram usernames (one per line), write a program to count and display the total 
number of followers listed in the file.<br><br><em><strong>Constraint:</strong> Do not use any array or vector to store the names—just count 
as you read.</em>*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("insta_followers.txt");

    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string username;
    int totalFollowers = 0;

    while (infile >> username) {
        totalFollowers++;
    }

    infile.close();

    cout << "Total Followers: " << totalFollowers << endl;

    return 0;
}