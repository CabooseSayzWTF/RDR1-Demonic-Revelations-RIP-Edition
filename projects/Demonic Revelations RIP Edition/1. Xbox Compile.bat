@echo off
cd %~dp0
:start
echo SC-CL example.c
echo Press ENTER to launch
pause > nul
cls
"../../bin/SC-CL.exe" -platform=X360 -target=RDR_#SC -n -name="fuieventmonitor" -out-dir="RDR_SC/X360/bin/" -vcx="example.vcxproj" -- -I "../../include/"
goto start
