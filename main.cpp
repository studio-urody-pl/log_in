#include <iostream>

using namespace std;

string login, password;

int main() {
    cout << "Enter login: ";
    cin >> login;
    cout << "Enter password: ";
    cin >> password;

    if ((login=="admin")&&(password=="applepie"))
    {
        cout<<"Successfully logged-in"<<endl;
    }
    else
    {
        cout<<"Login or password incorrect";
    }
    return 0;
}
