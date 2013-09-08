/*
 * FileBrowser.cpp
 *
 *  Created on: 08-Sep-2013
 *      Author: aranjan
 */

#include "../include/FileBrowser.h"

FileBrowser::FileBrowser()
    : fbw(new FileBrowserWindow)
    , current_working_directory("~")
{
    fbw->showWelcomeScreen();
}

FileBrowser::~FileBrowser()
{
    delete fbw;
}
