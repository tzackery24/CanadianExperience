# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-src"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-build"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix/tmp"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix/src/machinedemolib-populate-stamp"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix/src"
  "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix/src/machinedemolib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix/src/machinedemolib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Volumes/TZPassport/CSE335/Project2Starter/cmake-build-debug/_deps/machinedemolib-subbuild/machinedemolib-populate-prefix/src/machinedemolib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
