//
// Ver 0.2 <3
//
#include <iostream>
#include <string>
#include "Shitter.h"
#include <fstream>
using namespace std;

int main(){

    ofstream myFile;
    myFile.open("Shitorium.txt");

    string person;
    int shits_done;

    

    // sum of shits
    int sum = 0;
    

        // 1
        cout << "Enter person's name: \n";
        cin >> person;
        cout << "Enter number of shits done by " << person << "\n";
        cin >> shits_done;
        Shitter p1(person, shits_done);
        myFile << p1.get_name() << " has done " << p1.get_shits() << " shits\n";
        sum += p1.get_shits();
        

        // 2
        cout << "Enter person's name: \n";
        cin >> person;
        cout << "Enter number of shits done by " << person << "\n";
        cin >> shits_done;
        Shitter p2(person, shits_done);
        myFile << p2.get_name() << " has done " << p2.get_shits() << " shits\n";
        sum += p2.get_shits();

        // 3
        cout << "Enter person's name: \n";
        cin >> person;
        cout << "Enter number of shits done by " << person << "\n";
        cin >> shits_done;
        Shitter p3(person, shits_done);
        myFile << p3.get_name() << " has done " << p3.get_shits() << " shits\n";
        sum += p3.get_shits();

        // 4
        cout << "Enter person's name: \n";
        cin >> person;
        cout << "Enter number of shits done by " << person << "\n";
        cin >> shits_done;
        Shitter p4(person, shits_done);
        myFile << p4.get_name() << " has done " << p4.get_shits() << " shits\n";
        sum += p4.get_shits();
        

        // 5
        cout << "Enter person's name: \n";
        cin >> person;
        cout << "Enter number of shits done by " << person << "\n";
        cin >> shits_done;
        Shitter p5(person, shits_done);
        myFile << p5.get_name() << " has done " << p5.get_shits() << " shits\n";
        sum += p5.get_shits();

        // 6
        cout << "Enter person's name: \n";
        cin >> person;
        cout << "Enter number of shits done by " << person << "\n";
        cin >> shits_done;
        Shitter p6(person, shits_done);
        myFile << p6.get_name() << " has done " << p6.get_shits() << " shits\n";
        sum += p6.get_shits();
       
    
    myFile << "Total shits: " << sum << "\n";
    


    

    


    return 0;
}