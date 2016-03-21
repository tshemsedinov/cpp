set PATH=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\;%PATH%
set INCLUDE=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include;C:\Program Files (x86)\Windows Kits\10\Include\10.0.10150.0\ucrt
set LIB=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib;C:\Program Files (x86)\Windows Kits\10\Lib\10.0.10150.0\ucrt\x86;C:\Program Files (x86)\Microsoft SDKs\Windows\v7.1A\Lib
cl /EHsc %1.cpp
del %1.obj
