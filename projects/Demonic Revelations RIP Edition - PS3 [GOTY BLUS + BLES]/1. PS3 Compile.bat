@echo off
cd %~dp0
:start
echo SC-CL example.c
echo Press ENTER to launch
pause > nul
cls
"../../bin/SC-CL.exe" -platform=PS3 -target=RDR_#SC -n -name="fuieventmonitor" -out-dir="RDR_SC/PS3/bin/" -vcx="example.vcxproj" -- -I "../../include/"
goto start
