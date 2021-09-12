#include <iostream>
using namespace std;

//Character counting function
int symbol(int w, int h){
    int symbol = (w + h) * 2 - 4;
    return symbol;
}

int main(){
    int width;
    int height;
    cout << "Box drawer - By Danblaze" << endl << "Version 1.0.1" << endl << endl;
    bool in_state = false;
    while(in_state == false){
        cout << "Enter number of width (Minimium: 3): "; cin >> width; cout << endl;
        cout << "Enter number of height (Minimium: 3): "; cin >> height; cout << endl;
        //Pre-processor
        if(width >= 3){
            if(height >= 3){
                in_state = true;
            }
            else {
                cout << endl << "Input error! Please try again!" << endl;
            }
        }
        else {
            cout << endl << "Input error! Please try again!" << endl;
        }        
    }
    cout << endl << "Drawing..." << endl << endl;
    //Master function: Drawer
    for(int w = 0; w < width; w ++){
        cout << "* ";
    }
    cout << endl;
    for(int h = 0; h < height - 2; h ++){
        cout << "* ";
        for(int space = 0; space < width - 2; space ++){
            cout << "  ";
        }
        cout << "* " << endl;
    }
    for(int w = 0; w < width; w ++){
        cout << "* ";
    }
    cout << endl << endl << "The box has been drawn by " << symbol(width, height) << " characters" << endl << endl;
    int done;
    cout << "Press Enter to exit...";
    cin >> done;
    return 0;
}
