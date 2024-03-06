
// The time complexity of this solution is o(n - m + 1) * m;

#include<bits/stdc++.h>
using namespace std;

void printindexes(string &one, string &check) {
    int n1 = one.length();
    int n2 = check.length();
    
    for (int i = 0; i < n1; i++) {
        int j = 0;
        for (; j < n2; j++) {
            if (check[j] != one[i + j])
                break;
        }
        if (j == n2) {
            cout << i << " ";
        }
    }
}

int main(){
    string one = "ABCDBCD";
    string check = "C";
    
    printindexes(one, check);

    return 0;

}
