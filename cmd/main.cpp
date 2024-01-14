#include "app.h"

int main(int argc, char **argv) {
    App * graphix = new App(&argc, argv);
    graphix->Run();
    delete graphix;
}