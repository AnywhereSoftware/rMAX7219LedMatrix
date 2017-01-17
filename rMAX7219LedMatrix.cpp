#include "B4RDefines.h"
namespace B4R {
	void B4RLedMatrix::Initialize(Byte NumberOfDisplays, Byte SlaveSelectPin) {
		mat = new (be) LedMatrix(NumberOfDisplays, SlaveSelectPin);
		mat->init();
	}
	void B4RLedMatrix::setIntensity(Byte b) {
		mat->setIntensity(b);
	}
    void B4RLedMatrix::setCharWidth(Byte b) {
		mat->setCharWidth(b);
	}
    void B4RLedMatrix::setTextAlignment(Byte b) {
		mat->setTextAlignment(b);
	}
    void B4RLedMatrix::SetPixel(Byte X, Byte Y) {
		mat->setPixel(X, Y);
	}
    void B4RLedMatrix::DrawText() {
		mat->drawText();
	}
    void B4RLedMatrix::Clear() {
		mat->clear();
	}
	void B4RLedMatrix::Commit() {
		mat->commit();
	}
    void B4RLedMatrix::setText(B4RString* t) {
		mat->setText(t->data);
	}
    void B4RLedMatrix::setNextText(B4RString* t) {
		mat->setNextText(t->data);
	}
    void B4RLedMatrix::ScrollTextRight() {
		mat->scrollTextRight();
	}
    void B4RLedMatrix::ScrollTextLeft() {
		mat->scrollTextLeft();
	}
    void B4RLedMatrix::OscillateText() {
		mat->oscillateText();
	}
}