#include "athlete.h"

// Problem 10
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main () {
        vector <Athlete> newAthlete; // set vector
        cout << fixed << setprecision (2);

        for (int i = 0; i < 4; i++) {  // user input section
                int height;
                double weight;
                string name;
                char gender;
                string sport;

                cout << "Enter details for athlete #" << i+1 << endl;
                cout << "Enter height (in):";
                cin >> height;

                cout << "Enter weight:";
                cin >> weight;

                cout <<"Enter name:";
                cin >> name;

                cout << "Enter gender:";
                cin >> gender;

                cout <<"Enter sport;";
                cin >> sport;

                Athlete entry(height,weight,name,gender,sport);

                newAthlete.push_back(entry);
                cout << endl;
        }

        for (int i = 0; i < 4; i++) {  // printing output info
                cout << "Info for athlete #" << i+1 << endl;
                newAthlete[i].printInfo();
                cout << endl;
        }

        if (newAthlete.size() >= 2) {  // deleting second item
                newAthlete.erase(newAthlete.begin() + 1);
                cout << "Second Athlete Removed.";
                cout << endl;
        }

        for (int i = 0; i < newAthlete.size(); i++) { // printing output again
                cout << "Updated List:" << endl;
                newAthlete[i].printInfo();
                cout << endl;
        }

        string search;
        bool found = false; // to end upcoming loop

        cout << "Enter athlete to search for:";
        cin >> search;

        for (int i = 0; i < newAthlete.size(); i++) {
                if (newAthlete[i].GetName() == search) {
                        cout << "Athlete found:" << endl;
                        newAthlete[i].printInfo();
                        found = true;
                        break;
                }
        }
        if (!found) { // if not found
                cout << "Athlete not found." << endl;
        }

        return 0;
}
