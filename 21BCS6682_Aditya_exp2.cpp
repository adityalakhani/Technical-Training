#include <iostream>
using namespace std;
int main() {
    int n, d;
    cout << "enter the size of array & steps:";
    cin >> n >> d;
    
    int arr[n] = {};
    int ele;
    
    for(int i=0; i<n; i++){
        cout << "Enter the element:";
        cin >> ele;
        arr[i] = ele;
    }
    
    int rotatedArray[n] = {};
    
    for (int i = 0; i < n; i++) {
        int newIndex = (i + n - d) % n;
        rotatedArray[newIndex] = arr[i];
    }
    
    cout << "Rotated array is: " << endl;
    
    for (int i = 0; i < n; i++) {
        cout << rotatedArray[i] << endl;
    }

    return 0;
}