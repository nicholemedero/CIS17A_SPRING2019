#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "Plants.h" //*base class & template class
#include "Angiosperms.h" //*derived class of plants class
#include "Gymnosperms.h"//*derived class of plants class
#include "Family.h" //*derived class of angiosperms class
#include "Genus.h" //*derived class of gymnosperms class

using namespace std;

/* Main Menu Prototypes*/
void menu();
void definitions();
void aboutProg();
void plants();

int main(int argc, char** argv) {
    
    menu();
            
    //Exit
    return 0;
}

void menu() {
    int choice;
    cout<<"This program provides detailed information on plant hierarchies."<<endl;
    cout<<"Enter the proper integer to navigate the program.";
    cout<<"\t **MAIN MENU**"<<endl;
    cout<<"Please select a number to navigate through the program's menu."<<endl;
    cout<<"1 \t Plant Characteristic Definitions"<<endl;
    cout<<"2 \t View Plant Characteristics"<<endl;
    cout<<"3 \t About the Programmer"<<endl;
    
    try {
        cin>>choice;
        if (choice > 3 || choice < 0)
            throw 41;
         switch (choice) { //*switch statement for game menu
            case 1: 
                definitions();break;
            case 2: 
                aboutProg();break;
            case 3: 
                plants();break;
            }   
        }  
    
    catch (string exception) {
        cout << exception << " has occured." << endl;
    }
    
    catch(int exception) {
        cout << "Invalid data exception on line #" << exception;
    }
}

void definitions() {
    cout<<"\t **PLANT DEFINITIONS**"<<endl;
    cout<< "- Plant types: Angiosperms (flowering plants with fruits);\n";
    cout<< "\t Gymnosperms (no flowers nor fruits).\n";
    cout<< "- Plant family/genus/species classification is hierarchical.\n";
    cout<< "- Seed types may be eudicot or monocot.\n";
    cout<< "- Petals and Sepals are parts of a flower, amount varies.\n";
    menu();
}

void aboutProg() {
    cout<<"\t **ABOUT PROGRAMMER**"<<endl;
    cout<<"Hi this is Nichole Medero.\n";
    menu();
}

void plants() {
    Family plant1;
    Family plant2;
    Family plant3;
    Genus plant4;
    
    plant1.setName("Corn");
    plant1.setFamily("Poaceae");
    plant1.setPlantType("Angiosperm");
    plant1.setSeed(1);
    plant1.setCotyledon("Monocot");
    plant1.setFruit(true);
    plant1.setDichogamy("Perfect/Imperfect");
    plant1.setPetals(0);
    plant1.setSepals(3);
    plant1.setOrigin("Global");
    
    plant2.setName("Alfalfa");
    plant2.setFamily("Lauraceae");
    plant2.setPlantType("Angiosperm");
    plant2.setSeed(2);
    plant2.setCotyledon("Dicot");
    plant2.setFruit(true);
    plant2.setDichogamy("Perfect");
    plant2.setPetals(5);
    plant2.setSepals(5);
    plant2.setOrigin("Central Asia");
    
    plant3.setName("Radish");
    plant3.setFamily("Brassicaceae");
    plant3.setPlantType("Angiosperm");
    plant3.setSeed(2);
    plant3.setCotyledon("Dicot");
    plant3.setFruit(true);
    plant3.setDichogamy("Perfect");
    plant3.setPetals(4);
    plant3.setSepals(4);
    plant3.setOrigin("Midterranean");
    
    plant4.setName("Pine Nut");
    plant4.setFamily("Pinaceae");
    plant4.setGenus("Pinus");
    plant4.setSpecies("Koraiensis");
    plant4.setSeed(120);
    plant4.setSepals(0);
    plant4.setPetals(0);
    plant4.setPlantType("Gymnosperm");
    plant4.setAvgWeight(90);
    plant4.setOrigin("Korea");
            
    
    //FILE INPUT OUTPUT
    fstream dataFile;
    cout<<"Inside data.txt.\n";
    dataFile.open("data.txt", ios::out | ios::binary);
        dataFile << "\t Angiosperms:" << endl;
        dataFile << "Name: " << plant1.getName() << endl;
        dataFile << "Family: " << plant1.getFamily() << endl;
        dataFile << "Plant Type: " << plant1.getPlantType() << endl;
        dataFile << "Seed:" << plant1.getSeed() << endl;
        dataFile << "Cotyledon: " << plant1.getCotyledon() << endl;
        dataFile << "Fruit: " << plant1.getFruit() << endl;
        dataFile << "Dichogamy: " << plant1.getDichogamy() << endl;
        dataFile << "Petals: " << plant1.getPetals() << endl;
        dataFile << "Sepals: " << plant1.getSepals() << endl;
        dataFile << "Origin: " << plant1.getOrigin() << endl;
    dataFile.close();
    
    dataFile.open("data.txt", ios::out | ios::app | ios::binary);
        dataFile << "Name: " << plant2.getName() << endl;
        dataFile << "Family: " << plant2.getFamily() << endl;
        dataFile << "Plant Type: " << plant2.getPlantType() << endl;
        dataFile << "Seed:" << plant2.getSeed() << endl;
        dataFile << "Cotyledon: " << plant2.getCotyledon() << endl;
        dataFile << "Fruit: " << plant2.getFruit() << endl;
        dataFile << "Dichogamy: " << plant2.getDichogamy() << endl;
        dataFile << "Petals: " << plant2.getPetals() << endl;
        dataFile << "Sepals: " << plant2.getSepals() << endl;
        dataFile << "Origin: " << plant2.getOrigin() << endl;
        
        dataFile << "Name: " << plant3.getName() << endl;
        dataFile << "Family: " << plant3.getFamily() << endl;
        dataFile << "Plant Type: " << plant3.getPlantType() << endl;
        dataFile << "Seed:" << plant3.getSeed() << endl;
        dataFile << "Cotyledon: " << plant3.getCotyledon() << endl;
        dataFile << "Fruit: " << plant3.getFruit() << endl;
        dataFile << "Dichogamy: " << plant3.getDichogamy() << endl;
        dataFile << "Petals: " << plant3.getPetals() << endl;
        dataFile << "Sepals: " << plant3.getSepals() << endl;
        dataFile << "Origin: " << plant3.getOrigin() << endl;
        
        dataFile << endl << "\t Gymnosperms:" << endl;
        dataFile << "Name: " <<  plant4.getName() << endl;
        dataFile << "Family: " << plant4.getFamily() << endl;
        dataFile << "Genus: " << plant4.getGenus() << endl;
        dataFile << "Species: " << plant4.getSpecies() << endl;
        dataFile << "Seed: " << plant4.getSeed() << endl;
        dataFile << "Sepals: " << plant4.getSepals() << endl;
        dataFile << "Petals: " << plant4.getPetals() << endl;
        dataFile << "Plant Type: " << plant4.getPlantType() << endl;
        dataFile << "Average Weight: " << plant4.getAvgWeight() << endl;
        dataFile << "Origin: " << plant4.getOrigin() << endl;
        dataFile.close();
        
        
}
