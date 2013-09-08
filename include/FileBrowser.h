/*
 * FileBrowser.h
 *
 *  Created on: 08-Sep-2013
 *      Author: aranjan
 */

#ifndef FILEBROWSER_H_
#define FILEBROWSER_H_

class FileBrowser
{
public:
    FileBrowser();
    ~FileBrowser();

    std::string getCurrentWorkingDirectory();
    void setCurrentWorkingDirectory(std::string directory);
private:
    class FileBrowserWindow;

    FileBrowserWindow *fbw;
    std::string current_working_directory; // the current directory of which the browser needs to show the contents of
    std::string current_working_file; 	   // the current file on which the user has in selection at the moment

    // The details of the current file
    // [1] is_directory - bool
    // [2] file_size - int
    // [3] file_extension - std::string
    // [4]
    std::string current_working_file_details[4];
};

#endif /* FILEBROWSER_H_ */
