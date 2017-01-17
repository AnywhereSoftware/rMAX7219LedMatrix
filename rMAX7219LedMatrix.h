#pragma once
#include "B4RDefines.h"
#include "LedMatrix.h"
//~version: 1.01
namespace B4R {
	//~shortname: LedMatrix
	//This is an ESP8266 library.
	class B4RLedMatrix {
		private:
			uint8_t be[sizeof(LedMatrix)];
			LedMatrix* mat;
		public:
			//Initializes the object.
			//NumberOfDisplays - Number of connected devices.
			//SlaveSelectPin: CS (or SS) pin.
			void Initialize(Byte NumberOfDisplays, Byte SlaveSelectPin);
			//Sets the intensity (0 - 15).
			void setIntensity(Byte b);
			//Sets the with of a single character. Default is 7.
			void setCharWidth(Byte b);
			//Sets the alignment.
			//0 - Text is aligned to left side of the display.
			//1 - Beginning of text is just outside the right end of the display.
			//2 - End of text is aligned to the right of the display.
			//3 - End of text is just outside the left side of the display.
			void setTextAlignment(Byte b);
			void SetPixel(Byte X, Byte Y);
			//Draw the currently set text at the current offset.
			void DrawText();
			//Clears the frame buffer.
			void Clear();
			//Writes the frame buffer to the displays.
			void Commit();
			//Sets the current text.
			void setText(B4RString* t);
			//Sets the text that will replace the current text after a complete scroll cycle.
			void setNextText(B4RString* t);
			void ScrollTextRight();
			void ScrollTextLeft();
			void OscillateText();
	};
}