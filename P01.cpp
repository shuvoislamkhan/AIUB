#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> p_ids;
    // int initial_ids[] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112};
    int initial_ids[13];
    cout << "Enter 12 IDs:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << "Enter ID " << i + 1 << ": ";
        cin >> initial_ids[i];
    }
    p_ids.assign(initial_ids, initial_ids + 12);
    int a1, a2, a3, my_id, e_pos;
    cout << "Insert 3 new Participant IDs: ";
    cin >> a1 >> a2 >> a3;
    cout << "Insert my ID: ";
    cin >> my_id;
    p_ids.insert(p_ids.begin(), a1);
    p_ids.push_back(a2);
    p_ids.insert(p_ids.begin() + (p_ids.size() / 2), a3);
    cout << "Insert the position to erase: ";
    cin >> e_pos;
    p_ids.erase(p_ids.begin());
    p_ids.erase(p_ids.begin() + e_pos);

    cout << "After Insert 3 ID's and delete two ID's, the list of Participant IDs: ";
    for (int i = 0; i < p_ids.size(); i++) {
        cout << p_ids[i] << " ";
    }
    cout << endl;

    cout << "Reversed List: ";
    reverse(p_ids.begin(), p_ids.end());
    for (int id : p_ids) cout << id << " ";
    cout << endl;

    auto myidtrue = find(p_ids.begin(), p_ids.end(), my_id);
    if (myidtrue != p_ids.end()) {
        cout << "My ID (" << my_id << ") is at index " << distance(p_ids.begin(), myidtrue) << " in the reversed list." << endl;
    } else {
        cout << "My ID (" << my_id << ") is not in the list." << endl;
    }

    return 0;
}