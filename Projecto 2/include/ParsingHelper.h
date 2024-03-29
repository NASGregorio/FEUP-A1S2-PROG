#ifndef PARSINGHELPER_H
#define PARSINGHELPER_H

#include <fstream>
#include <istream>
#include <string>
#include <vector>

namespace ParsingHelper
{

int iStreamSplitFixedSize(std::istream &target, std::vector<std::string> &container, char delimiter, size_t expectedSize);

int iStreamSplitUntilMarker(std::istream &target, std::vector<std::string> &container, char delimiter, size_t expectedSize, std::string marker);

int stringSplit(std::string &target, std::vector<std::string> &container, char delimiter, size_t expectedSize);

int openFileRead(std::ifstream &inputFile, std::string agencyFileName);

int openFileWrite(std::ofstream &outputFile, std::string agencyFileName);

std::string removeLeadingTraillingWhitespaces(std::string target);

bool safeStoi(int& num, const std::string& s, int lowerBound, int upperBound);

bool safeStoul(unsigned& num, const std::string& s, unsigned lowerBound, unsigned upperBound);

bool safeStod(double& num, const std::string& s, double lowerBound, double upperBound);

} // namespace ParsingHelper

#endif