# fb.HtmlCoder

*A dinky little C++ HTML decoder I use for decoding html entities in my own stuff*

```cpp
fb::HtmlCoder html_decoder;

const std::string html_encoded_text =  
    "Som&#101; &#116;e&#120;t &#119;&#105;&#116;&#104; &#72;&#84;&#77;&#76; stuff in it. &amp;&quot;&para;&frac34;";

const auto html_decoded_text = html_decoder.decode(html_encoded_text);
std::cout << html_decoded_text << std::endl;

//-> Unescaped: Some text with HTML stuff in it. &"¶¾
```