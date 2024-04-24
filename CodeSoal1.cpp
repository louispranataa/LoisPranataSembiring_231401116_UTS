#include <iostream>
using namespace std;

int main() {
    float n = 0, mean = 0, total = 0;
    int i = 0;
    cout << "Input (-1) untuk mengakhiri" << endl;
    while(n != -1) {
        ++i;
        cout << "Nilai ke-" << i << ": ";
        cin >> n;
        if (n != -1) 
            total += n;
    }
    if (i > 1) {
        mean = total / (i - 1);
        cout << "Mean : " << mean;
    } else {
        cout << "Tidak ada data yang dimasukkan.";
    }
    return 0;
}