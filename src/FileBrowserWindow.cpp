/*
 * FileBrowserWindow.cpp
 *
 *  Created on: 08-Sep-2013
 *      Author: aranjan
 */

#include "ncurses.h"

#include "../include/FileBrowserWindow.h"

FileBrowser::FileBrowserWindow::FileBrowserWindow()
{
    initscr();
    getmaxyx(stdscr, y, x);
}

FileBrowser::FileBrowserWindow::~FileBrowserWindow()
{
    endwin();
}

void FileBrowser::FileBrowserWindow::showWelcomeScreen()
{
    move(y / 2, x / 2);
    printw("WELCOME");
    refresh();
}

void FileBrowser::FileBrowserWindow::showContentsOfCurrentDirectory()
{
	std::vector<boost::filesystem::path> contents;
}
