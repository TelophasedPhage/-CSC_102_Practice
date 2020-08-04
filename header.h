#pragma once
#include<iostream>
#include<string>
#include<fstream>

class dictionary{
    private:
        string defFile;
        string synFile;
        string antFile;
    public:
        word(string inStrFile, string inDefFile, string inSynFile, string inAntFile);
        string searchWordParse(string word, ifstream file);
        void printWordInfo(string word, string whatInfo);

}
