#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;

//This method generates random pairs of indices and increases their value
//by one
int populateArray(int N, int A[101][101]){

srand(time(NULL));


cout << N << " random pairs of indices will be updated now" << endl;



for(int m=0; m<N; m++){

	int randIndex1 = rand()%101;
	int randIndex2 = rand()%101;


	A[randIndex1][randIndex2]+=1;

}


return 0;


}

//This method accepts the indices for a bounding box and prints out
//the nonzero values and their indices

int searchValidEntries(int XL, int YL, int XH, int YH, int A[101][101]){

cout << "Here are the nonzero values in the given bounding box" << endl;

for(int x=XL; x<XH; x++){
	for(int y=YL; y<YH; y++){
	if(A[x][y]>0){
		cout << "[" << x << "]" << "[" << y << "]= " << A[x][y] << endl;
		}
	}
	cout << endl;
}


return 0;

}



int main(){

int A[101][101]= {0};

//2000 pairs of random indices were updated
populateArray(2000, A);

//The nonzero values of the following bounding boxes were displayed
searchValidEntries(80, 1, 100, 10, A);
searchValidEntries(10, 20, 40, 79, A);
searchValidEntries(1, 90, 100, 100, A);
searchValidEntries(40, 30, 70, 60, A);
searchValidEntries(50, 50, 70, 70, A);


return 0;
}
