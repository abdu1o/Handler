#include <iostream>
#include <vector>
using namespace std;

#include "Handler.h"
#include "ConcreateHandlers.h"

void Client(Handler& handler)
{
    vector<string> requests = { "Light on [1]", "Light off [2]", 
                    "Conditioner on [3]", "Conditioner off [4]",
                    "Music player on [5]", "Music player off [6]",
                    "Exit [0]" };

    cout << "Choose option: " << endl;

    for (const string& i : requests) 
    {
        cout << i << endl;
    }

    string result;
    int input;
    cin >> input;

    switch (input)
    {
    case 0:
        system("cls");
        system("exit");
        break;

    case 1:
        result = handler.Handle("Light on");
        cout << result << endl;
        break;

    case 2:
        result = handler.Handle("Light off");
        cout << result << endl;
        break;

    case 3:
        result = handler.Handle("Conditioner on");
        cout << result << endl;
        break;

    case 4:
        result = handler.Handle("Conditioner off");
        cout << result << endl;
        break;

    case 5:
        result = handler.Handle("Music player on");
        cout << result << endl;
        break;

    case 6:
        result = handler.Handle("Music player off");
        cout << result << endl;
        break;

    default:
        system("cls");
        Client(handler);
        break;
    }
            
}

int main() 
{
    Light* light = new Light;
    Conditioner* conditioner = new Conditioner;
    MusicPlayer* player = new MusicPlayer;

    light->SetNext(conditioner)->SetNext(player);

    cout << "Chain: Light > Conditioner > Music Player\n\n";
    Client(*light);
    cout << "\n";

    delete light;
    delete conditioner;
    delete player;
}