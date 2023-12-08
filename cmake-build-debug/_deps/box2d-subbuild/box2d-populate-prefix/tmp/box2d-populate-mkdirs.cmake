# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-src"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-build"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix/tmp"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix/src/box2d-populate-stamp"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix/src"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix/src/box2d-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix/src/box2d-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/box2d-subbuild/box2d-populate-prefix/src/box2d-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
