#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int border(int a ,int b ,int c ,int d ,int e,int f,int g,int h,int i)
{
	return (g + 2 *h + i) - (a + 2*b + c);
}

int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];
	
	//Save all pixels of oringinal image inverted
	
	int h1 = 0;
	int w1 = 0;
	int result = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h2 = 0;
	int i = 0;


	for(int row = 0; row < h  ; row++) {
		for(int col = 0; col < w ; col++) {
			a = img[h1][w1];
			b = img[h1][w1 + 1];
			c = img[h1][w1 + 2];
			d = img[h1 + 1][w1];
			e = img[h1 + 1][w1 + 1];
			f = img[h1 + 1][w1 + 2];
			g = img[h1 + 2][w1];
			h2 = img[h1 + 2][w1 + 1];
			i = img[h1 + 2][w1 + 2];

			result = border(a, b, c, d, e, f, g, h2, i);
			
			if( result <= 0)
				out[h1 + 1][w1 + 1] = 0;
			else if (result >= 255)
				out[h1 + 1][w1 + 1] = 255; 
			else 
				out[h1 + 1][w1 + 1] = result;
			w1++;
			
		}
		h1++;
		w1 = 0;
	}
	

	

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);

}