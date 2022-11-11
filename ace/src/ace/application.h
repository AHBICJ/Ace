#pragma once
#include "core.h"

namespace ace {

	class ACE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();
}

