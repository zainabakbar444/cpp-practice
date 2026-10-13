#include <iostream>
using namespace std;

int main()
{
    // Student Information
    const char studentName[] = "Zainab Akbar";
    const long long studentID = 250433945;

    cout << studentName << endl;
    cout << "BC" << studentID << endl;

    // Extract last five digits of Student ID
    int digits[5];
    long long temp = studentID;

    for (int i = 4; i >= 0; i--)
    {
        digits[i] = temp % 10;
        temp = temp / 10;
    }

    // Variables for daily totals
    int totalPages = 0;
    double totalOriginalCost = 0;
    double totalDiscount = 0;
    double totalFinalCost = 0;

    cout << endl;
    cout << "===== DAILY BILLING REPORT =====" << endl;

    // Process five orders
    for (int i = 0; i < 5; i++)
    {
        int pages = digits[i] * 10;
        int rate;
        double discount;

        // Determine printing type and rate
        if (i < 3)
        {
            rate = 5;
        }
        else
        {
            rate = 15;
        }

        // Calculate original cost
        int originalCost = pages * rate;

        // Calculate discount
        if (pages >= 50)
        {
            discount = originalCost * 0.10;
        }
        else
        {
            discount = 0;
        }

        // Calculate final cost
        double finalCost = originalCost - discount;

        // Display order information
        cout << endl;
        cout << "Order " << i + 1 << endl;
        cout << "Pages: " << pages << endl;

        if (i < 3)
        {
            cout << "Printing Type: Black & White" << endl;
        }
        else
        {
            cout << "Printing Type: Color" << endl;
        }

        cout << "Original Cost: Rs. " << originalCost << endl;
        cout << "Discount: Rs. " << discount << endl;
        cout << "Final Cost: Rs. " << finalCost << endl;

        // Update totals
        totalPages = totalPages + pages;
        totalOriginalCost = totalOriginalCost + originalCost;
        totalDiscount = totalDiscount + discount;
        totalFinalCost = totalFinalCost + finalCost;
    }

    // Display final daily report
    cout << endl;
    cout << "===== FINAL DAILY REPORT =====" << endl;
    cout << "Total Pages Printed: " << totalPages << endl;
    cout << "Total Original Cost: Rs. " << totalOriginalCost << endl;
    cout << "Total Discount: Rs. " << totalDiscount << endl;
    cout << "Final Amount Collected: Rs. " << totalFinalCost << endl;

    // Determine activity status
    cout << "Activity Status: ";

    if (totalFinalCost < 1000)
    {
        cout << "LOW ACTIVITY" << endl;
    }
    else if (totalFinalCost < 2500)
    {
        cout << "NORMAL ACTIVITY" << endl;
    }
    else
    {
        cout << "HIGH ACTIVITY" << endl;
    }

    return 0;
}