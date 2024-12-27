#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string command;
  while (true) {
    cout << "Enter command (ls, create, delete, exit): ";
    cin >> command;

    if (command == "ls") {
      // List files in current directory
      vector<string> files;
      string filename;
      ifstream filelist("dir.txt");
      while (getline(filelist, filename)) {
        files.push_back(filename);
      }
      filelist.close();

      cout << "Files in current directory:\n";
      for (string file : files) {
        cout << file << endl;
      }
    } else if (command == "create") {
      // Create a new file
      string filename;
      cout << "Enter filename: ";
      cin >> filename;
      ofstream newfile(filename);
      newfile.close();
      // Update dir.txt
      ofstream dirlist("dir.txt", ios::app);
      dirlist << filename << endl;
      dirlist.close();
      cout << "File '" << filename << "' created.\n";
    } else if (command == "delete") {
      // Delete a file
      string filename;
      cout << "Enter filename: ";
      cin >> filename;
      remove(filename.c_str());
      // Update dir.txt
      vector<string> files;
      string temp;
      ifstream filelist("dir.txt");
      while (getline(filelist, temp)) {
        files.push_back(temp);
      }
      filelist.close();
      ofstream dirlist("dir.txt");
      for (string file : files) {
        if (file != filename) {
          dirlist << file << endl;
        }
      }
      dirlist.close();
      cout << "File '" << filename << "' deleted.\n";
    } else if (command == "exit") {
      break;
    } else {
      cout << "Invalid command.\n";
    }
  }
  return 0;
}