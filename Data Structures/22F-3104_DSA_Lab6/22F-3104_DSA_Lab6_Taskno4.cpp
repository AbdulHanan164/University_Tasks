//#include <iostream>
//#include <windows.h>
//using namespace std;
//struct Process {
//    int processID;
//    int executionTime;
//    Process(){
//        processID = 1;
//        executionTime = 2;
//    }
//    Process(int id, int time) 
//         {
//            processID = id;
//            executionTime = time;
//        }
//};
//int main() {
//    const int MAX_PROCESSES = 100; // Maximum number of processes adjust as needed
//    Process processes[MAX_PROCESSES];
//    int numProcesses = 0;
//    int processID, executionTime;
//    // Input processes until the user enters a sentinel value
//    while (true) {
//        cout << "Enter Process ID or enter -1 to exit: ";
//        cin >> processID;
//
//        if (processID == -1) {
//            break;
//        }
//        cout << "Enter Execution Time in seconds for Process " << processID << ": ";
//        cin >> executionTime;
//
//        processes[numProcesses++] = Process(processID, executionTime);
//    }
//    int timeQuantum;
//    cout << "Enter the time quantum for Round Robin scheduling: ";
//    cin >> timeQuantum;
//    // Round Robin scheduling
//    int currentIndex = 0;
//    while (currentIndex < numProcesses) {
//        int remainingTime = processes[currentIndex].executionTime;
//        if (remainingTime <= timeQuantum) {
//            // Execute the process for its remaining time
//            cout << "Executing Process " << processes[currentIndex].processID << " for " << remainingTime << " seconds." << endl;
//            Sleep(remainingTime * 1000); // Sleep in milliseconds
//            currentIndex++;
//        }
//        else {
//            // Execute the process for a time quantum
//            cout << "Executing Process " << processes[currentIndex].processID << " for " << timeQuantum << " seconds." << endl;
//            Sleep(timeQuantum * 1000); // Sleep in milliseconds
//            processes[currentIndex].executionTime -= timeQuantum;
//            currentIndex = (currentIndex + 1) % numProcesses; // Move to the next process in a circular manner
//        }
//    }
//    cout << "All processes have been executed." << endl;
//    return 0;
//}
