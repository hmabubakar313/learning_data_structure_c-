#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>
using namespace std;
int main()
{
    ofstream outfile;
    outfile.open("testfile.txt");
    outfile<<"Hello World !" <<endl;
    outfile.close();
    return 0;
}