#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout << "enter the size of array:";
    cin>>n;
    
    int arr[n] = {};
    int ele;
    for(int i=0; i<n; i++){
        cout << "Enter the element:";
        cin>>ele;
        arr[i] = ele;
    }
    
    for(int i=n; i>0; i--){
        cout << arr[i-1] << endl;
    }
    return 0;
}