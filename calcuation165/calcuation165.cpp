#include "calcuation165.h"	
#include "QPushButton"
		
calcuation165::calcuation165(QWidget* parent) : QMainWindow(parent)
		{
			ui.setupUi(this);
			ui.lineEdit->setAlignment(Qt::AlignRight);
			ui.lineEdit->setReadOnly(true);

			connect(ui.pushButton_0, &QPushButton::clicked, this, &calcuation165::on_pushButton_0_clicked);
			connect(ui.pushButton_1, &QPushButton::clicked, this, &calcuation165::on_pushButton_1_clicked);
			connect(ui.pushButton_2, &QPushButton::clicked, this, &calcuation165::on_pushButton_2_clicked);
			connect(ui.pushButton_3, &QPushButton::clicked, this, &calcuation165::on_pushButton_3_clicked);
			connect(ui.pushButton_4, &QPushButton::clicked, this, &calcuation165::on_pushButton_4_clicked);
			connect(ui.pushButton_5, &QPushButton::clicked, this, &calcuation165::on_pushButton_5_clicked);
			connect(ui.pushButton_6, &QPushButton::clicked, this, &calcuation165::on_pushButton_6_clicked);
			connect(ui.pushButton_7, &QPushButton::clicked, this, &calcuation165::on_pushButton_7_clicked);
			connect(ui.pushButton_8, &QPushButton::clicked, this, &calcuation165::on_pushButton_8_clicked);
			connect(ui.pushButton_9, &QPushButton::clicked, this, &calcuation165::on_pushButton_9_clicked);

			connect(ui.pushButton_plus, &QPushButton::clicked, this, &calcuation165::on_pushButton_plus_clicked);
			connect(ui.pushButton_minus, &QPushButton::clicked, this, &calcuation165::on_pushButton_minus_clicked);
			connect(ui.pushButton_multiply, &QPushButton::clicked, this, &calcuation165::on_pushButton_multiply_clicked);
			connect(ui.pushButton_divide, &QPushButton::clicked, this, &calcuation165::on_pushButton_divide_clicked);
			connect(ui.pushButton_equals, &QPushButton::clicked, this, &calcuation165::on_pushButton_equals_clicked);
			connect(ui.pushButton_clear, &QPushButton::clicked, this, &calcuation165::on_pushButton_clear_clicked);
			connect(ui.pushButton_sqrt, &QPushButton::clicked, this, &calcuation165::on_pushButton_sqrt_clicked);
			connect(ui.pushButton_point, &QPushButton::clicked, this, &calcuation165::on_pushButton_point_clicked);
			connect(ui.pushButton_negative, &QPushButton::clicked, this, &calcuation165::on_pushButton_negative_clicked);
			connect(ui.pushButton_squared, &QPushButton::clicked, this, &calcuation165::on_pushButton_squared_clicked);
		}	
		calcuation165::~calcuation165()
		{
		}
		void calcuation165::on_pushButton_clicked_number(QString number)
		{
			//aefawef
			if (flag_operator || flag_equal)
			{
				ui.lineEdit->setText("");
				flag_operator = false;
				flag_equal = false;
			}
			current_input += number;
			ui.lineEdit->setText(current_input);
		}
		void calcuation165::on_pushButton_0_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "0");

		}
		void calcuation165::on_pushButton_1_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "1");

		}
		void calcuation165::on_pushButton_2_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "2");

		}
		void calcuation165::on_pushButton_3_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "3");

		}
		void calcuation165::on_pushButton_4_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "4");

		}
		void calcuation165::on_pushButton_5_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "5");

		}
		void calcuation165::on_pushButton_6_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "6");

		}
		void calcuation165::on_pushButton_7_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "7");

		}
		void calcuation165::on_pushButton_8_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "8");

		}
		void calcuation165::on_pushButton_9_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "9");

		}
		void calcuation165::on_pushButton_clear_clicked()
		{
			ui.lineEdit->setText("");
		}
		void calcuation165::on_pushButton_plus_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "+");
		}
		void calcuation165::on_pushButton_minus_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "-");
		}
		void calcuation165::on_pushButton_multiply_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "*");
		}
		void calcuation165::on_pushButton_divide_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + "/");
		}
		void calcuation165::on_pushButton_negative_clicked()
		{
			if (current_formula == "")
			{
				QString temp = ui.lineEdit->text();
				on_pushButton_clear_clicked();
				current_input = QString::number(temp.toDouble() * (-1));
				ui.lineEdit->setText(current_input);
				flag_operator = false;
				flag_equal = false;
			}
			else
			{
				on_pushButton_equals_clicked();
				on_pushButton_negative_clicked();
			}
		}
		void calcuation165::on_pushButton_point_clicked()
		{
			ui.lineEdit->setText(ui.lineEdit->text() + ".");
			if (current_input.contains("."))
			{
				on_pushButton_clicked_number(".");
			}
		}
		void calcuation165::on_pushButton_sqrt_clicked()
		{
			QString temp = ui.lineEdit->text();
			on_pushButton_clicked_number("");
			current_input = QString::number(sqrt(temp.toDouble()));
			on_pushButton_clicked_number("");
	}
		void calcuation165::on_pushButton_squared_clicked()
		{
			QString temp = ui.lineEdit->text();
			on_pushButton_clicked_number("");
			current_input = QString::number(temp.toDouble() * temp.toDouble());
			ui.lineEdit->setText(current_input);
			on_pushButton_clicked_number("");
			}
		void calcuation165::on_pushButton_equals_clicked()
		{

		}

