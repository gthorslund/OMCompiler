/*
 * This file is part of OpenModelica.
 *
 * Copyright (c) 1998-2014, Open Source Modelica Consortium (OSMC),
 * c/o Linköpings universitet, Department of Computer and Information Science,
 * SE-58183 Linköping, Sweden.
 *
 * All rights reserved.
 *
 * THIS PROGRAM IS PROVIDED UNDER THE TERMS OF GPL VERSION 3 LICENSE OR
 * THIS OSMC PUBLIC LICENSE (OSMC-PL) VERSION 1.2.
 * ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS PROGRAM CONSTITUTES
 * RECIPIENT'S ACCEPTANCE OF THE OSMC PUBLIC LICENSE OR THE GPL VERSION 3,
 * ACCORDING TO RECIPIENTS CHOICE.
 *
 * The OpenModelica software and the Open Source Modelica
 * Consortium (OSMC) Public License (OSMC-PL) are obtained
 * from OSMC, either from the above address,
 * from the URLs: http://www.ida.liu.se/projects/OpenModelica or
 * http://www.openmodelica.org, and in the OpenModelica distribution.
 * GNU version 3 is obtained from: http://www.gnu.org/copyleft/gpl.html.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without
 * even the implied warranty of  MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE, EXCEPT AS EXPRESSLY SET FORTH
 * IN THE BY RECIPIENT SELECTED SUBSIDIARY LICENSE CONDITIONS OF OSMC-PL.
 *
 * See the full OSMC Public License conditions for more details.
 *
 */

encapsulated package HpcOmBenchmarkExt
" file:        HpcOmBenchmarkExt.mo
  package:     HpcOmBenchmarkExt
  description: HpcOmBenchmarkExt is a adapter package to handle the benchmark-calculation in c/c++.

  RCS: $Id: HpcOmBenchmarkExt.mo 15486 2013-05-24 11:12:35Z marcusw $
"

function requiredTimeForComm
  output list<Integer> requiredTime;

  external "C" requiredTime=HpcOmBenchmarkExt_requiredTimeForComm() annotation(Library = "omcruntime");
end requiredTimeForComm;

function requiredTimeForOp
  output list<Integer> requiredTime;

  external "C" requiredTime=HpcOmBenchmarkExt_requiredTimeForOp() annotation(Library = "omcruntime");
end requiredTimeForOp;

function readCalcTimesFromXml
  input String fileName;
  output list<Real> requiredTime;

  external "C" requiredTime=HpcOmBenchmarkExt_readCalcTimesFromXml(fileName) annotation(Library = "omcruntime");
end readCalcTimesFromXml;

function readCalcTimesFromJson
  input String fileName;
  output list<Real> requiredTime;

  external "C" requiredTime=HpcOmBenchmarkExt_readCalcTimesFromJson(fileName) annotation(Library = "omcruntime");
end readCalcTimesFromJson;

annotation(__OpenModelica_Interface="backend");
end HpcOmBenchmarkExt;
