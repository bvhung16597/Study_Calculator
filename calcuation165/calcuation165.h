
#include <QtWidgets/QMainWindow>
#include "ui_calcuation165.h"
#include "qmath.h"  

namespace Ui {
	class calcuation165;
}


class calcuation165 : public QMainWindow
{
	Q_OBJECT


public:
	calcuation165(QWidget* parent = nullptr);
	~calcuation165();
	void on_pushButton_0_clicked();
	void on_pushButton_1_clicked();
	void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_4_clicked();
	void on_pushButton_5_clicked();
	void on_pushButton_6_clicked();
	void on_pushButton_7_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_pushButton_plus_clicked();
	void on_pushButton_minus_clicked();
	void on_pushButton_multiply_clicked();
	void on_pushButton_divide_clicked();
	void on_pushButton_equals_clicked();
	void on_pushButton_point_clicked();
	void on_pushButton_clear_clicked();
	void on_pushButton_negative_clicked();
	void on_pushButton_sqrt_clicked();
	void on_pushButton_squared_clicked();


	// 사용 함수 구현
	void on_pushButton_clicked_number(QString number);
	void on_pushButton_clicked_operator(int oper);

private:

	Ui::calcuation165Class ui;
	int current_op;
	int prev_op;
	bool flag_operator;
	bool flag_equal;
	QString current_input;  //현재 입력값이 저장변수선언
	QString prev_input;     // 이전 입력값이 저장변수선언
	QString current_formula; //현재 공식값이 저자연수선언
	QString lineEdit;
};