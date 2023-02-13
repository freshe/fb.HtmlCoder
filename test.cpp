#include "html_coder.hpp"

int main() {
    fb::HtmlCoder html_decoder;
    
    const std::string html_encoded_text =  
        "Som&#101;&nbsp;&#116;e&#120;t &#119;&#105;&#116;&#104; &#72;&#84;&#77;&#76; stuff in it. &amp;&quot;&para;&frac34;";

    const std::string html_decoded_text = html_decoder.decode(html_encoded_text);
    std::cout << html_decoded_text << std::endl;

    return 0;
}