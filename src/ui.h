#ifndef UI_H_
#define UI_H_

#ifdef __cplusplus

#include <QWidget>

namespace Ui {
	class win_main;
}

class MainWin : public QWidget {
	Q_OBJECT

private:
	Ui::win_main *ui;

public:
	explicit MainWin(QWidget *par = 0);
	~MainWin();

	void updateui();

public slots:
	void spnav_input();
};

extern MainWin *mainwin;

extern "C" {
#endif

void update_ui(void);
void errorbox(const char *msg);

#ifdef __cplusplus
}
#endif

#endif	/* UI_H_ */
