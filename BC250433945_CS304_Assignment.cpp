#include <iostream>
using namespace std;

/*
Name: Zainab Akabr
VU ID: BC250433945
Course: CS304 Object Oriented Programming
Assignment No. 2
*/

//================ Base Class =================

class TrafficSignal
{
private:
    string signalID;
    string location;

protected:
    int greenDuration;
    int redDuration;

public:
    TrafficSignal(string id, string loc, int green, int red)
    {
        signalID = id;
        location = loc;
        greenDuration = green;
        redDuration = red;
    }

    virtual void displayStatus() = 0;

    string getSignalID()
    {
        return signalID;
    }

    string getLocation()
    {
        return location;
    }

    int getRedDuration()
    {
        return redDuration;
    }
};

//================ Vehicle Sensor =================

class VehicleSensorSignal : public TrafficSignal
{
private:
    int vehicleCount;

public:
    VehicleSensorSignal(string id, string loc, int green, int red, int count)
        : TrafficSignal(id, loc, green, red)
    {
        vehicleCount = count;
    }

    void displayStatus()
    {
        cout << "===== Vehicle Sensor Signal =====" << endl;
        cout << "Signal ID : " << getSignalID() << endl;
        cout << "Location : " << getLocation() << endl;
        cout << "Green Duration : " << greenDuration << endl;
        cout << "Red Duration : " << getRedDuration() << endl;
        cout << "Vehicle Count : " << vehicleCount << endl;
        cout << endl;
    }

    float calculateEfficiency()
    {
        return ((float)greenDuration /
               (greenDuration + getRedDuration())) * 100;
    }
};

//================ Pedestrian Sensor =================

class PedestrianSensorSignal : public TrafficSignal
{
private:
    int pedestrianCount;
    bool emergencyMode;

public:
    PedestrianSensorSignal(string id, string loc, int green, int red,
                           int count, bool emergency)
        : TrafficSignal(id, loc, green, red)
    {
        pedestrianCount = count;
        emergencyMode = emergency;
    }

    void displayStatus()
    {
        cout << "===== Pedestrian Sensor Signal =====" << endl;
        cout << "Signal ID : " << getSignalID() << endl;
        cout << "Location : " << getLocation() << endl;
        cout << "Green Duration : " << greenDuration << endl;
        cout << "Red Duration : " << getRedDuration() << endl;
        cout << "Pedestrian Count : " << pedestrianCount << endl;
        cout << "Emergency Mode : ";

        if(emergencyMode)
            cout << "True";
        else
            cout << "False";

        cout << endl << endl;
    }

    int getGreenDuration()
    {
        return greenDuration;
    }
};

//================ Main =================

int main()
{
    VehicleSensorSignal vehicle("V945",
                                "Main Street",
                                60,
                                40,
                                25);

    PedestrianSensorSignal pedestrian("P945",
                                      "Central Park",
                                      50,
                                      60,
                                      30,
                                      true);

    vehicle.displayStatus();

    cout << "Traffic Efficiency : "
         << vehicle.calculateEfficiency()
         << "%" << endl << endl;

    pedestrian.displayStatus();

    cout << "Green Duration from Pedestrian Signal : "
         << pedestrian.getGreenDuration()
         << " seconds" << endl;

    return 0;
}