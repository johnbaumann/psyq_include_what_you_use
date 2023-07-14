# What is it
Fixes psyq headers to include what they use, so changing the include order in your project doesn't break compiling.

# Instructions
Clone/download the repo, rename your existing psyq include directory, and extract the include folder where the original was.

# Bug Fixes
- libgpu.h Protect against possible alignment issues in DISPENV, fix contributed by StiNKz
- stdarg.h Deleted, as this is a compiler specific implementation and gcc has its own

# Download this repo
https://github.com/johnbaumann/psyq_include_what_you_use/zipball/master
