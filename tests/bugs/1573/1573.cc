//===--- 1573.cc - iwyu test ----------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// IWYU_XFAIL

namespace foo {
struct Bar;
}

struct foo::Bar {
  void frombulate();
};

/**** IWYU_SUMMARY

(tests/bugs/1573/1573.cc has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
