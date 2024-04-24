#include <iostream>
using namespace std;

int main(){
    system("cls");
    int y;
    cout << "Input (-1) Untuk Mengakhiri" << endl;
    cout << "Input y (2<= y <=10) : ";
    cin >> y;

    if (y >= 2 && y <= 10){
    for(int i = 1; i <= y; i++){
    for(int j = 1; j <= i; j++){
    cout << "X ";
    }
        cout << endl;
        }
        for(int i = 1; i <= y; i++){
        for(int z = 1; z <= y; z++){
        cout << "  ";
        }
        for(int j = 2; j <= i; j++){
        cout << "  ";
        }
        for(int k = y; k >= i; k--){
        cout << "X ";
        }
        cout << endl;
        }
    }
    else{
    cout << "Inputan Tidak Memenuhi Batas!!";
    }
    return 0;   
}