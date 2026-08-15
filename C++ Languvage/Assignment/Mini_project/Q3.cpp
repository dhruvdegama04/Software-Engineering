/*3.Implement a function to read all content items from content_list.txt and display them in a numbered list, showing title and platform for 
each.*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void displayContentList() {
    ifstream infile("content_list.txt");
    if (!infile) {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;
    int count = 1;

    while (getline(infile, line)) {
        stringstream ss(line);
        string title, platform, views, status;

        getline(ss, title, ',');
        getline(ss, platform, ',');
        getline(ss, views, ',');
        getline(ss, status, ',');

        if (!title.empty() && !platform.empty()) {
            cout << count << ". Title: " << title << " | Platform: " << platform << endl;
            count++;
        }
    }

    infile.close();
}

int main() {
    displayContentList();
    return 0;
}