## Michael learns C++ !

My code scetches which i write to learn the language. I don't like it, but
definitely should dig deeper, at least for graphics programming. Graphics is
cool.

## GCC 6.2.1 exceptions bug

Noticed that my GCC 6.2.1 on archlinux doesn't handle `ifstream` exceptions,
they are just terminating the program. The fix is available in streams/Rakefile
