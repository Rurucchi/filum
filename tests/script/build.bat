@echo off

if exist ../build (
  cd ../build
) else (
  cd ..
  mkdir build
  cd build
)

cl /nologo /Zi /EHsc "..\test.c"
cd ../script