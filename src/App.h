#include <GLFW/glfw3.h>

class App{
public:
    App();
    ~App();

    void run();
private:
    GLFWwindow* m_window;
};