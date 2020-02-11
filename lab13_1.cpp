#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int x = 0;
	    for(int i = 1 ; i<N; i++){
		   for(int j = 0 ;j <N ;j++){
			   if(i==j) cout << " ["<<d[j]<<"]";
			   else cout<<" "<<d[j]<<" ";
		   }
		   cout<<"=>";

	 int k = i - 1;
     int key = d[i];
      while(k >= 0 && d[k] < key){
        swap(d,k,k+1);
        --k;
		x++;
	  }
		   for(int j = 0 ;j <N ;j++){
			   if(j==i-x) cout << " ["<<d[j]<<"]";
			   else cout<<" "<<d[j]<<" ";
		}
		x = 0;
		cout<<"\n";
}
     }


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
