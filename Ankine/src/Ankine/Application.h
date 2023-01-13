#pragma once

#include "Core.h"

namespace Ankine {
	class ANKINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}