#include "Core/Core.h"
#include "Core/Window.h"

namespace Zinc {

	void Initialize() {

		Logger::Initialize();
		Log("It's Zincing time! Let's Zinc all over the place");

		Window::Create("Zinc", 1280, 720);

	}
	void Start() {

		while (Window::Open()) {

			Window::Update();

		}

	}
	void Shutdown() {

		Window::Close();

	}

}

int main() {

	Zinc::Initialize();
	Zinc::Start();
	Zinc::Shutdown();

	return 0;

}