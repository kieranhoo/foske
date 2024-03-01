#include "app.h"

int main(int argc, char **argv) {
    App * app = new App(&argc, argv);
    app->Run();
    delete app;
}