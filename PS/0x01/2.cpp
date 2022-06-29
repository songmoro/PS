#include <iostream>

using namespace std;

int func2(int arr[], int n){

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == 100)
                return 1;
        }
    }
    return 0;
}

int main(){
    int arr[3][4] = {{1, 52, 48},{50, 52},{4, 13, 63, 87}};
    int n[3] = {3, 2, 4};
    
    for(int i = 0; i < 3; i++){
        cout << func2(arr[i],n[i]) << endl;
    }
}
