#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <chrono>
#include <windows.h>
#include <conio.h>

using namespace std;

// Function to generate and display random ASCII art image
void generateRandomAsciiArt() {
    // ASCII art image
    cout << " _______             __                                            ________                      __        __    __  __    __     " << endl;
    cout << "/       \\           /  |                                          /        |                    /  |      /  |  /  |/  |  /  |    " << endl;
    cout << "$$$$$$$  |  ______  $$ |   __   ______    ______    _______       $$$$$$$$/   ______    ______  $$ |      $$ | /$$/ $$/  _$$ |_   " << endl;
    cout << "$$ |__$$ | /      \\ $$ |  /  | /      \\  /      \\  /       |         $$ |    /      \\  /      \\ $$ |      $$ |/$$/  /  |/ $$   |  " << endl;
    cout << "$$    $$<  $$$$$$  |$$ |_/$$/ /$$$$$$  |/$$$$$$  |/$$$$$$$/          $$ |   /$$$$$$  |/$$$$$$  |$$ |      $$$$$  \\  $$ |$$$$$$/   " << endl;
    cout << "$$$$$$$  | /    $$ |$$   $$<  $$    $$ |$$ |  $$/ $$      \\          $$ |   $$ |  $$ |$$ |  $$ |$$ |      $$  $$<   $$ |  $$ | __ " << endl;
    cout << "$$ |__$$ |/$$$$$$$ |$$$$$$  \\ $$$$$$$$/ $$ |       $$$$$$  |         $$ |   $$ \\__$$ |$$ \\__$$ |$$ |      $$ |$$  \\  $$ |  $$|/  |" << endl;
    cout << "$$    $$/ $$    $$ |$$ | $$  |$$       |$$ |      /     $$/          $$ |   $$    $$/ $$    $$/ $$ |      $$ | $$  |$$ |  $$  $$/ " << endl;
    cout << "$$$$$$$/   $$$$$$$/ $$/   $$/  $$$$$$$/ $$/       $$$$$$$/           $$/     $$$$$$/   $$$$$$/  $$/       $$/   $$/ $$/    $$$$/" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

// Function to display colorful ASCII art animation for VirusScan
void displayVirusScan(int virusesFound) {
    cout << "\Scanning for viruses...\n";
    cout << "\This Could Take Up To 5 Min To Complete So Please Dont Close Until Complete\n";

    int progress = 0;
    while (progress <= 100) {
        cout << "Progress: [" << progress << "%]\r";
        this_thread::sleep_for(chrono::seconds(1)); // Simulate scanning progress
        progress += 1; // Increment progress by 1% per second
    }

    cout << "\mScan complete! ";
    if (virusesFound == 0)
        cout << "\4 viruses found and removed.\n";
    else
        cout << virusesFound << "\viruses found and removed.\n"; // Set text color to red for viruses found
}

// Function to display colorful ASCII art animation for other pranks
void displayAsciiArt(const string& animation) {
    if (animation == "VirusScan") {
        displayVirusScan(0);
    }
    else if (animation == "Update") {
        cout << "Downloading update...\n";
        for (int i = 0; i < 20; ++i) {
            cout << "Downloading: [" << i * 5 << "%]\r";
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        cout << "Download complete!\n";
        SetConsoleTitleW(L"Bakers Tool Kit Update Installing...");
        cout << "Installing update...\n";
        for (int i = 0; i < 20; ++i) {
            cout << "Installing: [" << i * 5 << "%]\r";
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        cout << "Installation complete!\n";
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << "Update complete!\n";
    }
    else if (animation == "BlueScreen") {
        cout << "Are You Sure You Want To Do This? Close The Console NOW To Stop It This Will Not Affect Your Files\n";
        this_thread::sleep_for(chrono::milliseconds(6500));
        cout << "Your computer has encountered a problem and needs to restart.\n";
        cout << "Technical information:\n";
        cout << "*** STOP: 0x0000DEAD (0x00000000, 0x00000000, 0x00000000, 0x00000000)\n";
        cout << "Please wait while your computer is being restarted...\n";

        // Create and run the batch file
        ofstream batFile("bsod.bat");
        if (batFile.is_open()) {
            batFile << "@echo off\n";
            batFile << "(\n";
            batFile << "echo ^<html^>^<head^>^<title^>Microsoft Windows^</title^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<hta:application id=\"oBVC\"\n";
            batFile << "echo applicationname=\"BSOD\"\n";
            batFile << "echo version=\"1.0\"\n";
            batFile << "echo maximizebutton=\"no\"\n";
            batFile << "echo minimizebutton=\"no\"\n";
            batFile << "echo sysmenu=\"no\"\n";
            batFile << "echo Caption=\"no\"\n";
            batFile << "echo windowstate=\"maximize\"/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^</head^>^<body bgcolor=\"#000088\" scroll=\"no\"/^>\n";
            batFile << "echo ^<font face=\"Lucida Console\" size=\"4\" color=\"white\"/^>\n";
            batFile << "echo ^<p/^>A problem has been detected and windows has been shutdown to prevent damage to your computer.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>DRIVER_IRQL_NOT_LES_OR_EQUAL^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>If this is the first time you've seen this stop error screen, restart your computer, If this screen appears again, follow these steps:^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>Check to make sure any new hardware or software is properly installed. If this is a new installation, ask your hardware or software manufacturer for any windows updates you might need.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>If problems continue, disable or remove any newly installed hardware or software. Disable BIOS memory options such as caching or shadowing. If you need to use Safe Mode to remove or disable components, restart your computer, press F8 to select Advanced Startup Options, and then select Safe Mode.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>Technical information:^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>*** STOP: 0x00D1 ^(0x00C,0x002,0x00,0xF86B5A89^)^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>***  gv3.sys - Address F86B5A89 base at F86B5000, DateStamp 3dd9919eb^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>Beginning dump of physical memory^</p/^>\n";
            batFile << "echo ^<p/^>Physical memory dump complete.^</p/^>\n";
            batFile << "echo ^<p/^>Contact your system administrator or technical support group for further assistance.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo.\n";
            batFile << "echo ^</font^>\n";
            batFile << "echo ^</body^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<script language=\"javascript\"/^>\n";
            batFile << "echo function noClick^(^) {\n";
            batFile << "echo if ^(^(event.button==1^)^|^|^(event.button==2^)^) {\n";
            batFile << "echo alert^('Error: 00101100x00100100 missing keymgr.dll'^)\n";
            batFile << "echo }\n";
            batFile << "echo }\n";
            batFile << "echo document.onmousedown=noClick\n";
            batFile << "echo ^</script^>\n";
            batFile << "echo.\n";
            batFile << "echo ^</html^>\n";
            batFile << ") > bsod.hta\n";
            batFile << "start \"\" /wait \"bsod.hta\"\n";
            batFile << "del /f /q \"bsod.hta\" > nul\n";
            batFile << "@echo off\n";
            batFile << "(\n";
            batFile << "echo ^<html^>^<head^>^<title^>Microsoft Windows^</title^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<hta:application id=\"oBVC\"\n";
            batFile << "echo applicationname=\"BSOD\"\n";
            batFile << "echo version=\"1.0\"\n";
            batFile << "echo maximizebutton=\"no\"\n";
            batFile << "echo minimizebutton=\"no\"\n";
            batFile << "echo sysmenu=\"no\"\n";
            batFile << "echo Caption=\"no\"\n";
            batFile << "echo windowstate=\"maximize\"/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^</head^>^<body bgcolor=\"#000088\" scroll=\"no\"/^>\n";
            batFile << "echo ^<font face=\"Lucida Console\" size=\"4\" color=\"white\"/^>\n";
            batFile << "echo ^<p/^>A problem has been detected and windows has been shutdown to prevent damage to your computer.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>DRIVER_IRQL_NOT_LES_OR_EQUAL^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>If this is the first time you've seen this stop error screen, restart your computer, If this screen appears again, follow these steps:^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>Check to make sure any new hardware or software is properly installed. If this is a new installation, ask your hardware or software manufacturer for any windows updates you might need.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>If problems continue, disable or remove any newly installed hardware or software. Disable BIOS memory options such as caching or shadowing. If you need to use Safe Mode to remove or disable components, restart your computer, press F8 to select Advanced Startup Options, and then select Safe Mode.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>Technical information:^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>*** STOP: 0x00D1 ^(0x00C,0x002,0x00,0xF86B5A89^)^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>***  gv3.sys - Address F86B5A89 base at F86B5000, DateStamp 3dd9919eb^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<p/^>Beginning dump of physical memory^</p/^>\n";
            batFile << "echo ^<p/^>Physical memory dump complete.^</p/^>\n";
            batFile << "echo ^<p/^>Contact your system administrator or technical support group for further assistance.^</p/^>\n";
            batFile << "echo.\n";
            batFile << "echo.\n";
            batFile << "echo ^</font^>\n";
            batFile << "echo ^</body^>\n";
            batFile << "echo.\n";
            batFile << "echo ^<script language=\"javascript\"/^>\n";
            batFile << "echo function noClick^(^) {\n";
            batFile << "echo if ^(^(event.button==1^)^|^|^(event.button==2^)^) {\n";
            batFile << "echo alert^('Error: 00101100x00100100 missing keymgr.dll'^)\n";
            batFile << "echo }\n";
            batFile << "echo }\n";
            batFile << "echo document.onmousedown=noClick\n";
            batFile << "echo ^</script^>\n";
            batFile << "echo.\n";
            batFile << "echo ^</html^>\n";
            batFile << ") > bsod.hta\n";
            batFile << "start \"\" /wait \"bsod.hta\"\n";
            batFile << "del /f /q \"bsod.hta\" > nul\n";
            batFile.close();
            system("bsod.bat"); // Execute the batch file
        }
        else {
            cerr << "Error: Unable to create batch file!\n";
        }
    }
}

int main() {
    // Set the console window title
    SetConsoleTitleW(L"Bakers Tool Kit Main Menu");

    // Display ASCII art image
    generateRandomAsciiArt();

    // Display the main menu
    cout << "Choose a Option:\n";
    cout << "1. Virus Scan\n";
    cout << "2. Update\n";
    cout << "3. Blue Screen of Death\n";
    cout << "4. Exit\n";

    // Get user input
    char choice;
    do {
        choice = _getch();
    } while (choice < '1' || choice > '4');

    // Perform the selected prank
    switch (choice) {
    case '1':
        SetConsoleTitleW(L"Bakers Tool Kit Virus Scan Running...");
        displayAsciiArt("VirusScan");
        SetConsoleTitleW(L"Bakers Tool Kit Virus Scan Done!");
        this_thread::sleep_for(chrono::milliseconds(5000));
        break;
    case '2':
        SetConsoleTitleW(L"Bakers Tool Kit Update Downloading...");
        displayAsciiArt("Update");
        SetConsoleTitleW(L"Bakers Tool Kit Update Done!");
        this_thread::sleep_for(chrono::milliseconds(5000));
        break;
    case '3':
        SetConsoleTitleW(L"Bakers Tool Kit Virus Scan This Will Restart Yout PC!!");
        displayAsciiArt("BlueScreen");
        break;
    case '4':
        cout << "Exiting...\n";
        break;
    }

    return 0;
}
