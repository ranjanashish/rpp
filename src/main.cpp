#include <string>
#include <vector>

#include <ncurses.h>

#include <boost/filesystem.hpp>

class FileBrowser
{
public:
    FileBrowser();
    ~FileBrowser();

    std::string getCurrentWorkingDirectory();
    void setCurrentWorkingDirectory(std::string directory);
private:
    class FileBrowserWindow
    {
    public:
        FileBrowserWindow();
        ~FileBrowserWindow();

        void showWelcomeScreen();
    private:
        int x, y;
    };

    FileBrowserWindow *fbw;
    std::string current_working_directory;
    std::string current_working_file;
};

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

int main(int argc, char *argv[])
{
    FileBrowser *fb = new FileBrowser();

    getch();
    delete fb;
    return 0;
}

