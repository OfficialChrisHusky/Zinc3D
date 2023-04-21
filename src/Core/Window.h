#pragma once

#include "Core/Core.h"

namespace Zinc::Window {

	void Create(const char* title, uint32_t width, uint32_t height);
	void Update();
	void Close();

	bool Open();

}