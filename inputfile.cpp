#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>
#include <vector>
using namespace std;
void openInputFile(ifstream& inFile )
{
    string filename;
    cout<<"What is Filename\n";
    cin>>filename;
    inFile.open(filename);
    while(!inFile)
    {
        cout<<"File Failed to open \n";
        cout<<"What is Filename\n";
        inFile.open(filename);
        inFile.clear();
        inFile.open(filename);
    }
}
int main()
{
    ifstream inFile;
    openInputFile(inFile);
    vector <int> v;
    int temp;
    while(inFile>>temp)
    {
        v.push_back(temp);
    }
    double sum=0;
    for (int item:v)
        sum+=item;
        cout<<"The average of the integer is in file is : "<< sum / v.size()<< endl;
  return 0;
}