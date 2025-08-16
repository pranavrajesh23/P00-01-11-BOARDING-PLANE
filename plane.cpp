#include<iostream>
using namespace std;


void prirorityBoarding()
{
    cout<<"\n----Boarding Priority Process---"<<endl;
    cout<<"\nStarting priority boarding"<<endl;
    cout<<"\nIs passenger a first class passenger? (yes/no): \n";
    string first;    
    cin >> first;
    if (first == "yes") {
        cout << "\nBoarding first class passenger." << endl;
    } else {
        cout<<"\nIs passenger a half first class passenger? (yes/no): \n";
        string half;
        cin >> half;
        if (half == "yes") 
        {
            cout<<"\nBoarding half first class passenger."<<endl;
        }
        else
        {
            cout<<"\nProcessing again\n";
            prirorityBoarding();
        }
    }
}

int main()
{
    cout<<"----------Boarding Plane----------"<<endl;
    cout<<"\nPlane arrved at the airport"<<endl;
    prirorityBoarding();
    // passengerBoarding();
    cout<<"\nPlane is ready to take off"<<endl;
    cout<<"----------------------------------"<<endl;

}