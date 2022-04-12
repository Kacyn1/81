#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;


ifstream in;
ifstream in2;
ofstream out;


vector <vector <int>> numery;
vector <vector <int>> numery2;

void open() {
in.open("C:\\wspolrzedne.txt");
in2.open("C:\\wspolrzedneTR.txt");


int temp;
for (int j = 0; j < 100; j++) {
numery.push_back(vector <int>());
    				for (int i = 0; i < 6; i++) {
				in >> temp;
			numery[j].push_back(temp);
    		
			
			
			    }

    }int temp2;
for (int j = 0; j < 100; j++) {
numery2.push_back(vector <int>());
for (int i = 0; i < 6; i++) {
in2 >> temp2;
numery2[j].push_back(temp2);
}}}

void close() {
in.close();
out.close();
}
void first() {
int counter = 0;
for (int i = 0; i < numery.size(); i++) {if (numery[i][0] > 0 && numery[i][1] > 0 && numery[i][2] > 0 && numery[i][3] > 0 && numery[i][4] > 0 && numery[i][5] > 0 ) {
counter++;
}}
cout << counter << endl;
}



void inOneLine() {


			    int counter = 0;
    for (int i = 0; i < numery.size(); i++) {
    
if ((numery[i][2] - numery[i][0])*(numery[i][5]- numery[i][1]) == (numery[i][3] - numery[i][1])*(numery[i][4] - numery[i][0])){
counter++;
}}
			    cout << counter<<endl;
}

void biggest() {
double max = sqrt(pow(numery2[0][0] - numery2[0][2], 2) + pow(numery2[0][1] - numery2[0][3], 2)) + sqrt(pow(numery2[0][2] - numery2[0][4], 2) + pow(numery2[0][3] - numery2[0][5], 2)) + sqrt(pow(numery2[0][0] - numery2[0][4], 2) + pow(numery2[0][1] - numery2[0][5], 2));
int maxxa = numery2[0][0], maxya = numery2[0][1], maxxb = numery2[0][2], maxyb = numery2[0][3], maxxc = numery2[0][4], maxyc = numery2[0][5];
for (int i = 0; i < numery2.size(); i++) {
        
	double ab = sqrt(pow(numery2[i][0] - numery2[i][2], 2) + pow(numery2[i][1] - numery2[i][3], 2));double bc = sqrt(pow(numery2[i][2] - numery2[i][4], 2) + pow(numery2[i][3] - numery2[i][5], 2));
double ac = sqrt(pow(numery2[i][0] - numery2[i][4], 2) + pow(numery2[i][1] - numery2[i][5], 2));
if ((ab + bc > ac) || (ab+ac > bc) || (ac + bc > ab)) {
if (ab + bc + ac > max) {
max = ab + bc + ac;
maxxa = numery2[i][0], maxya = numery2[i][1], maxxb = numery2[i][2], maxyb = numery2[i][3], maxxc = numery2[i][4], maxyc = numery2[i][5];
}}}
cout << ceil(max*100)/100<<endl;
    cout << maxxa << "," << maxya << " " << maxxb << "," << maxyb << " " << maxxc << "," << maxyc << endl;
}int main()
{
    open();
    first();
    inOneLine();
    biggest();
    close();
}
