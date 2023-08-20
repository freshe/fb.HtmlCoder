# fb.HtmlCoder

*A dinky little C++ HTML decoder I use for unescaping / decoding html entities in my own stuff*

```cpp
fb::HtmlCoder html_decoder;

std::string html_text =  
    "Som&#101; &#116;e&#120;t &#119;&#105;&#116;&#104; &#72;&#84;&#77;&#76; stuff in it. &amp;&quot;&para;&frac34;";

html_decoder.decode(html_text);
std::cout << html_text << std::endl;

//-> Unescape / decoded : Some text with HTML stuff in it. &"¶¾
```