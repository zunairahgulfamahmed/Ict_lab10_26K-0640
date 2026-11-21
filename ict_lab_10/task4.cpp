#include <iostream>
#include <string>
using namespace std;

class WaterBottle
{
public:
    string brand;
    int capacity;

private:
    int waterLevel;

public:
    WaterBottle()
    {
        brand = "Local";
        capacity = 500;
        waterLevel = 500;
    }

    WaterBottle(string b, int c)
    {
        brand = b;
        capacity = c;
        waterLevel = capacity;
    }

    void setWaterLevel(int w)
    {
        if (w >= 0 && w <= capacity)
        {
            waterLevel = w;
        }
        else
        {
            cout << "Invalid water level!" << endl;
        }
    }

    int getWaterLevel()
    {
        return waterLevel;
    }

    void drink(int ml)
    {
        if (ml <= waterLevel && ml > 0)
        {
            waterLevel -= ml;
            cout << "You drank " << ml << " ml." << endl;
        }
        else
        {
            cout << "Not enough water!" << endl;
        }
    }

    void refill()
    {
        waterLevel = capacity;
        cout << "Bottle refilled." << endl;
    }

    void showInfo()
    {
        cout << "Brand: " << brand
             << ", Capacity: " << capacity
             << " ml, Water Level: " << waterLevel
             << " ml" << endl;
    }
};

int main()
{
    WaterBottle bottle1;

    bottle1.showInfo();

    WaterBottle bottle2("Nestle", 1500);

    bottle2.drink(300);

    cout << "Water left: " << bottle2.getWaterLevel() << " ml" << endl;

    bottle2.drink(2000);

    bottle2.refill();

    bottle2.showInfo();

    bottle1.setWaterLevel(700);

    return 0;
}