// $Id$
//
//  Copyright (C) 2005-2008 Greg Landrum and Rational Discovery LLC
//
//  @@ All Rights Reserved @@
//  This file is part of the RDKit.
//  The contents are covered by the terms of the BSD license
//  which is included in the file license.txt, found at the root
//  of the RDKit source tree.
//
//

#include "FreeChemicalFeature.h"
#include <Geometry/point.h>
#include <iostream>
#include <RDGeneral/Invariant.h>

using namespace ChemicalFeatures;


void test1() {
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << "Test1" << std::endl;

  FreeChemicalFeature f1("foo","bar",RDGeom::Point3D(0,0,0));
  TEST_ASSERT(f1.getFamily()=="foo");
  TEST_ASSERT(f1.getType()=="bar");

  FreeChemicalFeature f2;
  f2.initFromString(f1.toString());
  TEST_ASSERT(f2.getFamily()=="foo");
  TEST_ASSERT(f2.getType()=="bar");

  FreeChemicalFeature f3(f1.toString());
  TEST_ASSERT(f3.getFamily()=="foo");
  TEST_ASSERT(f3.getType()=="bar");

  
  std::cout << "Done" << std::endl;

}

int main() {
  test1();
  return 0;
}

