# fb.HtmlCoder

*A dinky little C++ HTML decoder i use for my own stuff*

```cpp
fb::HtmlCoder decoder;

const std::string text =  
    "Som&#101; &#116;e&#120;t &#119;&#105;&#116;&#104; &#72;&#84;&#77;&#76; stuff in it. &amp;&quot;&para;&frac34;";

const auto x = decoder.decode(text);
std::cout << x << std::endl;
```