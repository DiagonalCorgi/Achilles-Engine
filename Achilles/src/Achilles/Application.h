#pragma once

#include "Core.h"

namespace Achilles {

	class ACHILLES_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client
	Application* CreateApplication();

}

