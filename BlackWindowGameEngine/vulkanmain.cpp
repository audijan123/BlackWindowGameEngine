#include "vulkanmain.hpp"

namespace BWGE
{
	namespace VRENDER {
		vulkanmain::vulkanmain()
		{
			VkApplicationInfo appInfo;
			appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
			appInfo.pNext = NULL;
			appInfo.pApplicationName = "Black Window Game Engine";
			appInfo.applicationVersion = VK_MAKE_VERSION(0, 0, 0);
			appInfo.pEngineName = "Black Window Render";
			appInfo.engineVersion = VK_MAKE_VERSION(0, 0, 0);
			appInfo.apiVersion = VK_API_VERSION_1_0;


			VkInstanceCreateInfo instanceInfo;
			instanceInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
			instanceInfo.pNext = NULL;
			instanceInfo.flags = 0;
			instanceInfo.pApplicationInfo = &appInfo;
			instanceInfo.enabledLayerCount = 0;
			instanceInfo.ppEnabledLayerNames = NULL;
			instanceInfo.enabledExtensionCount = 0;
			instanceInfo.ppEnabledExtensionNames = NULL;
			




		}

		vulkanmain::~vulkanmain()
		{
		}
	}
}