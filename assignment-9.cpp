//Q1: Write numbers 1 to 200 in NUM.TXT
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("NUM.TXT");

    for(int i = 1; i <= 200; i++) {
        fout << i << " ";
    }

    fout.close();
    cout << "Numbers written successfully.";
    return 0;
}

//Q2. Count alphabets in NOTES.TXT
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

void countAlphabets() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while(fin.get(ch)) {
        if(isalpha(ch))
            count++;
    }

    fin.close();
    cout << "Total alphabets: " << count;
}

int main() {
    countAlphabets();
    return 0;
}

//Binary File (Write & Read Object)
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];

    void input() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s;

    ofstream fout("student.dat", ios::binary);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));
    s.display();
    fin.close();

    return 0;
}

//Q4. Copy contents of one file to another
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    char ch;
    while(fin.get(ch)) {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout << "File copied successfully.";
    return 0;
}

//Q5. String I/O + File Handling
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    cout << "Length: " << strlen(str) << endl;

    ofstream fout("string.txt");
    fout << str;
    fout.close();

    ifstream fin("string.txt");
    char ch;
    cout << "File content: ";
    while(fin.get(ch)) {
        cout << ch;
    }

    fin.close();
    return 0;
}

//Q6. File Pointer Operations : (a) Create A-Z and read 10th character
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("alpha.txt");
    for(char ch = 'A'; ch <= 'Z'; ch++)
        fout << ch;
    fout.close();

    ifstream fin("alpha.txt");
    fin.seekg(9); // 10th character (index 9)
    char ch;
    fin.get(ch);

    cout << "10th character: " << ch;
    fin.close();
    return 0;
}


//(b) Overwrite 5th character using seekp()
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("alpha.txt", ios::in | ios::out);

    file.seekp(4); // 5th position
    file.put('X');

    file.close();
    cout << "Character overwritten.";
    return 0;
}

//(c) Find file size using tellg()
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("alpha.txt", ios::binary);

    fin.seekg(0, ios::end);
    cout << "File size: " << fin.tellg() << " bytes";

    fin.close();
    return 0;
}

//(d) Read last character
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("alpha.txt");

    fin.seekg(-1, ios::end);
    char ch;
    fin.get(ch);

    cout << "Last character: " << ch;

    fin.close();
    return 0;
}

//(e) data.txt operations
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");
    fout << "This is a sample file with multiple lines.\nHello World!";
    fout.close();

    ifstream fin("data.txt");

    fin.seekg(10); // move to 10th byte
    cout << "Position: " << fin.tellg() << endl;

    char ch;
    while(fin.get(ch))
        cout << ch;

    fin.close();
    return 0;
}

//(f) HelloWorld + tellp() + replace
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("hello.txt", ios::out | ios::in);

    string str = "HelloWorld";

    // Write and show position
    for(int i = 0; i < str.length(); i++) {
        file.put(str[i]);
        cout << "Position: " << file.tellp() << endl;
    }

    // Replace "World" with "C++"
    file.seekp(5);
    file << "C++  "; // spaces to overwrite properly

    file.seekg(0);
    char ch;
    cout << "\nUpdated content: ";
    while(file.get(ch))
        cout << ch;

    file.close();
    return 0;
}
