#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Organizer
{
private:
const static int ROWS = 20;
const static int COLS = 2;
string passwordFile[ROWS][COLS];
public:
void readFile(string passwordFile[][COLS]);
};


void Organizer::readFile(string passwordFile[][COLS]) {
ifstream ifs;
ifs.open("UsermanesCIS375.xlsx");
if (!ifs.is_open()) {
cerr << "unable to open UsermanesCIS375.xlsx" << endl;
}
int perNum = 0;
string userName, password;
while (!ifs.eof()) {
ifs >> userName >> password;
passwordFile[perNum - 1][0] = userName;
passwordFile[perNum - 1][1] = password;
perNum = perNum + 1;
}
}
