#include "crow.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::to_string;

string repeating(int number){
    string response = "";

    while(number >= 0){
        response += to_string(number--);
        response += "\n";
    }

    return response;
}

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/<int>")
    ([](int count){
        if(count > 100){
            return crow::response(400);
        }

        std::ostringstream os;

        os << count << " the fuck \n" << repeating(count);

        return crow::response(os.str());
    });

    app.port(18080).multithreaded().run();
}
 