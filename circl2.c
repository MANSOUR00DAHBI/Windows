
/*
If you want to create a** screen** or **canvas * *in C where you can draw shapes like circles,
you can simulate a screen using a 2D array.
This array will represent the pixels of the screen, and you can manipulate it to draw shapes.
Here's an example of how to create a screen and draw a circle on it:

-- -

### Example Code : Simulating a Screen
```c
*/

#include <stdio.h>
#include <math.h>

#define WIDTH 80   // Width of the screen
#define HEIGHT 40  // Height of the screen

// Function to initialize the screen with empty spaces
void initializeScreen(char screen[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            screen[y][x] = ' ';
        }
    }
}

// Function to draw a circle on the screen
void drawCircle(char screen[HEIGHT][WIDTH], int centerX, int centerY, int radius) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // Calculate the distance from the center
            float distance = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));

            // Check if the point is approximately on the circle
            if (fabs(distance - radius) < 1.0) {
                screen[y][x] = '*'; // Draw the circle
            }
        }
    }
}

// Function to display the screen
void displayScreen(char screen[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            printf("%c", screen[y][x]);
        }
        printf("\n");
    }
}

int main() {
    char screen[HEIGHT][WIDTH]; // Declare the screen as a 2D array

    initializeScreen(screen); // Initialize the screen with empty spaces

    int centerX = WIDTH / 2;  // X-coordinate of the center
    int centerY = HEIGHT / 2; // Y-coordinate of the center
    int radius = 10;          // Radius of the circle

    drawCircle(screen, centerX, centerY, radius); // Draw the circle

    displayScreen(screen); // Display the screen

    return 0;
}


/*
```

-- -

### Explanation:
1. * *`initializeScreen` Function * *:
-Fills the 2D array(`screen`) with spaces to clear it.

    2. * *`drawCircle` Function * *:
-Uses the distance formula to determine if a point `(x, y)` lies on the circle.
- If the point is on the circle, it sets the corresponding element in the `screen` array to `*`.

3. * *`displayScreen` Function * *:
-Prints the contents of the `screen` array to the console, row by row.

4. * *`main` Function * *:
-Initializes the screen.
- Draws a circle at the center of the screen with a specified radius.
- Displays the screen.

-- -

### Example Output :
For a screen of size `80x40` and a circle with radius `10`, the output might look like this:
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
-You can modify the `WIDTH` and `HEIGHT` to change the size of the screen.
- To draw other shapes(e.g., lines, rectangles), you can add similar functions that manipulate the `screen` array.
- This approach is purely text - based and works in any C environment without requiring external libraries.

Let me know if you need help extending this further!😊*/