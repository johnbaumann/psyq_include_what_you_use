# What is it
Fixes psyq headers to include what they use, so changing the include order in your project doesn't break compiling.

# Instructions
Download the archive from the releases page and replace your existing psyq include directory with the one from the archive.

# Bug Fixes
- libgpu.h Protect against possible alignment issues in DISPENV, fix contributed by StiNKz