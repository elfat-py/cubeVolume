#include <iostream>
using namespace std;


double cuboidVol(double firstS, double secS, double thirdS)
    {
        double firstSide, secSide, thirdSide, vol;

        cout<<"Enter the length of the first side: ";
        cin>>firstSide;
        cout<<"Enter the length of the second side: ";
        cin>>secSide;
        cout<<"Enter the length of the third side: ";
        cin>>thirdSide;
        vol = firstSide*secSide*thirdSide;
        cout<<"The length of the cuboid with length of sides x="<<firstSide<<" y="<<secSide<<" z="<<thirdSide<<" is equal to: "<<vol;
        return vol;

}
int main(){



    double first, sec, third, decision;

    do{

        cuboidVol(first, sec, third);
        cout<<"Do you want to check calculate some other cuboid volume: 1/0 ";
        cin>>decision;
    }while (decision > 0);

    return 0;
}
