#include <iostream>
using namespace std;

int main() {
	// Variable
	int totalTime = 1440; // 24 Hours in minutes

	int sleep = 420;      // 7 hours in minutes
	int classes = 120;    // 2 hours in minutes
	int study = 180;      // 3 hours in minutes
	int eat = 90;         // 1.5 hours in minutes
	int gym = 75;         // 1 hour in minutes
	int activities = 120; // 2 hours in minutes
	int fun = 180;        // 3 hours in minutes
	int other = 120;      // 2 hours in minutes
	// Total: 24 hours

	// Total time spent
	int timeSpent = sleep + classes + study + eat + gym + activities + fun + other; // Total Time
	int productiveTime = classes + study + gym; // Productive Time
	int freeTime = eat + activities + fun; // Fun Time!

	int remainingTime = totalTime - timeSpent; // remaining time left 

	// Convert to hours and minutes
	int sleepHours = sleep / 60, sleepMinutes = sleep % 60;
	int classesHours = classes / 60, classesMinutes = classes % 60;
	int studyHours = study / 60, studyMinutes = study % 60;
	int eatHours = eat / 60, eatMinutes = eat % 60;
	int gymHours = gym / 60, gymMinutes = gym % 60;
	int activitiesHours = activities / 60, activitiesMinutes = activities % 60;
	int funHours = fun / 60, funMinutes = fun % 60;
	int otherHours = other / 60, otherMinutes = other % 60;

	// Total Conversion
	int timeSpentHours = timeSpent / 60, timeSpentMinutes = timeSpent % 60;
	int productiveTimeHours = productiveTime / 60, productiveTimeMinutes = productiveTime % 60;
	int freeTimeHours = freeTime / 60, freeTimeMinutes = freeTime % 60;
	int remainingTimeHours = remainingTime / 60, remainingTimeMinutes = remainingTime % 60;

	// Productive Precentage
	double productivePercentage = (productiveTime / 1440.0) * 100;

	// Output
	cout << "\t\t\t\t\t\tDaily Time Management Breakdown:\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";

	cout << "Activity\t\t\t\tHours\t\t\t\tMinutes\n";
	cout << endl;
	// Table of Variables
	cout << "Sleep\t\t\t\t\t" << sleepHours << "\t\t\t\t" << sleepMinutes << "\n";
	cout << "Classes\t\t\t\t\t" << classesHours << "\t\t\t\t" << classesMinutes << "\n";
	cout << "Study\t\t\t\t\t" << studyHours << "\t\t\t\t" << studyMinutes << "\n";
	cout << "Eat\t\t\t\t\t" << eatHours << "\t\t\t\t" << eatMinutes << "\n";
	cout << "Gym\t\t\t\t\t" << gymHours << "\t\t\t\t" << gymMinutes << "\n";
	cout << "Activities\t\t\t\t" << activitiesHours << "\t\t\t\t" << activitiesMinutes << "\n";
	cout << "Fun\t\t\t\t\t" << funHours << "\t\t\t\t" << funMinutes << "\n";
	cout << "Other\t\t\t\t\t" << otherHours << "\t\t\t\t" << otherMinutes << "\n";

	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << endl;
	// Total Time Spent
	cout << "Total Time Spent\t\t\t" << timeSpentHours << "\t\t\t\t" << timeSpentMinutes << "\n";
	cout << "Productive Time\t\t\t\t" << productiveTimeHours << "\t\t\t\t" << productiveTimeMinutes << "\n";
	cout << "Free Time\t\t\t\t" << freeTimeHours << "\t\t\t\t" << freeTimeMinutes << "\n";
	cout << "Remaining Time\t\t\t\t" << remainingTimeHours << "\t\t\t\t" << remainingTimeMinutes << "\n";

	cout << endl;
	// Productive Percentage
	cout << "Productive Percentage: " << productivePercentage << "%\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << endl;
	// Final Message
	cout << "Congrats! You have used " << productivePercentage << "% of your day productively!\n";
	cout << "Keep up the good work and make sure to balance your time well!\n";
	return 0;


}