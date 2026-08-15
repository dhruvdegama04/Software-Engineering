/*2.Build a console menu that lets users add new content ideas (title, platform, views, status) and save each entry to a text file named 
content_list.txt.<br><br><em><strong>Hint:</strong> Use file handling to append each new content item to the file.</em>*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void input() {
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Platform: ";
        getline(cin, platform);
        cout << "Enter Views: ";
        cin >> views;
        cout << "Enter Status: ";
        cin.ignore();
        getline(cin, status);
    }

    void saveToFile() {
        ofstream outfile("content_list.txt", ios::app);
        if (outfile.is_open()) {
            outfile << title << "," << platform << "," << views << "," << status << endl;
            outfile.close();
            cout << "Content saved successfully!\n";
        } else {
            cout << "Error opening file!\n";
        }
    }
};

int main() {
    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Add New Content Idea\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Content c;
            c.input();
            c.saveToFile();
        }
    } while (choice != 2);

    return 0;
}