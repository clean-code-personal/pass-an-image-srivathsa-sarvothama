#include <iostream>
#include "brightener.h"

int main() {
    std::unique_ptr<Image> image(new Image(512, 512));
	std::cout << "Brightening a 512 x 512 image\n";
    std::unique_ptr<ImageBrightener> brightener(new ImageBrightener(*image));
    int attenuatedCount = brightener->BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}
