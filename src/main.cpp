#include <string>
#include <thread>
#include <vector>

#include <ncurses.h>

#include <boost/filesystem.hpp>

#include "../include/FileBrowser.h"

int main(int argc, char *argv[])
{
    FileBrowser *fb = new FileBrowser();

    getch();
    delete fb;
    return 0;
}
