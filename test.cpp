#include "html_coder.hpp"

int main() {
    fb::HtmlCoder html_decoder;

    std::string html_text =  
        "Som&#101; &#116;e&#120;t &#119;&#105;&#116;&#104; &#72;&#84;&#77;&#76; stuff in it. &amp;&quot;&para;&frac34;";

    html_decoder.decode(html_text);
    std::cout << html_text << std::endl;

    return 0;
}