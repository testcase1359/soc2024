#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& v) {
    int index = 0; 
    int i = 0; 
    
    while (i < v.size()) {
        char currentchar = v[i];
        int count = 0;
        while (i < v.size() && v[i] == currentchar) {
            i++;
            count++;
        }
        v[index++] = currentchar;
        if (count > 1) {
            string countstring = to_string(count);
            for (char c : countstring) {
                v[index++] = c;
            }
        }
    }
    
    return index;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newlength = compress(chars);
        for (int i = 0; i < newlength; i++) {
        cout << chars[i];
    }
    cout << endl;
    
    cout << newlength << endl;
    
    return 0;
}
