// Practice 1
// Josh T
// Version 1.0.4 uploaded to github on 8-31-21

#include <iostream>

using namespace std;
int main()
{
    int NumberOfFolders, FilesPerFolder, TotalFiles;

    cout << "Press retern after entering a number. \n";
    cout << "Enter the number of Folders: \n";
    cin >> NumberOfFolders;
    cout << "Enter the number of files per folder. \n";
    cin >> FilesPerFolder;
    TotalFiles = NumberOfFolders*FilesPerFolder;
    cout << "If you have " << NumberOfFolders << " folders and " << FilesPerFolder 
        << " files in each folder, then you have " << TotalFiles << " in all the folders. \n";

    return 0;

}