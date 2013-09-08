/*
 * File.cpp
 *
 *  Created on: 08-Sep-2013
 *      Author: aranjan
 */

#include <boost/filesystem.hpp>

#include "../include/File.h"

Directory::Directory(std::string p)
    : absolute_path(p)
    , file_name(absolute_path.filename().string())
{
}

virtual bool Directory::remove()
{
    bool status;
    return status;
}

virtual bool Directory::purge()
{
    bool status;
    status = boost::filesystem::remove_all(absolute_path);

    return status;
}

virtual bool RegularFile::purge()
{
    bool status;
    status = boost::filesystem::remove(absolute_path);

    return status;
}
