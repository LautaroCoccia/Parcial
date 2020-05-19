#include <iostream>

#include "glfw3.h"

using namespace std;

int main()
{


	GLFWwindow* myWindow;

	if (!glfwInit())
	{
		return -1;
	}

	myWindow = glfwCreateWindow(800, 600, "Parcial", NULL, NULL);

	if (!myWindow)
	{
		glfwTerminate();
		return -1;
	}
	

	glfwMakeContextCurrent(myWindow);

	while (!glfwWindowShouldClose(myWindow))
	{

		glfwSwapBuffers(myWindow);

		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
	
}

