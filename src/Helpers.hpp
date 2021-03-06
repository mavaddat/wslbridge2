/* 
 * This file is part of wslbridge2 project.
 * Licensed under the terms of the GNU General Public License v3 or later.
 * Copyright (C) 2019 Biswapriyo Nath.
 */

#ifndef HELPERS_HPP
#define HELPERS_HPP

std::wstring mbsToWcs(const std::string &s);
std::string wcsToMbs(const std::wstring &s, bool emptyOnError=false);
std::wstring dirname(const std::wstring &path);
std::wstring getModuleFileName(void);
bool pathExists(const std::wstring &path);
wchar_t lowerDrive(wchar_t ch);
std::wstring findSystemProgram(const wchar_t *name);
std::wstring normalizePath(const std::wstring &path);
std::wstring findBackendProgram(const std::string &customBackendPath, const wchar_t *const backendName);
void appendWslArg(std::wstring &out, const std::wstring &arg);
std::vector<char> readAllFromHandle(HANDLE h);

#endif /* HELPERS_HPP */
