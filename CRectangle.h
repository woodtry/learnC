#pragma once
class CRectangle
{
	public:
		int w, h;
		int Area(); //成员函数仅在此处声明
		int Perimeter();
		void Init(int w_, int h_);
};

int CRectangle::Area() {
	return w * h;
}

int CRectangle::Perimeter() {
	return 2 * (w + h);
}

void CRectangle::Init(int w_, int h_) {
	w = w_;
	h = h_;
}