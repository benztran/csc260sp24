#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Invalid arguments!";
        return 1;
    }

    string name = argv[1];
    int age = atoi(argv[2]);

    cout << name << " is " << age << " years old.";

    return 0;
}
