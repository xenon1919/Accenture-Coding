#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the latest version
int findLatestVersion(const vector<string>& files) {
    int latestVersion = -1;

    for (const string& file : files) {
        if (file.substr(0, 5) == "file_") {
            int version = stoi(file.substr(5));
            if (version > latestVersion) {
                latestVersion = version;
            }
        }
    }

    return latestVersion;
}

int main() {
    vector<string> files = {"file_1", "file_3", "document_1", "file_2"};
    int latestVersion = findLatestVersion(files);

    if (latestVersion != -1) {
        cout << "The latest version is: " << latestVersion << endl; // Output: 3
    } else {
        cout << "No valid file found." << endl;
    }

    return 0;
}
