#include "crow.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::to_string;

string repeating(int number);

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/<int>")
    ([](int number){
        return crow::response(repeating(number));
    });

    app.port(18080).multithreaded().run();
}

string repeating(int number){
    string response = "";

    while(number >= 0){
        response += to_string(number--);
        response += "\n";
    }

    return response;
}