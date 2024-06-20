#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class FileManager{
public:
    void writeToFile(const string& fileName, const string& data){
        ofstream outFile(fileName);
        if(outFile.is_open()){
            cout<<data<<" ";
            outFile.close();

            cout<<"Data written to successfully in the file"<<endl;
        }
        else{
            cout<<"Unable to open the file for writing"<<endl;
        }
    }

    string readFromFile(const string& fileName){
        ifstream inFile(fileName);
        string data;

        if(inFile.is_open()){
            getline(inFile, data);
            inFile.close();
            cout<<"Data read from file: "<<data<<endl;
        }else{
            cout<<"Unable to open the file for reading"<<endl;
        }

        return data;
    }

};

int main(){
    FileManager manager;

    // write the data to a file
    manager.writeToFile("data.txt", "Hello World!");

    // Reading the data from a file

    string filedata = manager.readFromFile("data.txt");

    return 0;
}