/*5.Add a feature to delete a content item by its number from the list, update the file accordingly, and display the updated list to confirm
 deletion.*/

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

void deleteContentItem() {
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
        cout << "No content found to delete!" << endl;
        return;
    }

    cout << "--- CURRENT LIST ---" << endl;
    for (size_t i = 0; i < list.size(); i++) {
        cout << i + 1 << ". Title: " << list[i].title << " | Platform: " << list[i].platform << endl;
    }

    int choice;
    cout << "Enter the number of the content to delete: ";
    cin >> choice;

    if (choice < 1 || choice > static_cast<int>(list.size())) {
        cout << "Invalid choice!" << endl;
        return;
    }

    list.erase(list.begin() + (choice - 1));

    ofstream outfile("content_list.txt", ios::trunc);
    for (const auto& item : list) {
        outfile << item.title << "," << item.platform << "," << item.views << "," << item.status << endl;
    }
    outfile.close();

    cout << "\nItem deleted successfully!" << endl;
    cout << "--- UPDATED LIST ---" << endl;
    if (list.empty()) {
        cout << "The list is now empty." << endl;
    } else {
        for (size_t i = 0; i < list.size(); i++) {
            cout << i + 1 << ". Title: " << list[i].title << " | Platform: " << list[i].platform << endl;
        }
    }
}

int main() {
    deleteContentItem();
    return 0;
}