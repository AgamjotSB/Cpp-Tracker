#include <iostream>
using namespace std;

void sim_int(float, float, float){
    float si, p, r, t;
    si = (p*r*t)/100;
    return si;
};

int main(){
    float P, R, T, SI;
    cout << "Enter Principal value: ";
    cin >>  P;
    cout << endl<< "Enter Rate of interest: ";
    cin >> R;
    cout << endl << "Enter Time in years: ";
    cin >> T;
    cout << endl;
    SI = sim_int(P, R, T);
    cout << SI << "is simple interest.";
    
}