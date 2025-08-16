#include<iostream>
using namespace std;


void passengerBoarding()
{
    cout<<"\n----Final Boarding Process---"<<endl;
    cout<<"\n5 minutes left for closing the gate"<<endl;
    cout<<"\nAll passengers aboard? (yes/no): \n";
    string passenger;
    cin >> passenger;
    if (passenger == "yes") {
        cout << "\nAll passengers are aboard. Closing the gate." << endl;
    } else
    {
        cout<<"\nAnnouncing for final call for passengers"<<endl;
        cout<<"\n.\n..\n...\n....\n......\n";
        cout<<"\nTime is up! Gate will be closed now."<<endl;
        cout<<"\nThe gate is now closed."<<endl;   
    }
}

void prirorityBoarding()
{
    cout<<"\n----Priority Process---"<<endl;
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
    cout<<"\nPlane arrived at the airport"<<endl;
    prirorityBoarding();
    passengerBoarding();
    cout<<"\nPlane is ready to take off"<<endl;
    cout<<"----------------------------------"<<endl;

}