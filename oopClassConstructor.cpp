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

    Cars(string brandName, string modelName, string type, int carcc)
    {
        BrandName = brandName;
        ModelName = modelName;
        Type = type;
        CarCC = carcc;
        }

    void getInfoOfCar()
    {
        cout << "Car Name: " << ModelName << endl;
        cout << "Type: " << Type << endl;
        cout << "Brand Name: " << BrandName << endl;
        cout << "Car CC: " << CarCC << "hp" << endl;
        cout << "Countries : " << endl;
        for (string country : RoadPermitCountry)
        {
            cout << country << endl;
        }
    }
};

int main()
{
    Cars myCar("Ford", "Mustang Gt", "Sports Car", 1230);
    Cars myCar2("Audi", "Q3", "SUV", 150);

    myCar.RoadPermitCountry.push_back("Bangladesh");
    myCar.RoadPermitCountry.push_back("USA");
    myCar.RoadPermitCountry.push_back("Canada");

    myCar2.RoadPermitCountry.push_back("Bangladesh");
    myCar2.RoadPermitCountry.push_back("USA");
    myCar2.RoadPermitCountry.push_back("Canada");

    myCar.getInfoOfCar();
    myCar2.getInfoOfCar();
}