#include <stdio.h>
#include <stdlib.h>
	
	void CN1_KiemTraSoNguyen ();
	void CN2_UocChungBoiChung ();
	void CN3_TinhTienKaroke ();
	void CN4_TinhTienDien ();
	void CN5_ChucNangDoiTien ();
	void CN6_TinhLaiXuatNganHang ();
	void CN7_VayTienMuaXe ();
	void CN8_XapXepThongTinSinhVien ();
	void CN9_XayDungGameFPOLY_LOTT ();
	void CN10_TinhToanPhanSo ();
	
	int main () {
		int chon ;		
		printf("Moi chon mot chuc nang\n");
		printf("1.KiemTraSoNguyen\n");
		printf("2.UocChungBoiChung\n");
		printf("3.TinhTienKaroke\n ");
		printf("4.TinhTienDien\n");
		printf("5.ChucNangDoiTien\n");
		printf("6.CN6_TinhLaiXuatNganHang\n");
		printf("7.VayTienMuaXe\n");
		printf("8.XapXepThongTinSinhVien\n");
		printf("9.CN9_XayDungGameFPOLY_LOTT\n");
		printf("10.TinhToanPhanSo\n");
		printf("hay chon mot chuc nang:");
}
	int main () {
		switch (chon) {
			case 1 :
				CN1_KiemTraSoNguyen ();
				break;
			case 2 :
				CN2_UocChungBoiChung ();
				break;
			case 3 :
				CN3_TinhTienKaroke ();
				break;
			case 4 :
				CN4_TinhTienDien ();
				break;
			case 5 :
				CN5_ChucNangDoiTien ();
				break;
			case 6 :
				CN6_TinhLaiXuatNganHang ();
				break;
			case 7 :
				CN7_VayTienMuaXe ();
				break;
			case 8 :
				CN8_XapXepThongTinSinhVien ();
				break;
			case 9 :
				CN9_XayDungGameFPOLY_LOTT ();
				break;
			case 10 :
				CN10_TinhToanPhanSo ();
				break;
			default:
				printf("hay chon chuc nang:");
		}
		}
	}
	void CN1_KiemTraSoNguyen () {
		printf(" day la chuong trinh kiem tra so nguyen :");
	}
	
	void CN2_UocChungBoiChung () {
		printf("day la chuong trinh tinh uoc chung boi chung:");
	}
	
	void CN3_TinhTienKaroke () {
		printf("day la chuong trinh tinh tien karaoke:");
	}
	
	void CN4_TinhTienDien () {
		printf(" day la truong trinh tinh tien dien:");
	}
	
	void CN5_ChucNangDoiTien () {
		printf("day la truong trinh doi tien :");
	}
	
	void CN6_TinhLaiXuatNganHang () {
		printf("day la truong trinh tinh lai xuat ngan hang : ");
	}
	void CN7_VayTienMuaXe () {
		printf("day la chuong trinh vay tien mua xe : ");	
	}
	void CN8_XapXepThongTinSinhVien () {
		printf("day la chuong trinh xap xep thong tin sinh vien : ");
	}
	void CN9_XayDungGameFPOLY_LOTT () {
		printf("day la chuong trinh xay dung game FPOLY-LOTT: ");
	}
	void CN10_TinhToanPhanSo () {
		printf("day la chuong trinh tinh toan phan so:");
	}

