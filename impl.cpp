    #include"header.h"

dictionary::dictionary(string inDefFile, string inSynFile, string inAntFile){
    defFile = inDefFile;
    synFile = inSynFile;
    antFile = inAntFile;
};

string dictionary::searchWordParse(string word, ifstream file){
    
    return "";
};

void dictionary::printWordInfo(string word, int infoCall){
    ifstream inFile;
    bool sentinel;
    do {
    sentinel = false;
    switch (infoCall)
    {
    case (0)
        inFile.open("defFile");
        break;
    case (1)
        inFile.open("synFile");
        break;
    case (2)
        inFile.open("antFile");
        break;
    default:
        cout << "Error (Wrong Choice, Try Again)"
        sentinel = true;
        break;
    }
        if(!inFile && !sentinel){
            cout << "Warning! File #" << infoCall << " is NOT PRESENT.";
        }
    } while(sentinel);

    searchWordParse(word, inFile);
    inFile.close()

}