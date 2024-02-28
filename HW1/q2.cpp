#include <iostream>
using namespace std;

bool IsArithmeticProgreression(int* arr, int size);

int main()
{	
    bool more_then_two = false;
    int size;
    int* arr;
    cout << "How many numbers? ";
    cin >> size;
    if(size >= 3)
        more_then_two = true;
    if(!more_then_two){
        size = 3;
        arr = new int[size];
        cout << "Enter " << size <<  " numbers\n";
    }
    else{
        arr = new int[size];
        cout << "Enter " << size << " numbers\n";
    }
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    if (IsArithmeticProgreression(arr, size)){
        cout << "The array is arithmetic";
    }
    else{
        cout << "The array is not arithmetic";
    }
    delete[] arr;
    
	return 0;
}

bool IsArithmeticProgreression(int* arr, int size){
    int diff;
    diff = arr[1] - arr[0];
    for(int i = 2; i < size; i++){
        if(arr[i] - arr[i - 1] != diff){
            return false;
        }
    }
    return true;
}
