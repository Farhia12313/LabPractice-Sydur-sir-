#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout << "display array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout << endl;
    //cout<< "Elemant of an array:"<< sum <<endl;
    cout << "Sum of an array:"<< sum ;
    return 0;

}