#include <iostream>
#include <string>
#include <list>

using namespace std;

class Cars
{
public:
    string BrandName;
    string ModelName;
    string Type;
    int CarCC;
    list<string> RoadPermitCountry;
};

int main()
{
    Cars myCar;

    myCar.BrandName = "Ford";
    myCar.ModelName = "Mustang Gt";
    myCar.Type = "Sports Car";
    myCar.CarCC = 1230;
    myCar.RoadPermitCountry.push_back("Bangladesh");
    myCar.RoadPermitCountry.push_back("USA");
    myCar.RoadPermitCountry.push_back("Canada");

    cout << "Car Name: " << myCar.ModelName << endl;
    cout << "Type: " << myCar.Type << endl;
    cout << "Brand Name: " << myCar.BrandName << endl;
    cout << "Car CC: " << myCar.CarCC << "hp" << endl;
    cout << "Countries : " << endl;
    for (string country : myCar.RoadPermitCountry)
    {
        cout << country << endl;
    }

    Cars myCar2;

    myCar2.BrandName = "AUDI";
    myCar2.ModelName = "Q3";
    myCar2.Type = "SUV";
    myCar2.CarCC = 150;
    myCar2.RoadPermitCountry.push_back("Bangladesh");
    myCar2.RoadPermitCountry.push_back("USA");
    myCar2.RoadPermitCountry.push_back("Canada");

    cout << "Car Name: " << myCar2.ModelName << endl;
    cout << "Type: " << myCar2.Type << endl;
    cout << "Brand Name: " << myCar2.BrandName << endl;
    cout << "Car CC: " << myCar2.CarCC << "hp" << endl;
    cout << "Countries : " << endl;
    for (string country : myCar2.RoadPermitCountry)
    {
        cout << country << endl;
    }
}