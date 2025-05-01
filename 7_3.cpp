#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Item { string name; int qty; double price; };

int main() {
    string cmd;
    while (true) {
        cout << "Enter command (add/view/search/exit): "; cin >> cmd;
        if (cmd == "add") {
            Item it;
            cout << "Name: "; cin >> it.name;
            cout << "Qty: "; cin >> it.qty;
            cout << "Price: "; cin >> it.price;
            ofstream fout("inventory.txt", ios::app);
            fout << it.name << " " << it.qty << " " << it.price << "\n";
        } else if (cmd == "view") {
            ifstream fin("inventory.txt");
            while (fin >> cmd) {
                double q,p; fin >> q >> p;
                cout << cmd << " " << q << " " << p << endl;
            }
        } else if (cmd == "search") {
            cout << "Search name: "; cin >> cmd;
            ifstream fin("inventory.txt");
            string n; int q; double p;
            while (fin >> n >> q >> p)
                if (n == cmd) cout << n << " " << q << " " << p << endl;
        } else break;
    }
    cout<<"Aryan Parikh"<<"\n"<<"24ce070"<<endl;
    return 0;
}