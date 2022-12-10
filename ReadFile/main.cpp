#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("scores.txt");
    int score;

    for(int i=0;i<5;i++){
        fin >>score;
        cout<<"The score is "<<score<<endl;
    }

    while(fin >> score){
        // no sirve
        //cout<<"The score is "<<score<<endl;
    }


    return 0;
}
