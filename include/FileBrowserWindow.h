/*
 * FileBrowserWindow.h
 *
 *  Created on: 08-Sep-2013
 *      Author: aranjan
 */

#ifndef FILEBROWSERWINDOW_H_
#define FILEBROWSERWINDOW_H_

#include "FileBrowser.h"

class FileBrowser::FileBrowserWindow
{
public:
	FileBrowserWindow();
	~FileBrowserWindow();

	void showWelcomeScreen();
	void showContentsOfCurrentDirectory();
private:
	int x, y;
};


#endif /* FILEBROWSERWINDOW_H_ */
