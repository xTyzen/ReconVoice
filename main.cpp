#include <iostream>
#include <string>
#include <windows.h> 

std::string audio;
std::string output;


int choice = 0;

int debut() {
    std::cout << "    ____                      _    __      _           ______         \n";
    std::cout << "   / __ \\___  _________  ____| |  / /___  (_)_______  / ____/__    __ \n";
    std::cout << "  / /_/ / _ \\/ ___/ __ \\/ __ \\ | / / __ \\/ / ___/ _ \\/ /  __/ /___/ /_\n";
    std::cout << " / _, _/  __/ /__/ /_/ / / / / |/ / /_/ / / /__/  __/ /__/_  __/_  __/\n";
    std::cout << "/_/ |_|\\___/\\___/\\____/_/ /_/|___/\\____/_/\\___/\\___/\\____//_/   /_/   \n";
    std::cout << "                                                                      \n";

    return 0;
}

int FR()
{
    std::string command;
    std::string dir = "Langages/fr-FR";
    std::cout << "\nPlease insert the audio file in .wav extention : ";
    std::cin >> audio;
    std::cout << "\nPlease indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string FRANCE = "python FR.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d " + dir + " && " + FRANCE;
    system(fullCommand.c_str());

    return 0;
}

int EN()
{
    std::string command;
    std::string dir = "Langages/en-EN";
    std::cout << "\nPlease insert the audio file in .wav extention : ";
    std::cin >> audio;
    std::cout << "\nPlease indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string ENGLISH = "python EN.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d " + dir + " && " + ENGLISH;
    system(fullCommand.c_str());

    return 0;
}

int ES()
{
    std::string command;
    std::string dir = "Langages/es-ES";
    std::cout << "\nPlease insert the audio file in .wav extention : ";
    std::cin >> audio;
    std::cout << "\nPlease indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string ESPAGNE = "python ES.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d " + dir + " && " + ESPAGNE;
    system(fullCommand.c_str());

    return 0;
}  

int DE()
{
    std::string command;
    std::string dir = "Langages/de-DE";
    std::cout << "\nPlease insert the audio file in .wav extention  : ";
    std::cin >> audio;
    std::cout << "\nPlease indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string DEUTCH = "python DE.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d " + dir + " && " + DEUTCH;
    system(fullCommand.c_str());

    return 0;
}

int IT()
{
    std::string command;
    std::string dir = "Langages/it-IT";
    std::cout << "\nPlease insert the audio file in .wav extention : ";
    std::cin >> audio;
    std::cout << "\nPlease indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string ITALIAN = "python IT.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d " + dir + " && " + ITALIAN;
    system(fullCommand.c_str());

    return 0;
}

int PT()
{
    std::string command;
    std::string dir = "Langages/pt-PT";
    std::cout << "\nPlease insert the audio file in .wav extention : ";
    std::cin >> audio;
    std::cout << "\nPlease indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string PORTUGAL = "python PT.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d " + dir + " && " + PORTUGAL;
    system(fullCommand.c_str());

    return 0;
}

int RU()
{
    std::string command;
    std::string dir = "Languages/ru-RU";
    std::cout << "\nPlease insert the audio file in .wav extention : ";
    std::cin >> audio;
    std::cout << "\n Please indicate the path and name of the outgoing .txt extention file : ";
    std::cin >> output;

    std::string RUSSIAN = "python RU.py -a \"" + audio + "\" -o \"" + output + "\"";

    std::string fullCommand = "cd /d" + dir " && " + RUSSIAN;
    system(fullCommand.c_str());
    
    return 0;
}
int main()
{
    system("cls");
    debut();
    std::cout << "\n";
    std::cout << "Please choose the language to extract audio..." << std::endl;
    std::cout << "1. French" << std::endl;
    std::cout << "2. English" << std::endl;
    std::cout << "3. Spanish" << std::endl;
    std::cout << "4. German" << std::endl;
    std::cout << "5. Italian" << std::endl;
    std::cout << "6. Portuguese" << std::endl;
    std::cout << "7. Russian" << std::endl; 
    std::cout << "Please choose : ";
    std::cin >> choice;

    if (choice == 1)
    {
        FR();
    }
    else if (choice == 2)
    {
        EN();
    }
    else if (choice == 3)
    {
        ES();
    }
    else if (choice == 4)
    {
        DE();
    }
    else if (choice == 5)
    {
        IT();
    }
    else if (choice == 6)
    {
        PT();
    }
    else if (choice == 7)
    {
        RU();
    }

    return 0;
    std::cin.ignore();
}

