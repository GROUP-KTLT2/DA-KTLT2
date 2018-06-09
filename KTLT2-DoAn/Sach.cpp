#include "Sach.h"
int Sach::getNgayNhapKho()
{
	return NgayNhapKho.getNgay();
}
int Sach::getThangNhapKho()
{
	return NgayNhapKho.getThang();
}
int Sach::getNamNhapKho()
{
	return NgayNhapKho.getNam();
}
void Sach::setTinhTrang(int nTinhTrang)
{
	this->nTinhTrang = nTinhTrang;
}
void Sach::setSoTrang(int nSoTrang)
{
	this->nSoTrang = nSoTrang;
}
void Sach::setNamPhatHanh(int nNamPhatHanh)
{
	this->nNamPhatHanh = nNamPhatHanh;
}
void Sach::setTriGia(int nTriGia)
{
	this->nTriGia = nTriGia;
}
void Sach::setNXB(string sNXB)
{
	this->sNXB = sNXB;
}
void Sach::setTacGia(string sTacGia)
{
	this->sTacGia = sTacGia;
}
void Sach::setTuaDe(string sTuaDe)
{
	this->sTuaDe = sTuaDe;
}
void Sach::setMaSach(string sMaSach)
{
	this->sMaSach = sMaSach;
}
int Sach::getTinhTrang()
{
	return nTinhTrang;
}
int Sach::getSoTrang()
{
	return nSoTrang;
}
int Sach::getNamPhatHanh()
{
	return nNamPhatHanh;
}
int Sach::getTriGia()
{
	return nTriGia;
}
string Sach::getNXB()
{
	return sNXB;
}
string Sach::getTacGia()
{
	return sTacGia;
}
string Sach::getTuaDe()
{
	return sTuaDe;
}
string Sach::getMaSach()
{
	return sMaSach;
}
void Sach::output()
{
	cout <<"\n\t\t*************************************************\n\n";
	cout << "\t\tMa sach: " << sMaSach << endl;
	cout << "\t\tTua de: " << sTuaDe << endl;
	cout << "\t\tTac gia: " << sTacGia << endl;
	cout << "\t\tNha xuat ban: " << sNXB << endl;
	cout << "\t\tTri gia: " << nTriGia << endl;
	cout << "\t\tNam phat hanh: " << nNamPhatHanh << endl;
	cout << "\t\tSo trang: " << nSoTrang << endl;
	cout << "\t\tNgay nhap kho: "; NgayNhapKho.output();
	cout << "\t\tTinh trang: " << nTinhTrang << endl;
}