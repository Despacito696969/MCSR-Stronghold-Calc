# MCSR-Stronghold-Calc
## Calculator part
`main.cpp` can be compiled with `build.bat` into a calculator which just adds two chuck positions and produces chunk position, nether position and overworld position. It also has additional filtering so inputting coords in parentheses like `(40 13)` would work.

## Chart part
`super_chart_2.txt` has fossil divine coordinates and improved version of perfect travel chart. When you get for example angle -91.52 and you want to go single chunk in negative z direction  you search for snz-91.52, where s stands for single (you can use d if you want to go 2 chunks), n stands for negative (if you go positive you just don't type any letter), and z stands for z-axis (you can use x if you go in x direction) and you can look up for each chunk offset, what angle should you get if that's the correct offset.

In result you don't have to even be that precise, because if you're off by 0.02, you can just look at lines above and below to find your offset. Thanks to this you can use 30 fov on fullscreen where usually you would have to use 31 fov.

## Why not ninjabrainbot
I found this technique to be way more reliable than ninjabrainbot, but slower since you need to manually look up coords and normalize angle to range from -180 to 180.
