/*4.Add an option in your console app to let users update the status of any content idea by selecting its number from the displayed list and 
saving the change back to the file.<br><br><em><strong>Hint:</strong> You will need to read all items, modify the selected one, and overwrite
 the file.</em>*/

 #include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Content {
    string title;
    string platform;
    string views;
    string status;
};

void updateContentStatus() {
    ifstream infile("content_list.txt");
    if (!infile) {
        cout << "Error opening file!" << endl;
        return;
    }

    vector<Content> list;
    string line;

    while (getline(infile, line)) {
        stringstream ss(line);
        Content c;
        getline(ss, c.title, ',');
        getline(ss, c.platform, ',');
        getline(ss, c.views, ',');
        getline(ss, c.status, ',');
        if (!c.title.empty()) {
            list.push_back(c);
        }
    }
    infile.close();

    if (list.empty()) {
        cout << "No content found!" << endl;
        return;
    }

    for (size_t i = 0; i < list.size(); i++) {
        cout << i + 1 << ". Title: " << list[i].title << " | Platform: " << list[i].platform << " | Status: " << list[i].status << endl;
    }

    int choice;
    cout << "Enter the number of the content to update: ";
    cin >> choice;

    if (choice < 1 || choice > static_cast<int>(list.size())) {
        cout << "Invalid choice!" << endl;
        return;
    }

    cout << "Enter new status: ";
    cin.ignore();
    getline(cin, list[choice - 1].status);

    ofstream outfile("content_list.txt", ios::trunc);
    for (const auto& item : list) {
        outfile << item.title << "," << item.platform << "," << item.views << "," << item.status << endl;
    }
    outfile.close();

    cout << "Status updated successfully!" << endl;
}

int main() {
    updateContentStatus();
    return 0;
}