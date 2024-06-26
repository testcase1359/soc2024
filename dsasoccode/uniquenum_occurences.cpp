#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> num_occurrences;
                for (int num : arr) {
            num_occurrences[num]++;
        }
        set<int> occurrences;
        for (auto it = num_occurrences.begin(); it != num_occurrences.end(); it++) {
            occurrences.insert(it->second);
        }
        return occurrences.size() == num_occurrences.size();
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution solution;
    bool result = solution.uniqueOccurrences(arr);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}