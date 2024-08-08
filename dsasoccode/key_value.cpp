#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mpp;

    TimeMap() {
        // Constructor
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (mpp.find(key) == mpp.end())
            return "";
        
        int low = 0, high = mpp[key].size() - 1;
        int maxTimeStamp = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (mpp[key][mid].first <= timestamp) {
                maxTimeStamp = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        if (maxTimeStamp == -1)
            return "";
        return mpp[key][maxTimeStamp].second;
    }
};

int main() {
    TimeMap tm;
    tm.set("foo", "bar", 1);
    cout << tm.get("foo", 1) << endl; // Output: bar
    cout << tm.get("foo", 3) << endl; // Output: bar
    tm.set("foo", "bar2", 4);
    cout << tm.get("foo", 4) << endl; // Output: bar2
    cout << tm.get("foo", 5) << endl; // Output: bar2
    return 0;
}
