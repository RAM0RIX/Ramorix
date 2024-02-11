#pragma once

#include "Core.h"

namespace Ramorix
{
	class RMX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();

}