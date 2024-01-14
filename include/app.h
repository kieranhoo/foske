//
// Created by duchungho on 14/01/2024.
//

#ifndef GRAPHIX_APP_H
#define GRAPHIX_APP_H

class App {
private:
    int *argc;
    char **argv;
    void init_app();
    static void display_func();
    static void render();
    static void init_parameter();
    static void init_display();
    static void loop() ;
public:
    App(int *argc, char **argv);
    void Run();
};

#endif //GRAPHIX_APP_H
