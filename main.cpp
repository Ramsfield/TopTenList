#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList();
    Hyperlink cpp;

    cpp.text = "Go";
    cpp.url = "www.google.com";
    languages->set_at(0, cpp);

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);

    cpp.text = "Rust";
    cpp.url = "www.rust.com";
    languages->set_at(2, cpp);

    cpp.text = "Perl";
    cpp.url = "www.perl.com";
    languages->set_at(3, cpp);

    cpp.text = "Prolog";
    cpp.url = "www.Prolog.com";
    languages->set_at(4, cpp);

    cpp.text = "Racket";
    cpp.url = "www.racket.com";
    languages->set_at(5, cpp);

    cpp.text = "Lisp";
    cpp.url = "www.lisp.com";
    languages->set_at(6, cpp);

    cpp.text = "Haskell";
    cpp.url = "www.haskell.com";
    languages->set_at(7, cpp);

    cpp.text = "C";
    cpp.url = "www.c.com";
    languages->set_at(8, cpp);

    cpp.text = "brainfuck";
    cpp.url = "www.pornhub.com";
    languages->set_at(9, cpp);

    languages->display_forward();
    languages->display_backward();

    delete languages;

    return 0;
}
