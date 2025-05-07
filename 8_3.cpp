#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> uniqueTransactions;
    int transactionId;

    cout << "Enter transaction IDs (0 to stop): ";
    while (cin >> transactionId && transactionId != 0) {
        uniqueTransactions.insert(transactionId);
    }

    cout << "\nUnique Sorted Transaction IDs:\n";
    for (int id : uniqueTransactions) {
        cout << id << " ";
    }

    cout << endl;
    cout << "\n\n Aryan Parikh" << "\n" << "24ce070" << endl;
    return 0;
}