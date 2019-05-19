#include <stdio.h>
#include <cmath>
#include <graphics.h>
#define MAXCOUNT 30
using namespace std;

void fractal(float left, float top, float xside, float yside)
{
  float xscale, yscale, zx, zy, cx, cy;
  int x, y, i, j;
  int maxx, maxy, count;

  maxx = getmaxx(); // Finding rightmost pixel on the screen
  maxy = getmaxy(); // Finding topmost pixel on the screen

  // Scaling real (x) and imaginary (y) axes
  xscale = xside/maxx;
  yscale = yside/maxy;
  
  rectangle(0, 0, maxx, maxy); // Rectangle the size of the screen

  // Scan every pixel on the screen
  // Each point defined by position x + iy.
  // Iterate for each point to and check its convergence/divergence

  for (y = 1; y < maxy - 1; y++)
    {
      for (x = 1; x < maxx - 1; x++)
	{
	  // Re(c)
	  cx = x*xscale + left;

	  // Im(c)
	  cy = y*yscale + top;

	  // Re(z)
	  zx = 0;

	  // Im(z)
	  zy = 0;
	  count = 0;

	  // calculate c at each point on the screen and color that pixel
	  // accordingly depending on whether it converges or diverges.
	  // Exit loop if you hit the max number of iterations or if you reach
	  // z >= 2 (critical point for convergence/divergence.

	  while ((zx*zx + zy*zy < 4) && count < MAXCOUNT)
	    {
	      // Calculate fractal function
	      // z[i+1] = z[i]^2 + c for the Mandelbrot set

	      zx = pow(zx,2) - pow(zy,2) + cx;
	      zy = 2*zx*zy + cy;

	      // increment count
	      count++;
	    }
	  // Color pixel
	  // Define position with x and y and the color with count
	  putpixel(x, y, count);
	}
    }
}

int main()
{
  // gm is graphics mode, which is a display mode that generates image using
  // pixels. DETECT is a macro defined in graphics.h.

  int gd = DETECT, gm, errorcode;
  float left, top, xside, yside;

  // Set left, top, xside, yside
  left = -1.75;
  top = -0.25;
  xside = 0.25;
  yside = 0.45;
  char driver[] = "";

  // initgraph initializes the graphics system by loading a graphics driver
  // from disk
  initgraph(&gd, &gm, driver);

  // Call fractal function

  fractal(left, top, xside, yside);
  getch();

  closegraph();
  return 0;
}
