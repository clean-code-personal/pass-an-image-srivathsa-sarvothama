#pragma once
#include <cstdint>
#include <string.h> 

struct Image {
	int rows;
	int columns;
	uint8_t pixels[1024 * 1024]; // max 1k x 1k image

	Image(int in_rows, int in_columns) : 
		rows(in_rows), columns(in_columns)
	{
		memset(pixels, 0, in_rows * in_columns);
	}
};

class ImageBrightener {
private:
	Image m_inputImage;
public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
	Image& GetImage();
};
