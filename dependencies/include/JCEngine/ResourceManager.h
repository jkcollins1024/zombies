#pragma once
#include "TextureCache.h"
#include <string>

namespace JCEngine {
	class ResourceManager
	{
	public:
		static GLTexture getTexture(std::string filePath);

	private:
		static TextureCache _textureCache;
	};

}

