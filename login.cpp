#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool loggedIn();

int main() {
    int choice;

    cout << "1: Register\n";
    cout << "2: Login\n";
    cout << "Type in 1 or 2: ";
    cin >> choice;

    if (choice == 1){
        string uName, pass;

        cout << "Select a Username: ";
        cin >> uName;
        cout <<"Select a Password: ";
        cin >> pass;
    }
    else if (choice == 2){
        bool status = loggedIn();
        if (!status){
            cout << "Incorrect Login, Try Again!";
            system("Pause");
            return 0;
        }
        else{
            cout << "You're Logged In!\n";
            system("Pause");
            return 1;
        } 
    }

}

bool loggedIn(){
    string uName, pass, un, pw;

    cout << "Enter Username: ";
    cin >> uName;

    cout << "Enter Password: ";
    cin >> pass;

    ifstream read("data\\" +uName+ ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == uName && pw == pass)
        return true;
    else
        return false;

}
