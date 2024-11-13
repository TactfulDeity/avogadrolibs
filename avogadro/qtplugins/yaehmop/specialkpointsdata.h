/*******************************************************************************
  This source file is part of the Avogadro project.
  This source code is released under the 3-Clause BSD License, (see "LICENSE").
*******************************************************************************/

#ifndef AVOGADRO_QTPLUGINS_YAEHMOP_SPECIALKPOINTSDATA_H
#define AVOGADRO_QTPLUGINS_YAEHMOP_SPECIALKPOINTSDATA_H

namespace Avogadro::QtPlugins {

// There are 230 of these (not including the first value, which is null)
// One point for each space group.
// If there are multiple ways to express a space group's special k points
// depending on some conditions like if a > b or a < b, there is a #
// separating the different conditions
const char* special_k_points[] = {
  "",
  "GM 0 0 0", // 1
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,X 0.5 0 0,V 0.5 0.5 0,U 0.5 0 0.5,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 2
  "GM 0 0 0,Z 0 0.5 0,B 0 0 0.5,D 0 0.5 0.5,Y 0.5 0 0,C 0.5 0.5 0,A -0.5 0 "
  "0.5,E -0.5 0.5 0.5", // 3
  "GM 0 0 0,Z 0 0.5 0,B 0 0 0.5,D 0 0.5 0.5,Y 0.5 0 0,C 0.5 0.5 0,A -0.5 0 "
  "0.5,E -0.5 0.5 0.5",                           // 4
  "GM 0 0 0,Y 0.5 0.5 0,A 0 0 0.5,M 0.5 0.5 0.5", // 5
  "GM 0 0 0,B 0 0 0.5,Y 0.5 0 0,A -0.5 0 0.5,Z 0 0.5 0,C 0.5 0.5 0,D 0 0.5 "
  "0.5,E -0.5 0.5 0.5", // 6
  "GM 0 0 0,B 0 0 0.5,Y 0.5 0 0,A -0.5 0 0.5,Z 0 0.5 0,C 0.5 0.5 0,D 0 0.5 "
  "0.5,E -0.5 0.5 0.5",                           // 7
  "GM 0 0 0,Y 0.5 0.5 0,A 0 0 0.5,M 0.5 0.5 0.5", // 8
  "GM 0 0 0,Y 0.5 0.5 0,A 0 0 0.5,M 0.5 0.5 0.5", // 9
  "GM 0 0 0,Z 0 0.5 0,B 0 0 0.5,Y 0.5 0 0,C 0.5 0.5 0,D 0 0.5 0.5,A -0.5 0 "
  "0.5,E -0.5 0.5 0.5", // 10
  "GM 0 0 0,Z 0 0.5 0,B 0 0 0.5,Y 0.5 0 0,C 0.5 0.5 0,D 0 0.5 0.5,A -0.5 0 "
  "0.5,E -0.5 0.5 0.5",                                                 // 11
  "GM 0 0 0,Y 0.5 0.5 0,A 0 0 0.5,M 0.5 0.5 0.5,V 0.5 0 0,L 0.5 0 0.5", // 12
  "GM 0 0 0,Z 0 0.5 0,B 0 0 0.5,Y 0.5 0 0,C 0.5 0.5 0,D 0 0.5 0.5,A -0.5 0 "
  "0.5,E -0.5 0.5 0.5", // 13
  "GM 0 0 0,Z 0 0.5 0,B 0 0 0.5,Y 0.5 0 0,C 0.5 0.5 0,D 0 0.5 0.5,A -0.5 0 "
  "0.5,E -0.5 0.5 0.5",                                                 // 14
  "GM 0 0 0,Y 0.5 0.5 0,A 0 0 0.5,M 0.5 0.5 0.5,V 0.5 0 0,L 0.5 0 0.5", // 15
  "GM 0 0 0,X 0.5 0 0,Y 0 0.5 0,Z 0 0 0.5,S 0.5 0.5 0,U 0.5 0 0.5,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 16
  "GM 0 0 0,X 0.5 0 0,Y 0 0.5 0,Z 0 0 0.5,S 0.5 0.5 0,U 0.5 0 0.5,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 17
  "GM 0 0 0,X 0.5 0 0,Y 0 0.5 0,Z 0 0 0.5,S 0.5 0.5 0,U 0.5 0 0.5,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 18
  "GM 0 0 0,X 0.5 0 0,Y 0 0.5 0,Z 0 0 0.5,S 0.5 0.5 0,U 0.5 0 0.5,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 19
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 20
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 21
  "GM 0 0 0,T 1 0.5 0.5,Z 0.5 0.5 0,Y 0.5 0 0.5#GM 0 0 0,T 0 0.5 0.5,Z 0.5 0.5 "
  "1,Y 0.5 0 0.5#GM 0 0 0,T 0 0.5 0.5,Z 0.5 0.5 0,Y 0.5 0 0.5", // 22
  "GM 0 0 0,X 0.5 -0.5 0.5,W 0.25 0.25 0.25,WA -0.25 -0.25 0.75,T 0 0 0.5,R 0 "
  "0.5 0,S 0.5 0 0#GM 0 0 0,X 0.5 0.5 -0.5,W 0.25 0.25 0.25,WA -0.25 -0.25 "
  "0.75,T 0 0 0.5,R 0 0.5 0,S 0.5 0 0", // 23
  "GM 0 0 0,X 0.5 -0.5 0.5,W 0.25 0.25 0.25,WA -0.25 -0.25 0.75,T 0 0 0.5,R 0 "
  "0.5 0,S 0.5 0 0#GM 0 0 0,X 0.5 0.5 -0.5,W 0.25 0.25 0.25,WA -0.25 -0.25 "
  "0.75,T 0 0 0.5,R 0 0.5 0,S 0.5 0 0", // 24
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 25
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 26
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 27
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 28
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 29
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 30
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 31
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 32
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 33
  "GM 0 0 0,Z 0 0 0.5,Y 0 0.5 0,T 0 0.5 0.5,X 0.5 0 0,U 0.5 0 0.5,S 0.5 0.5 "
  "0,R 0.5 0.5 0.5", // 34
  "GM 0 0 0,Z 0 0 0.5,Y 0.5 0.5 0,T 0.5 0.5 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Z 0 0 0.5,Y -0.5 0.5 0,T -0.5 0.5 0.5,S 0 0.5 0,R 0 0.5 0.5", // 35
  "GM 0 0 0,Z 0 0 0.5,Y 0.5 0.5 0,T 0.5 0.5 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Z 0 0 0.5,Y -0.5 0.5 0,T -0.5 0.5 0.5,S 0 0.5 0,R 0 0.5 0.5", // 36
  "GM 0 0 0,Z 0 0 0.5,Y 0.5 0.5 0,T 0.5 0.5 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Z 0 0 0.5,Y -0.5 0.5 0,T -0.5 0.5 0.5,S 0 0.5 0,R 0 0.5 0.5", // 37
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 38
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 39
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 40
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 41
  "GM 0 0 0,Z 0.5 0.5 0,T 1 0.5 0.5,Y 0.5 0 0.5#GM 0 0 0,Z 0.5 0.5 1,T 0 0.5 "
  "0.5,Y 0.5 0 0.5#GM 0 0 0,Z 0.5 0.5 0,T 0 0.5 0.5,Y 0.5 0 0.5", // 42
  "GM 0 0 0,Z 0.5 0.5 0,T 1 0.5 0.5,Y 0.5 0 0.5#GM 0 0 0,Z 0.5 0.5 1,T 0 0.5 "
  "0.5,Y 0.5 0 0.5#GM 0 0 0,Z 0.5 0.5 0,T 0 0.5 0.5,Y 0.5 0 0.5", // 43
  "GM 0 0 0,X 0.5 -0.5 0.5,T 0 0 0.5,W 0.25 0.25 0.25,S 0.5 0 0,R 0 0.5 0#GM 0 "
  "0 0,X 0.5 0.5 -0.5,T 0 0 0.5,W 0.25 0.25 0.25,S 0.5 0 0,R 0 0.5 0", // 44
  "GM 0 0 0,X 0.5 -0.5 0.5,T 0 0 0.5,W 0.25 0.25 0.25,S 0.5 0 0,R 0 0.5 0#GM 0 "
  "0 0,X 0.5 0.5 -0.5,T 0 0 0.5,W 0.25 0.25 0.25,S 0.5 0 0,R 0 0.5 0", // 45
  "GM 0 0 0,X 0.5 -0.5 0.5,T 0 0 0.5,W 0.25 0.25 0.25,S 0.5 0 0,R 0 0.5 0#GM 0 "
  "0 0,X 0.5 0.5 -0.5,T 0 0 0.5,W 0.25 0.25 0.25,S 0.5 0 0,R 0 0.5 0", // 46
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 47
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 48
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 49
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 50
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 51
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 52
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 53
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 54
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 55
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 56
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 57
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 58
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 59
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 60
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 61
  "GM 0 0 0,X 0.5 0 0,Z 0 0 0.5,U 0.5 0 0.5,Y 0 0.5 0,S 0.5 0.5 0,T 0 0.5 "
  "0.5,R 0.5 0.5 0.5", // 62
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 63
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 64
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 65
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 66
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 67
  "GM 0 0 0,Y 0.5 0.5 0,T 0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5#GM 0 0 "
  "0,Y -0.5 0.5 0,T -0.5 0.5 0.5,Z 0 0 0.5,S 0 0.5 0,R 0 0.5 0.5", // 68
  "GM 0 0 0,T 1 0.5 0.5,Z 0.5 0.5 0,Y 0.5 0 0.5,L 0.5 0.5 0.5#GM 0 0 0,T 0 0.5 "
  "0.5,Z 0.5 0.5 1,Y 0.5 0 0.5,L 0.5 0.5 0.5#GM 0 0 0,T 0 0.5 0.5,Z 0.5 0.5 "
  "0,Y 0.5 0 0.5,L 0.5 0.5 0.5", // 69
  "GM 0 0 0,T 1 0.5 0.5,Z 0.5 0.5 0,Y 0.5 0 0.5,L 0.5 0.5 0.5#GM 0 0 0,T 0 0.5 "
  "0.5,Z 0.5 0.5 1,Y 0.5 0 0.5,L 0.5 0.5 0.5#GM 0 0 0,T 0 0.5 0.5,Z 0.5 0.5 "
  "0,Y 0.5 0 0.5,L 0.5 0.5 0.5", // 70
  "GM 0 0 0,X 0.5 -0.5 0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25#GM 0 "
  "0 0,X 0.5 0.5 -0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25", // 71
  "GM 0 0 0,X 0.5 -0.5 0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25#GM 0 "
  "0 0,X 0.5 0.5 -0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25", // 72
  "GM 0 0 0,X 0.5 -0.5 0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25#GM 0 "
  "0 0,X 0.5 0.5 -0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25", // 73
  "GM 0 0 0,X 0.5 -0.5 0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25#GM 0 "
  "0 0,X 0.5 0.5 -0.5,S 0.5 0 0,R 0 0.5 0,T 0 0 0.5,W 0.25 0.25 0.25",  // 74
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 75
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 76
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 77
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 78
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25#GM 0 0 0,M -0.5 0.5 "
  "0.5,X 0 0 0.5,P 0.25 0.25 0.25", // 79
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25#GM 0 0 0,M -0.5 0.5 "
  "0.5,X 0 0 0.5,P 0.25 0.25 0.25",                                     // 80
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 81
  "GM 0 0 0,M 0.5 0.5 -0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,X 0 0 0.5#GM 0 "
  "0 0,M -0.5 0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,X 0 0 0.5",  // 82
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 83
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 84
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 85
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 86
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 87
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0",                  // 88
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 89
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 90
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 91
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 92
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 93
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 94
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 95
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 96
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 97
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0",                  // 98
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 99
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 100
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 101
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 102
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 103
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 104
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 105
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,X 0 0.5 0,R 0 0.5 0.5", // 106
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 107
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 108
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 109
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0",                  // 110
  "GM 0 0 0,A 0.5 0.5 0.5,Z 0 0 0.5,M 0.5 0.5 0,X 0 0.5 0,R 0 0.5 0.5", // 111
  "GM 0 0 0,A 0.5 0.5 0.5,Z 0 0 0.5,M 0.5 0.5 0,X 0 0.5 0,R 0 0.5 0.5", // 112
  "GM 0 0 0,A 0.5 0.5 0.5,Z 0 0 0.5,M 0.5 0.5 0,X 0 0.5 0,R 0 0.5 0.5", // 113
  "GM 0 0 0,A 0.5 0.5 0.5,Z 0 0 0.5,M 0.5 0.5 0,X 0 0.5 0,R 0 0.5 0.5", // 114
  "GM 0 0 0,M 0.5 0.5 0,A 0.5 0.5 0.5,Z 0 0 0.5,X 0 0.5 0,R 0 0.5 0.5", // 115
  "GM 0 0 0,M 0.5 0.5 0,A 0.5 0.5 0.5,Z 0 0 0.5,X 0 0.5 0,R 0 0.5 0.5", // 116
  "GM 0 0 0,M 0.5 0.5 0,A 0.5 0.5 0.5,Z 0 0 0.5,X 0 0.5 0,R 0 0.5 0.5", // 117
  "GM 0 0 0,M 0.5 0.5 0,A 0.5 0.5 0.5,Z 0 0 0.5,X 0 0.5 0,R 0 0.5 0.5", // 118
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 119
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 120
  "GM 0 0 0,M 0.5 0.5 -0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,X 0 0 0.5,N 0 "
  "0.5 0#GM 0 0 0,M -0.5 0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,X 0 0 "
  "0.5,N 0 0.5 0", // 121
  "GM 0 0 0,M 0.5 0.5 -0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,X 0 0 0.5,N 0 "
  "0.5 0#GM 0 0 0,M -0.5 0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,X 0 0 "
  "0.5,N 0 0.5 0",                                                      // 122
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 123
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 124
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 125
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 126
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 127
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 128
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 129
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 130
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 131
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 132
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 133
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 134
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 135
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 136
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 137
  "GM 0 0 0,Z 0 0 0.5,M 0.5 0.5 0,A 0.5 0.5 0.5,R 0 0.5 0.5,X 0 0.5 0", // 138
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 139
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 140
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 141
  "GM 0 0 0,M 0.5 0.5 -0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0#GM 0 0 0,M "
  "-0.5 0.5 0.5,X 0 0 0.5,P 0.25 0.25 0.25,N 0 0.5 0", // 142
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5", // 143
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5", // 144
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5",    // 145
  "GM 0 0 0,T 0.5 0.5 -0.5#GM 0 0 0,T 0.5 0.5 0.5", // 146
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 147
  "GM 0 0 0,T 0.5 0.5 -0.5,L 0 0.5 0,FA 0 0.5 -0.5#GM 0 0 0,T 0.5 0.5 -0.5,L 0 "
  "0.5 0,FB 0.5 0.5 0", // 148
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 149
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 150
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 151
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 152
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 153
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 154
  "GM 0 0 0,T 0.5 0.5 -0.5,FA 0 0.5 -0.5,L 0 0.5 0#GM 0 0 0,T 0.5 0.5 0.5,FB "
  "0.5 0.5 0,L 0 0.5 0", // 155
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 156
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 157
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 158
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 159
  "GM 0 0 0,T 0.5 0.5 -0.5,L 0 0.5 0,FA 0 0.5 -0.5#GM 0 0 0,T 0.5 0.5 -0.5,L 0 "
  "0.5 0,FB 0.5 0.5 0", // 160
  "GM 0 0 0,T 0.5 0.5 -0.5,L 0 0.5 0,FA 0 0.5 -0.5#GM 0 0 0,T 0.5 0.5 -0.5,L 0 "
  "0.5 0,FB 0.5 0.5 0", // 161
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 162
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 163
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 164
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 165
  "GM 0 0 0,T 0.5 0.5 -0.5,L 0 0.5 0,FA 0 0.5 -0.5#GM 0 0 0,T 0.5 0.5 0.5,L 0 "
  "0.5 0,FB 0 0.5 0.5", // 166
  "GM 0 0 0,T 0.5 0.5 -0.5,L 0 0.5 0,FA 0 0.5 -0.5#GM 0 0 0,T 0.5 0.5 0.5,L 0 "
  "0.5 0,FB 0 0.5 0.5", // 167
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 168
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 169
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 170
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 171
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 172
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 173
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 174
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 175
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 176
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 177
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 178
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 179
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 180
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 181
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 182
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 183
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 184
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 185
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 186
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 187
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 188
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 189
  "GM 0 0 0,A 0 0 0.5,KA 0.666667 -0.333333 0,HA 0.666667 -0.333333 0.5,K "
  "0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 0,L 0.5 0 0.5", // 190
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 191
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 192
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5", // 193
  "GM 0 0 0,A 0 0 0.5,K 0.333333 0.333333 0,H 0.333333 0.333333 0.5,M 0.5 0 "
  "0,L 0.5 0 0.5",                                      // 194
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 195
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 196
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,N 0 0 0.5", // 197
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0", // 198
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,N 0 0 0.5", // 199
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 200
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 201
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 202
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 203
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,N 0 0 0.5", // 204
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 205
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,N 0 0 0.5", // 206
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 207
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 208
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 209
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 210
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,N 0 0 0.5", // 211
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 212
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 213
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,N 0 0 0.5", // 214
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 215
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 216
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,N 0 0 0.5", // 217
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 218
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 219
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,PA -0.25 -0.25 0.75,N 0 0 0.5", // 220
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 221
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 222
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 223
  "GM 0 0 0,R 0.5 0.5 0.5,M 0.5 0.5 0,X 0 0.5 0",       // 224
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 225
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 226
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 227
  "GM 0 0 0,X 0.5 0 0.5,L 0.5 0.5 0.5,W 0.5 0.25 0.75", // 228
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,N 0 0 0.5", // 229
  "GM 0 0 0,H 0.5 -0.5 0.5,P 0.25 0.25 0.25,N 0 0 0.5"  // 230
};

} // namespace Avogadro::QtPlugins

#endif
