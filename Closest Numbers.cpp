#include <bits/stdc++.h>

using namespace std;
vector<int> closestNumbers(vector<int> arr) {
    vector<int> closestNumbersArray ;
    sort(arr.begin(),arr.end());
    int difference = arr[1] - arr[0];
    closestNumbersArray.push_back(arr[0]);
    closestNumbersArray.push_back(arr[1]);
    for(int i = 2 ; i < arr.size(); i++){
        
        if(difference > (arr[i] - arr[i-1])){
            difference = (arr[i] - arr[i-1]);
            closestNumbersArray.clear();
            closestNumbersArray.push_back(arr[i-1]);
            closestNumbersArray.push_back(arr[i]);
            
        }
        else if(difference == arr[i] - arr[i-1] ){
            closestNumbersArray.push_back(arr[i-1]);
            closestNumbersArray.push_back(arr[i]);
            
        }
        
    }
  return closestNumbersArray;  
}

int main(){
    int n ;
    cout << "Enter number of elements:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array :";

    for (int i = 0; i < n; i++) {
        int num ;
        cin >> num;

        arr[i] = num;
    }

    vector<int>  ans = closestNumbers(arr);
    for(int n : ans){
        cout << n << "  ";
    }

}
