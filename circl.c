/*
If you want to create a circle in C** without using `graphics.h`**,
you can simulate a circle in a text - based environment or by using ASCII art.
Here's an example of how to draw a circle using ASCII characters in the console:

-- -

### Example Code : ASCII Circle
```c
*/
#include <stdio.h>
#include <math.h>

#define WIDTH 40  // Width of the drawing area
#define HEIGHT 20 // Height of the drawing area

void drawCircle(int radius) {
    for (int y = 0; y <= HEIGHT; y++) {
        for (int x = 0; x <= WIDTH; x++) {
            // Calculate the distance from the center
            int centerX = WIDTH / 2;
            int centerY = HEIGHT / 2;
            float distance = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));

            // Check if the point is approximately on the circle
            if (fabs(distance - radius) < 1.0) {
                printf("*"); // Draw the circle
            }
            else {
                printf(" "); // Draw empty space
            }
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    drawCircle(radius);

    return 0;
}
/*
```

-- -

### Explanation:
1. * *`WIDTH` and `HEIGHT`* * :
-Define the size of the drawing area in the console.

2. * *`drawCircle` Function * *:
-Iterates over each point in the `WIDTH x HEIGHT` grid.
- Calculates the distance of each point from the center of the circle using the distance formula :
\[
    \text{ distance } = \sqrt{ (x - \text{centerX}) ^ 2 + (y - \text{centerY}) ^ 2 }
        \]
    - If the distance is approximately equal to the radius, it prints a `*` (representing the circle).Otherwise, it prints a space.

    3. * *`main` Function * *:
-Prompts the user to input the radius of the circle.
- Calls the `drawCircle` function to draw the circle.

-- -

### Example Output :
For a radius of `10`, the output might look like this:
```
* ****
****
****
**
**
**
**
**
**
****
****
*****
```

-- -

### Notes:
-This method uses ASCII characters to approximate a circle.The quality of the circle depends on the resolution(`WIDTH` and `HEIGHT`).
    - You can adjust the `WIDTH`, `HEIGHT`, and radius to fit your needs.
    - If you want a more precise graphical representation, consider using a modern graphics library like SDL, OpenGL, or Cairo.

    Let me know if you need further clarification!😊

*/



