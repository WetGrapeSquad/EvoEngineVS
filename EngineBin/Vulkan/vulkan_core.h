#pragma once
#ifdef _WIN32
#define VK_USE_PLATFORM_WIN32_KHR
#include "vulkan/vulkan.h"
#include "vulkan/vk_sdk_platform.h"
#else
#define VK_USE_PLATFORM_XCB_KHR
#include <vulkan/vulkan.h>
#include <vulkan/vk_sdk_platform.h>
#endif

class vulkan_core
{
public:
	vulkan_core(const char* pAppName);
	~vulkan_core();

	bool Init(VulkanWindowControl* pWindowControl);
	const VkPhysicalDevice& GetPhysDevice() const;

	const VkSurfaceFormatKHR& GetSurfaceFormat() const;

	const VkSurfaceCapabilitiesKHR GetSurfaceCaps() const;

	const VkSurfaceKHR& GetSurface() const { return m_surface; }

	int GetQueueFamily() const { return m_gfxQueueFamily; }

	VkInstance& GetInstance() { return m_inst; }

	VkDevice& GetDevice() { return m_device; }

private:
	void CreateInstance();
	void CreateSurface();
};