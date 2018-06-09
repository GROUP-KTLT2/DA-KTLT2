#include "TaiKhoan.h"
void docSach(list <Sach> &S);
void docBanDoc(list <BanDoc*> &B);
void docPhieuMuon(list <PhieuMuon> &P);
int PhieuMuon::nTongPM = 0;
void docTaiKhoan(list <TaiKhoan> &T);
void ghiPhieuMuon(list <PhieuMuon> P);
void ghiBanDoc(list <BanDoc*> B);
void ghiSach(list <Sach> S);
void outputTatCaSach(list <Sach> S);
void outputSachConLai(list <Sach> S);
void outputBanDoc(list <BanDoc*> B);
void dangNhap(list <TaiKhoan> T);
bool kTraMaSach(list <Sach> S, string sMaSach);
int tinhTrangSach(list <Sach> S, string sMaSach);
bool kTraMaBanDoc(list <BanDoc*> B, string sMaBanDoc);
void capNhatTinhTrangSach(list <Sach> &S, string sMaSach, int nTinhTrang);
void taoPhieuMuon(list <Sach> &S, list <BanDoc*> B, list <PhieuMuon> &P);
void taoSach(list <Sach> &S);
void taoBanDoc(list <BanDoc*> &B);
void traSach(list <PhieuMuon> &P, list <Sach> &S);
void xoaSach(list <Sach> &S);
void tKeSLSachConLai(list <Sach> S);
void tKeSLSachDaDuocMuon(list <Sach> S);
void outputSach(list <Sach> S, string sMaSach);
void lKeSachCuaBanDoc(list <Sach> S, list <PhieuMuon> P, list <BanDoc*> B);
int chuanHoaNgayThangNam(string &sNTN);
void SetTeColor(WORD color);
string passwordInput(unsigned maxLength);
void output1Sach(Sach SS);
Sach lay1Sach(list <Sach> S, string sMaSach);
void ouputPhieuMuon(list <PhieuMuon> P);
void main()
{
	list <Sach> S;
	list <BanDoc*> B;
	list <PhieuMuon> P;
	list <TaiKhoan> T;
	docSach(S);
	docBanDoc(B);
	docPhieuMuon(P);
	docTaiKhoan(T);
	int nC;
	do
	{
		system("cls");
		SetTeColor(10);
		cout <<"\t\t*************************************\n\n";
		SetTeColor(14);
		cout <<"\t\t*               MENU                *\n\n";
		SetTeColor(10);
		cout <<"\t\t*************************************\n\n";SetTeColor(14);
		cout << "\t\t\t1. Hien thi thong tin sach\n";
		cout << "\t\t\t2. Hien thi thong tin phieu muon\n";
		cout << "\t\t\t3. Tim kiem thong tin\n";
		cout << "\t\t\t4. Quan ly\n";
		cout << "\t\t\t5. Thoat\n";SetTeColor(11);
		cout << "\t\tChuc nang: ";SetTeColor(13);
		cin >> nC;
		string sTK, sMK;
		switch(nC)
		{
		case 1:
			outputTatCaSach(S);
			break;
		case 2:
			ouputPhieuMuon(P);
			break;
		case 3:
			int nC2;
			do
			{
				system("cls");SetTeColor(14);
				cout << "\t\t*****************MENU******************\n";SetTeColor(10);
				cout << "\t\t\t1. Hien thi thong tin sach con lai trong thu vien\n";
				cout << "\t\t\t2. Tim ban doc(yeu cau nhap ma ban doc)\n";
				cout << "\t\t\t3. Thoat\n";SetTeColor(11);
				cout << "\t\tChuc nang: ";SetTeColor(13);
				cin >> nC2;
				switch(nC2)
				{
				case 1:
					outputSachConLai(S);
					break;
				case 2:
					outputBanDoc(B);
					break;
				case 3:
					break;
				default:
					SetTeColor(12);
					cout << "Khong co chuc nang nay!\n";
					Sleep(1500);
				}
				if(nC2 == 1)
					system("pause");
			}while(nC2 != 3);
			break;
		case 4:
			dangNhap(T);
			int nC3;
			do
			{
				system("cls");SetTeColor(10);
				cout << "\t\t*****************Quan Ly******************\n";SetTeColor(14);
				cout << "\t\t\t1. Phieu muon\n";
				cout << "\t\t\t2. Sach\n";
				cout << "\t\t\t3. Tao ban doc\n";
				cout << "\t\t\t4. Thong ke\n";
				cout << "\t\t\t5. Thoat\n";SetTeColor(11);
				cout << "\t\tChuc nang: ";SetTeColor(13);
				cin >> nC3;
				switch(nC3)
				{
				case 1:
					int nC4;
					do
					{
						system("cls");SetTeColor(10);
						cout << "\t\t*****************Phieu muon******************\n";SetTeColor(14);
						cout << "\t\t\t1. Tao phieu muon\n";
						cout << "\t\t\t2. Tra sach\n";
						cout << "\t\t\t3. Thoat\n";SetTeColor(11);
						cout << "\t\tChuc nang: ";SetTeColor(13);
						cin >> nC4;
						switch(nC4)
						{
						case 1:
							taoPhieuMuon(S, B, P);
							break;
						case 2:
							traSach(P, S);
							break;
						case 3:
							break;
						default:
							SetTeColor(12);
							cout << "\t\tKhong co chuc nang nay!\n";
							system("pause");
						}
					}while(nC4 != 3);
					break;
				case 2:
					int nC5;
					do
					{
						system("cls");SetTeColor(10);
						cout << "\t\t*****************Sach******************\n";SetTeColor(11);
						cout << "\t\t\t1. Tao sach\n";
						cout << "\t\t\t2. Xoa sach\n";
						cout << "\t\t\t3. Thoat\n";SetTeColor(14);
						cout << "\t\tChuc nang: "; SetTeColor(13);
						cin >> nC5;
						switch(nC5)
						{
						case 1:
							taoSach(S);
							break;
						case 2:
							xoaSach(S);
							break;
						case 3:
							break;
						default:
							SetTeColor(12);
							cout << "\t\tKhong co chuc nang nay!\n";
							system("pause");
						}
					}while(nC5 != 3);
					break;
				case 3:
					taoBanDoc(B);
					break;
				case 4:
					int nC6;
					do
					{
						system("cls");SetTeColor(10);
						cout << "\t\t*****************Thong ke******************\n";SetTeColor(14);
						cout << "\t\t\t1. Tong so luong sach con lai trong thu vien\n";
						cout << "\t\t\t2. Tong so sach da duoc muon\n";
						cout << "\t\t\t3. Liet ke sach cua mot ban doc dang muon\n";
						cout << "\t\t\t4. Thoat\n";SetTeColor(11);
						cout << "\t\tChuc nang: "; SetTeColor(13);
						cin >> nC6;
						switch(nC6)
						{
						case 1:
							tKeSLSachConLai(S);		
							break;
						case 2:
							tKeSLSachDaDuocMuon(S);
							break;
						case 3:
							lKeSachCuaBanDoc(S, P, B);
							break;
						case 4:
							break;
						default:
							SetTeColor(12);
							cout << "\t\tKhong co chuc nang nay!\n";					
						}
						if(nC6 != 4)
							system("pause");
					}while(nC6 != 4);
					break;
				case 5:
					break;
				default:
					SetTeColor(12);
					cout << "\t\tKhong co chuc nang nay!\n";
				}
			}while(nC3 != 5);
			break;
		case 5:
			ghiSach(S);
			ghiBanDoc(B);
			ghiPhieuMuon(P);
			exit(1);
		default:
			SetTeColor(12);
			cout << "\t\tKhong co chuc nang nay!\n";
			Sleep(1500);
		}
		if(nC != 3 && nC != 4 && nC != 5)
			system("pause");
	}while(nC != 5);
	system("pause");
}
void ouputPhieuMuon(list <PhieuMuon> P)
{
	for(list <PhieuMuon>::iterator p = P.begin(); p != P.end(); p++)
	{
		SetTeColor(10);
		cout <<"\n\t**************************************\n\n";
		SetTeColor(14);
		cout << "\t\tSo phieu muon: ";SetTeColor(11);
		cout << p->getSTTPM() << endl;
		SetTeColor(14);
		cout << "\t\tMa ban doc: ";SetTeColor(11);
		cout << p->getMaBanDoc() << endl;
		SetTeColor(14);
		cout << "\t\tMa sach: ";SetTeColor(11);
		cout << p->getMaSach() << endl;
		SetTeColor(14);
		cout << "\t\tNgay muon: ";SetTeColor(11);
		cout << p->getNgayMuon() << "/" << p->getThangMuon() << "/" << p->getNamMuon() << endl;
		SetTeColor(14);
		cout << "\t\tNgay Tra: ";SetTeColor(11);
		cout << p->getNgayTra()<< "/" << p->getThangTra() << "/" << p->getNamTra() << endl;
		SetTeColor(14);
		cout << "\t\tTrang Thai ";SetTeColor(11);
		cout << p->getTrangThai() << endl;
	}
}
Sach lay1Sach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
			return S.front();
		S.pop_front();
	}
}
void output1Sach(Sach SS)
{
	SetTeColor(10);
	cout <<"\n\t**************************************************\n\n";
	SetTeColor(14);
	cout << "\t\tMa sach: ";
	SetTeColor(11);
	cout << SS.getMaSach() << endl;
	SetTeColor(14);
	cout << "\t\tTua de: ";
	SetTeColor(11);
	cout << SS.getTuaDe() << endl;
	SetTeColor(14);
	cout << "\t\tTac gia: ";
	SetTeColor(11);
	cout << SS.getTacGia() << endl;
	SetTeColor(14);
	cout << "\t\tNha xuat ban: ";SetTeColor(11);
	cout << SS.getNXB() << endl;
	SetTeColor(14);
	cout << "\t\tTri gia: ";SetTeColor(11);
	cout << SS.getTriGia() << endl;
	SetTeColor(14);
	cout << "\t\tNam phat hanh: ";SetTeColor(11);
	cout << SS.getNamPhatHanh() << endl;
	SetTeColor(14);
	cout << "\t\tSo trang: ";SetTeColor(11);
	cout << SS.getSoTrang() << endl;
	SetTeColor(14);
	cout << "\t\tNgay nhap kho: ";SetTeColor(11);
	cout << SS.getNgayNhapKho() << "/" << SS.getThangNhapKho() << "/" << SS.getNamNhapKho() << endl;
	SetTeColor(14);
	cout << "\t\tTinh trang: ";
	SetTeColor(11);
	cout << SS.getTinhTrang() << endl;
}
int chuanHoaNgayThangNam(string &sNTN)
{
	int s = 0;
	for(int i = 0; i < sNTN.length(); i++)
	{
		if(sNTN[i] >= '0' && sNTN[i] <= '9')
		{
			s = s*10 + (sNTN[i] - 48);
		}
		if(sNTN[i] == '/')
		{
			sNTN.erase(0, i+1);
			return s;
		}
	}
	return s;
}
void lKeSachCuaBanDoc(list <Sach> S, list <PhieuMuon> P, list <BanDoc*> B)
{
	int nF = 0, nF2 = 0;
	string sMaBanDoc;
	SetTeColor(14);
	cout << "\t\tNhap ma ban doc can thong ke: "; fflush(stdin);
	SetTeColor(11);
	getline(cin, sMaBanDoc);
	for(list <BanDoc*> B2(B); !B.empty(); B.pop_front())
	{
		if(B.front()->getMaBanDoc() == sMaBanDoc)
		{
			nF = 1;
			for(list <PhieuMuon>::iterator p = P.begin(); p != P.end(); p++)
			{
				if(p->getMaBanDoc() == sMaBanDoc)
				{
					if(p->getTrangThai() == 1)
					{
						output1Sach(lay1Sach(S, p->getMaSach()));
						nF2 = 1;
					}
				}
			}
		}
	}
	if(nF == 0)
	{
		SetTeColor(12);
		cout << "\t\tKhong tim thay ma ban doc tuong ung!!!\n";
	}
	else
	{
		if(nF2 == 0)
		{
			SetTeColor(12);
			cout << "\t\tBan doc chua muon sach!!!\n";
		}
	}
}
void outputSach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
		{
			SetTeColor(11);
			S.front().output();
		}
		S.pop_front();
	}
}
void tKeSLSachDaDuocMuon(list <Sach> S)
{
	int nD;
	for(nD = 0; !S.empty(); S.pop_front())
	{
		if(S.front().getTinhTrang() != 0)
			nD++;
	}
	SetTeColor(14);
	cout << "\t\tSo sach da duoc muon: ";SetTeColor(10);
	cout << nD << endl;
}
void tKeSLSachConLai(list <Sach> S)
{
	int nD;
	for(nD = 0; !S.empty(); S.pop_front())
	{
		if(S.front().getTinhTrang() == 0)
			nD++;
	}
	SetTeColor(14);
	cout << "\t\tSo sach con lai trong thu vien: "; SetTeColor(10);
	cout << nD << endl;
}
void xoaSach(list <Sach> &S)
{
	SetTeColor(14);
	cout << "\t\tNhap ma sach can xoa: ";SetTeColor(11);
	string sMaSach; fflush(stdin);
	getline(cin, sMaSach);
	for(list <Sach>::iterator p = S.begin(); p != S.end(); p++)
	{
		if(p->getMaSach() == sMaSach)
		{
			if(p->getTinhTrang() == 0)
			{
				S.erase(p);SetTeColor(13);
				cout << "\t\tXoa sach thanh cong!\n";
			}
			else
			{
				SetTeColor(10);
				cout << "\t\tSach dang duoc muon!\n";
			}
			system("pause");
			return;
		}
	}
	SetTeColor(12);
	cout << "\t\tKhong tim thay ma sach tuong ung!\n";
	system("pause");
}
void traSach(list <PhieuMuon> &P, list <Sach> &S)
{
	int nSTTPhieuMuon;
	SetTeColor(14);
	cout << "\t\tNhap so phieu muon de tra sach: ";
	SetTeColor(11);
	cin >> nSTTPhieuMuon;
	for(list <PhieuMuon>::iterator p = P.begin(); p != P.end(); p++)
	{
		if(p->getSTTPM() == nSTTPhieuMuon)
		{
			if(p->getTrangThai() == 0)
			{
				SetTeColor(12);
				cout << "\t\tKhong the tra sach vi phieu muon da duoc tra truoc do!\n";
				system("pause");
				return;
			}
			p->setTrangThai(0);
			capNhatTinhTrangSach(S, p->getMaSach(), 0);
			SetTeColor(10);
			cout << "\t\tTra sach thanh cong!\n";
			system("pause");
			return;
		}
	}
	SetTeColor(12);
	cout << "\t\tKhong tim thay phieu muon!\n";
	system("pause");
}
void taoBanDoc(list <BanDoc*> &B)
{
	string sMaBanDoc;
	int nN, nT, nNM;
	time_t t = time(0);
	struct tm *Now = localtime(&t);
	nN = Now->tm_mday;
	nT = Now->tm_mon + 1;
	nNM = Now->tm_year + 1900;
	string sHoTen, sKhoa;
	int nType;
	SetTeColor(14);
	cout << "\t\tNhap ma ban doc: ";SetTeColor(11);
	fflush(stdin); getline(cin, sMaBanDoc);
	while(kTraMaBanDoc(B, sMaBanDoc))
	{
		SetTeColor(12);
		cout << "\t\tMa ban doc da ton tai!!!\n";SetTeColor(14);
		cout <<"\n\t\tHay nhap lai: ";SetTeColor(11);
		fflush(stdin); getline(cin, sMaBanDoc);
	}
	Date NgayDangKi(nN, nT, nNM);
	SetTeColor(14);
	cout << "\t\tNhap ho ten: ";SetTeColor(11);
	fflush(stdin); getline(cin, sHoTen);
	SetTeColor(14);
	cout << "\t\tNhap khoa: ";SetTeColor(11);
	getline(cin, sKhoa);
	SetTeColor(14);
	cout << "\t\t1. Giao vien\t\t2. Sinh vien\n";SetTeColor(14);
	cout << "\t\tChon loai ban doc: ";SetTeColor(11);
	cin >> nType;
	if(nType == 1)
	{
		string sDiaChi, sSDT;
		SetTeColor(14);
		cout << "\t\tNhap dia chi: ";SetTeColor(11);
		fflush(stdin); getline(cin, sDiaChi);
		SetTeColor(14);
		cout << "\t\tNhap so dien thoai: ";SetTeColor(11);
		getline(cin, sSDT);
		SetTeColor(15);
		BanDoc *BB = new GiaoVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sDiaChi, sSDT);
		B.push_back(BB);
	}
	else
	{
		string sKhoaHoc;
		SetTeColor(14);
		cout << "\t\tNhap khoa hoc: ";SetTeColor(11);
		fflush(stdin); getline(cin, sKhoaHoc);
		SetTeColor(15);
		BanDoc *BB = new SinhVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sKhoaHoc);
		B.push_back(BB);
	}
	SetTeColor(10);
	cout << "\t\tTao ban doc thanh cong!\n";
	system("pause");
}
void taoSach(list <Sach> &S)
{
	string sMaSach, sTuaDe, sTacGia, sNXB;
	int nTriGia;
	int nNamPhatHanh;
	int nSoTrang;
	int nN, nT, nNM;
	SetTeColor(14);
	cout << "\t\tNhap ma sach: ";SetTeColor(11);
	fflush(stdin); getline(cin, sMaSach);
	for(list <Sach>::iterator p = S.begin(); p != S.end(); p++)
	{
		while(p->getMaSach() == sMaSach)
		{
			SetTeColor(12);
			cout << "\t\tMa sach da ton tai!!!\n";SetTeColor(14);
			cout <<"\t\tHay nhap lai: ";SetTeColor(11);
			fflush(stdin); getline(cin, sMaSach);
		}
	}
	SetTeColor(14);
	cout << "\t\tNhap tua de: ";SetTeColor(11);
	fflush(stdin); getline(cin, sTuaDe);
	SetTeColor(14);
	cout << "\t\tNhap tac gia: ";SetTeColor(11);
	fflush(stdin); getline(cin, sTacGia);
	SetTeColor(14);
	cout << "\t\tNhap nha xuat ban: ";SetTeColor(11);
	fflush(stdin);getline(cin, sNXB);
	SetTeColor(14);
	cout << "\t\tNhap tri gia: ";SetTeColor(11);
	cin >> nTriGia;
	SetTeColor(14);
	cout << "\t\tNhap nam phat hanh: "; SetTeColor(11);
	cin >> nNamPhatHanh;
	SetTeColor(14);
	cout << "\t\tNhap so trang: "; SetTeColor(11);
	cin >> nSoTrang;
	string sNTN;
	SetTeColor(14);
	cout << "\t\tNhap ngay thang nam nhap kho: ";SetTeColor(11);
	fflush(stdin); getline(cin, sNTN);
	nN = chuanHoaNgayThangNam(sNTN); nT = chuanHoaNgayThangNam(sNTN); nNM = chuanHoaNgayThangNam(sNTN);
	Date NgayNhapKho(nN, nT, nNM);
	SetTeColor(15);
	Sach SS(sMaSach, sTuaDe, sTacGia, sNXB, nTriGia, nNamPhatHanh, nSoTrang, NgayNhapKho, 0);
	S.push_back(SS);
	SetTeColor(10);
	cout << "\t\tTao sach thanh cong!\n";
	system("pause");
}
void taoPhieuMuon(list <Sach> &S, list <BanDoc*> B, list <PhieuMuon> &P)
{
	time_t t = time(0);
	struct tm *Now = localtime(&t);
	string sMaSach, sMaBanDoc;
	int nN, nT, nNM;
	nN = Now->tm_mday;
	nT = Now->tm_mon + 1;
	nNM = Now->tm_year + 1900;
	SetTeColor(14);
	cout << "\t\tNhap ma sach: "; SetTeColor(11);
	fflush(stdin);
	getline(cin, sMaSach);
	while(!kTraMaSach(S, sMaSach) || tinhTrangSach(S, sMaSach) != 0)
	{
		SetTeColor(12);
		if(!kTraMaSach(S, sMaSach))
			cout << "\t\tMa sach khong ton tai!\n";
		else
		{
			SetTeColor(10);
			cout << "\t\tSach da duoc muon!\n";SetTeColor(14);		
		}
		cout << "\t\tHay nhap lai: ";SetTeColor(11); fflush(stdin);
		getline(cin, sMaSach);
	}
	SetTeColor(14);
	cout << "\t\tNhap ma ban doc: ";SetTeColor(11);
	getline(cin, sMaBanDoc);
	while(!kTraMaBanDoc(B, sMaBanDoc))
	{
		SetTeColor(12);
		cout << "\t\tMa ban doc khong ton tai!!!\n";SetTeColor(14);
		cout <<"\t\tHay nhap lai: ";SetTeColor(11);
		getline(cin, sMaBanDoc);
	}
	SetTeColor(11);
	Date NgayMuon(nN, nT, nNM);
	int nSTTPhieuMuon = PhieuMuon::getTongPM() + 1;
	PhieuMuon PP(nSTTPhieuMuon, sMaBanDoc, sMaSach, NgayMuon, 1);
	SetTeColor(15);
	P.push_back(PP);
	capNhatTinhTrangSach(S, sMaSach, nSTTPhieuMuon);
	SetTeColor(10);
	cout << "\t\tTao phieu muon thanh cong!\n";
	system("pause");
}
void capNhatTinhTrangSach(list <Sach> &S, string sMaSach, int nTinhTrang)
{
	for(list <Sach>::iterator p = S.begin(); p != S.end(); p++)
	{
		if(p->getMaSach() == sMaSach)
		{
			p->setTinhTrang(nTinhTrang);
			return;
		}
	}
}
bool kTraMaBanDoc(list <BanDoc*> B, string sMaBanDoc)
{
	while(!B.empty())
	{
		if(B.front()->getMaBanDoc() == sMaBanDoc)
			return true;
		else
			B.pop_front();
	}
	return false;
}
int tinhTrangSach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
			return S.front().getTinhTrang();
		else
			S.pop_front();
	}
	return -1;
}
bool kTraMaSach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
			return true;
		S.pop_front();
	}
	return false;
}
void dangNhap(list <TaiKhoan> T)
{
	int nLTK = 3;
	string sTK, sMK;
	SetTeColor(10);
	cout << "\t\tDang nhap de su dung chuc nang quan li!\n";SetTeColor(14);
	cout << "\t\tUsername: ";
a:
	SetTeColor(11);
	fflush(stdin); getline(cin, sTK);
	for(list <TaiKhoan>::iterator p = T.begin(); p != T.end(); p++)
	{
		if(p->getTaiKhoan() == sTK)
		{
			SetTeColor(14);
			cout << "\t\tPassword: ";SetTeColor(11);
			sMK = passwordInput(10);
			int nL = 3;
			while(sMK != p->getMatKhau())
			{
				nL--;
				if ( nL == 0)
				{
					cout << "\n\tBan da nhap sai qua so lan!!\n";
					Sleep(1500);
					exit(0);
				}
				SetTeColor(12);
				cout << "\t\tSai Mat Khau !!!!!\n";
				cout <<"\t\tLuu y: Ban con " << nL <<" lan nhap!!!!!\n";
				SetTeColor(14);
				cout <<"\t\tNhap lai Mat Khau: ";
				SetTeColor(11);
				sMK = passwordInput(10);
			}
			return;
		}
	}
	nLTK--;
	if(nLTK > 0)
	{
		SetTeColor(12);
		cout <<"\t\tKhong tim thay tai khoan!!!\n";SetTeColor(14);
		cout <<"\t\tNhap lai: ";
		goto a;
	}
	else
	{
		cout << "\n\tBan da nhap sai qua so lan!!\n";
		Sleep(1500);
		exit(0);
	}
}
void outputBanDoc(list <BanDoc*> B)
{
	string sMaBanDocCanTim;
	SetTeColor(14);
	cout << "\t\tNhap ma ban doc can tim: ";SetTeColor(11);
	fflush(stdin);
	getline(cin, sMaBanDocCanTim);
	while(!B.empty())
	{
		if(sMaBanDocCanTim == B.front()->getMaBanDoc())
		{
			SetTeColor(11);
			B.front()->output();
			system("pause");
			return;
		}
		B.pop_front();
	}
	SetTeColor(12);
	cout << "\t\tKhong tim thay ma ban doc tuong ung!\n";
	system("pause");
}
void outputSachConLai(list <Sach> S)
{
	SetTeColor(11);
	cout << "\n\t\tCac sach con lai trong thu vien:\n\n";SetTeColor(15);
	while(!S.empty())
	{
		if(S.front().getTinhTrang() == 0)
		{
			output1Sach(S.front());
		}
		S.pop_front();
	}
}
void outputTatCaSach(list <Sach> S)
{
	SetTeColor(11);
	while(!S.empty())
	{
		output1Sach(S.front());
		S.pop_front();
	}
}
void ghiSach(list <Sach> S)
{
	ofstream ofile;
	ofile.open("Sach.dat");
	list <Sach>::iterator p = S.begin();
	while(p != S.end())
	{
		ofile << p->getMaSach() << '#';
		ofile << p->getTuaDe() << '#';
		ofile << p->getTacGia() << '#';
		ofile << p->getNXB() << '#';
		ofile << p->getTriGia() << '#';
		ofile << p->getNamPhatHanh() << '#';
		ofile << p->getSoTrang() << '#';
		ofile << p->getNgayNhapKho() << '/';
		ofile << p->getThangNhapKho() << '/';
		ofile << p->getNamNhapKho() << '#';
		ofile << p->getTinhTrang();
		p++;
		if(p != S.end())
			ofile << endl;
	}
	ofile.close();
}
void ghiBanDoc(list <BanDoc*> B)
{
	ofstream ofile;
	ofile.open("BanDoc.dat");
	ofile << "";
	ofile.close();
	while(!B.empty())
	{
		ofile.open("BanDoc.dat", ios::app);
		ofile << B.front()->getMaBanDoc() << '#';
		ofile << B.front()->getNgayDangKi() << '/';
		ofile << B.front()->getThangDangKi() << '/';
		ofile << B.front()->getNamDangKi() << '#';
		ofile << B.front()->getHoTen() << '#';
		ofile << B.front()->getKhoa() << '#';
		ofile << B.front()->getType() << '|';
		ofile.close();
		B.front()->ghiThongTin();
		B.pop_front();
		if(!B.empty())
		{
			ofile.open("BanDoc.dat", ios::app);
			ofile << endl;
			ofile.close();
		}
	}
}
void ghiPhieuMuon(list <PhieuMuon> P)
{
	ofstream ofile;
	ofile.open("PhieuMuon.dat");
	list <PhieuMuon>::iterator p = P.begin();
	while(p != P.end())
	{
		ofile << p->getSTTPM() << '#';
		ofile << p->getMaBanDoc() << '#';
		ofile << p->getMaSach() << '#';
		ofile << p->getNgayMuon() << '/';
		ofile << p->getThangMuon() << '/';
		ofile << p->getNamMuon() << '#';
		ofile << p->getTrangThai();
		p++;
		if(p != P.end())
			ofile << endl;
	}
	ofile.close();
}
void docTaiKhoan(list <TaiKhoan> &T)
{
	ifstream ifile;
	ifile.open("TaiKhoan.dat");
	while(!ifile.eof())
	{
		string sUsername, sPassword;
		getline(ifile, sUsername, '#');
		getline(ifile, sPassword, '\n');
		TaiKhoan TT(sUsername, sPassword);
		T.push_back(TT);
	}
	ifile.close();
}
void docPhieuMuon(list <PhieuMuon> &P)
{
	ifstream ifile;
	ifile.open("PhieuMuon.dat");
	while(!ifile.eof())
	{
		int nSTTPhieuMuon, nTrangThai;
		string sMaBanDoc, sMaSach;
		ifile >> nSTTPhieuMuon; ifile.ignore(1, '#');
		getline(ifile, sMaBanDoc, '#');
		getline(ifile, sMaSach, '#');
		int nN, nT, nNM;
		ifile >> nN; ifile.ignore(1, '/');
		ifile >> nT; ifile.ignore(1, '/');
		ifile >> nNM; ifile.ignore(1, '#');
		Date NgayMuon(nN, nT, nNM);
		ifile >> nTrangThai; ifile.ignore(1, '\n');
		PhieuMuon PP(nSTTPhieuMuon, sMaBanDoc, sMaSach, NgayMuon, nTrangThai);
		P.push_back(PP);
	}
	ifile.close();
}
void docBanDoc(list <BanDoc*> &B)
{
	ifstream ifile;
	ifile.open("BanDoc.dat");
	while(!ifile.eof())
	{
		string sMaBanDoc;
		string sHoTen, sKhoa;
		int nType;
		getline(ifile, sMaBanDoc, '#');
		int nN, nT, nNM;
		ifile >> nN; ifile.ignore(1, '/');
		ifile >> nT; ifile.ignore(1, '/');
		ifile >> nNM; ifile.ignore(1, '#');
		Date NgayDangKi(nN, nT, nNM);
		getline(ifile, sHoTen, '#');
		getline(ifile, sKhoa, '#');
		ifile >> nType; ifile.ignore(1, '|');
		if(nType == 1)
		{
			string sDiaChi, sSDT;
			getline(ifile, sDiaChi, '#');
			getline(ifile, sSDT, '\n');
			BanDoc *BB = new GiaoVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sDiaChi, sSDT);
			B.push_back(BB);
		}
		else
		{
			string sKhoaHoc;
			getline(ifile, sKhoaHoc, '\n');
			BanDoc *BB = new SinhVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sKhoaHoc);
			B.push_back(BB);
		}
	}
	ifile.close();
}
void docSach(list <Sach> &S)
{
	ifstream ifile;
	ifile.open("Sach.dat");
	while(!ifile.eof())
	{
		string sMaSach, sTuaDe, sTacGia, sNXB;
		int nTriGia;
		int nNamPhatHanh;
		int nSoTrang;
		int nTinhTrang;
		getline(ifile, sMaSach, '#');
		getline(ifile, sTuaDe, '#');
		getline(ifile, sTacGia, '#');
		getline(ifile, sNXB, '#');
		ifile >> nTriGia; ifile.ignore(1, '#');
		ifile >> nNamPhatHanh; ifile.ignore(1, '#');
		ifile >> nSoTrang; ifile.ignore(1, '#');
		int nN, nT, nNM;
		ifile >> nN; ifile.ignore(1, '/');
		ifile >> nT; ifile.ignore(1, '/');
		ifile >> nNM; ifile.ignore(1, '#');
		Date NgayNhapKho(nN, nT, nNM);
		ifile >> nTinhTrang; ifile.ignore(1, '\n');
		Sach SS(sMaSach, sTuaDe, sTacGia, sNXB, nTriGia, nNamPhatHanh, nSoTrang, NgayNhapKho, nTinhTrang);
		S.push_back(SS);
	}
	ifile.close();
}
void SetTeColor(WORD color)
{ 
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0; wAttributes |= color;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
string passwordInput(unsigned maxLength)
{
	string pw;
	for (char c; (c = _getch()); )
	{
		if (c == '\n' || c == '\r') { //phím enter
			cout << "\n";
			break;
		}
		else if (c == '\b') { //phím backspace
			cout << "\b \b";
			if (!pw.empty()) pw.erase(pw.size() - 1);
		}
		else if (c == -32) { //phím mũi tên
			_getch(); //bỏ qua kí tự tiếp theo (hướng mũi tên)
		}
		else if (isprint(c) && pw.size() < maxLength) { //isprint tức là chỉ nhận những ký tự in ra được (có tính khoảng trắng)
			cout << '*';
			pw += c;
		}
	}
	return pw;
}