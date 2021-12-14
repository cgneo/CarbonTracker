#include "transport_API.cpp"


int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    transport_api api;
    api.set_api_key();
    api.get_reply();
    std::cout<<api.emission<<std::endl;
    return app.exec();
}
