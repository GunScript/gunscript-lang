# gunscript-lang
gunscript is a language made with C++ and will be the main repository for the Gunscript organization.
# Idea
hello world in gunscript:
```
start hello.gsf;
prog.printin("Hello world");
```
its easy, prog is a namespace(C++ reference) for printing and other easy stuff.
i was inspired by assembly(and C++) so the idea of gunscript is basically "simplified assembly that can make text based programs, and is more C++y"
people can make their own namespace with:
```
cname("example"); //cname is simplified for createnamespace();

// in ns("example") defines everything inside a namespace

in ns("example") {
   def_func lorem() {
    prog.printin("lorem ipsum dolor sit amet..");
   }
    def_func hello() {
     prog.printin("Hello world!");
    }
}
```
multi-line and single line comments are:
```
/= 
this is a multi-line comment
=/

//this is a single line comment
```

note: this is just a idea, its soon going to be a real language
