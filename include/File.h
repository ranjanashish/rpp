/*
 * File.h
 *
 *  Created on: 08-Sep-2013
 *      Author: aranjan
 */

#ifndef FILE_H_
#define FILE_H_

#include <ctime>

#include <boost/filesystem.hpp>

/**
 * @brief Abstract base class for all the available file types:
 *        [1] Directory
 *        [2] Regular File
 *        [3] Symbolic Link
 */
class File
{
public:
	File();
	virtual ~File();

	virtual bool create() = 0;
	virtual bool copy(boost::filesystem::path)   = 0;
	virtual bool move(boost::filesystem::path)   = 0;
	virtual bool remove() = 0;
	virtual bool purge()  = 0;
protected:
	boost::filesystem::path absolute_path;

	// data members arranged in same sequence as in the output of "ls -l"
	char file_permission[10];
	std::string user;				// owner (user) of the file
	std::string group;				// group of the file
	std::time_t last_modified_time;
	std::string file_name;
};

/**
 * @brief Directory class to represent a directory
 */
class Directory : public File
{
public:
	Directory();
	Directory(std::string);
	virtual ~Directory();

	virtual bool create();
	virtual bool copy(boost::filesystem::path);
	virtual bool move(boost::filesystem::path);
	virtual bool remove();
	virtual bool purge();
};

/**
 * @brief RegularFile class to represent a regular file
 */
class RegularFile : public File
{
public:
	RegularFile();
	RegularFile(std::string);
	virtual ~RegularFile();

	virtual bool create();
	virtual bool copy(boost::filesystem::path);
	virtual bool move(boost::filesystem::path);
	virtual bool remove();
	virtual bool purge();
};

/**
 * @brief SymbolicLink class to represent a symbolic link
 */
class SymbolicLink : public File
{
public:
	SymbolicLink();
	SymbolicLink(std::string);
	virtual ~SymbolicLink();

	virtual bool create();
	virtual bool copy(boost::filesystem::path);
	virtual bool move(boost::filesystem::path);
	virtual bool remove();
	virtual bool purge();
};

#endif /* FILE_H_ */
