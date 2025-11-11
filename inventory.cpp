#include <bits/stdc++.h>
using namespace std;

vector<string> getRestock(unordered_map<string, int>& inventory, const vector<string>& sales, int k) {
    // Decrease stock for each sold item
    for (const string& item : sales) {
        if (inventory.find(item) != inventory.end()) {
            inventory[item]--;
        }
    }

    // Collect items that need restocking
    vector<string> result;
    for (auto& it : inventory) {
        if (it.second < k) {
            result.push_back(it.first);
        }
    }

    // Sort alphabetically
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int N;
    cin >> N;

    unordered_map<string, int> inventory;
    for (int i = 0; i < N; i++) {
        string name;
        int count;
        cin >> name >> count;
        inventory[name] = count;
    }

    int M;
    cin >> M;
    vector<string> sales(M);
    for (int i = 0; i < M; i++) {
        cin >> sales[i];
    }

    int k;
    cin >> k;

    vector<string> restock = getRestock(inventory, sales, k);

    for (const string& item : restock) {
        cout << item << "\n";
    }

    return 0;
}
