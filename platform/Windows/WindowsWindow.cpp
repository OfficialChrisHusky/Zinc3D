#include "Core/Window.h"

#include "GLFW/glfw3.h"

namespace Zinc::Window {

	GLFWwindow* window;

	void Create(const char* title, uint32_t width, uint32_t height) {

		ZN_ASSERT(glfwInit(), "Failed to Initialize GLFW!");

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		window = glfwCreateWindow(width, height, title, nullptr, nullptr);
		glfwMakeContextCurrent(window);

		glfwMaximizeWindow(window);

	}
	void Update() {

		glfwPollEvents();
		glfwSwapBuffers(window);

	}
	void Close() {

		glfwDestroyWindow(window);
		glfwTerminate();

	}

	bool Open() {

		return !glfwWindowShouldClose(window);

	}

}