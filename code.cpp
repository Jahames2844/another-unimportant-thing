#include <iostream>
#include <string>
using namespace std;

int main()
{
    string MemberName;
    int age;
    float weight;
    int AttendedWorkoutSessions;

    cout << "What is your Name?\n";
    cin >> MemberName;
    
    cout << "How old are you?\n";
        if (cin >> age) {cout << "valid age.\n";
        } git else {cout << "Invalid age."; return 1;}
    cin >> age;

    cout << "How much do you weigh?\n";
        if (cin >> weight) {cout << "Valid weight.\n";
        } else {cout << "Invalid weight.\n"; return 1; }
    cin >> weight;

    cout << "How many work out sessions have you attended\n";
    if (cin >> AttendedWorkoutSessions) {cout << "valid Sessions.\n";
    } else {cout << "Invalid sessions."; return 1;}
    cin >> AttendedWorkoutSessions;

    float Fitness_Score = (AttendedWorkoutSessions * 5) + (100 - weight);

    bool Eligible = (Fitness_Score >=50 && age >= 16);
    bool VIP_status = (Fitness_Score >= 80 || AttendedWorkoutSessions >= 20);
    bool NotUnfit = !(Fitness_Score <50);

    cout << "Member " << MemberName << ".\n";
    cout << "Fitness Score " << Fitness_Score << "\n.";
    cout << "Eligible for membership " << (Eligible ? "Yes" : "No") << "\n";
    cout << "VIP Status " << (VIP_status ? "true" : "False") << ".\n";
    cout << "Fit " << (NotUnfit ? "true" : "False") << "\n";

    return 0;
}