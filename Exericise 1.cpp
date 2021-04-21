#include <iostream>
#include <array>
using namespace std;


int main() {
  array<int,11> arr;
  cout << "Please enter " << arr.size() << " Numbers" <<endl;
  for(int x =0; x< arr.size();x++){
    cout << "Enter number " << x <<" :";
    cin >> arr[x]; 
  }
  cout << endl;
  cout << " Numbers in array and the location of element" <<endl;
  cout <<endl;
  int x = 0;
  while(x != arr.size()){
    cout << "Number[" << x << "] :" << arr[x] <<endl;
    x++;
  }
int search = 0;
  cout << "Enter a number you want to search :";
  cin >> search;
  for(int n = 0; n < arr.size();n++){
    if(search== arr[n]){
      cout << "The element is located at " << n <<endl;
      if(n == 1){
        cout << "The search was the best case" <<endl;
      }else if(n > 3 && n < 6){
      cout << "The search was the average case" <<endl;
      }else if(n == arr.size()-1){
       cout << "The search was the Worst case" <<endl;   
      }else {
        cout << "Out " <<endl;
      }
    } else if (n == arr.size()-1 && arr[n] != search){
      cout << "Sorry, " << search << " is not in the array " <<endl;
    }
  }
}