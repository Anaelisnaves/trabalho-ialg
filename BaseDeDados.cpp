#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream original_file("BaseDeDados.txt", ios::in);
    ofstream temp_file("temp.bin", ios::out | ios::binary);

    if (!original_file.is_open() || !temp_file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    char c;
    while (original_file.get(c)) {
        temp_file.write(&c, sizeof(c));
    }

    original_file.close();
    temp_file.close();

    remove("BaseDeDados.txt");
    rename("temp.bin", "data.txt");

    return 0;
}
