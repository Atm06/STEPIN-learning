#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculateVolumeAndSurfaceArea(struct Box* box) {
    double volume = box->length * box->width * box->height;
    double surfaceArea = 2 * (box->length * box->width + box->width * box->height + box->height * box->length);
    
    printf("Volume: %.2lf\n", volume);
    printf("Surface Area: %.2lf\n", surfaceArea);
}

int main() {
    struct Box myBox;
    
    printf("Enter the length, width, and height of the box: ");
    scanf("%lf %lf %lf", &myBox.length, &myBox.width, &myBox.height);
    
    calculateVolumeAndSurfaceArea(&myBox);
    
    return 0;
}
