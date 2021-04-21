#include <iostream>
#include <array>
using namespace std;

int binarySearch(int arr[], int firstelem, int sizeofarr, int x)
{
    int operations =0;
    int middle =0;
    bool found = false;
    while (found == false) {
        operations++;
        middle = firstelem + (sizeofarr - firstelem) / 2;
        // Check if x is present at middle
        if (arr[middle] == x){
          cout << "Number of operations performeds:" <<operations <<endl;
          return middle;
          break;
        }


        // If x greater, ignore left half
        if (arr[middle] < x){
            firstelem = middle + 1;
        }


        // If x is smaller, ignore right half
        else{
            sizeofarr = middle - 1;
        }

    }
return 0;
}


void sequencialsearch( int arr[], int sizes, int s){
    int operations =0;
    bool found = false;
 for(int n = 0; n < sizes;n++){

    if(s == arr[n]){
      cout << "The element is located at " << n <<endl;
      found = true;
      if(n == 0){
        cout << "The search was the best case" <<endl;
      }else if(n > 3 && n < 6){
      cout << "The search was the average case" <<endl;
      }else if(n == sizes-1){
       cout << "The search was the Worst case" <<endl;
      }else {
        cout << "Out " <<endl;
      }
      break;
    } else if (n == sizes-1 && found == false){
      cout << "Sorry, " << s << " is not in the array " <<endl;
    }
    operations++;
  }

cout << "Number of operations performed :"<<operations<<endl;
}

int main()
{
    int n = 100000;
    int arr[n];
    int searchs;
    int operations;
    for ( int x =0; x < n ; x++){
        arr[x] = x;
    }
    searchs = 99999;
    sequencialsearch(arr,n,searchs);
}
