#include "UserInterface.h"
#include <iostream>

    void UserInterface::run(Database& db) {
        int choice;

        while (true) {
            std::cout << "\n1. Add Employee\n";
            std::cout << "2. Promote Employee\n";
            std::cout << "3. Fire Employee\n";
            std::cout << "4. Show Active\n";
            std::cout << "5. Show Former\n";
            std::cout << "6. Show All\n";
            std::cout << "0. Exit\n";

            std::cin >> choice; std::cout << std::endl;
            switch (choice) {
            case 1: {
                int id, salary;
                std::string name;
                std::cout << "input id:"; std::cin >> id; std::cout << std::endl;
                std::cout << "input name:"; std::cin >> name; std::cout << std::endl;
                std::cout << "input salary:"; std::cin >> salary; std::cout << std::endl;
                db.addEmployee(id, name, salary);

                break;
            }
            case 2: {
                int id, bonus;
                std::cout << "input id:"; std::cin >> id; std::cout << std::endl;
                std::cout << "input bonus:"; std::cin >> bonus; std::cout << std::endl;
                db.PromoteEmployee(id, bonus);
                break;
            }
            case 3: {
                int id;
                std::cout << "input id:"; std::cin >> id; std::cout << std::endl;
                db.FireEmployee(id);
                break;
            }
            case 4: {
                db.ActiveEmployees();
                break;
            }
            case 5: {
                db.FormerEmployees();
                break;
            }
            case 6: {
                db.AllEmployees();
                break;
            }
            case 0:
                return;

            default:
                std::cout << "Invalid choice\n";

            }
        }
    }
