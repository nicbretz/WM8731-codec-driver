# WM8731-audio codec-driver

This is my codec for the WM8731, written for an embedded project. Anyone who spent some time with this codec and the datasheet is aware of the idiosyncrasies of its register mapping. 

I had a board with this codec from a manufacturer who should remain unnamed, and I wasn't able to get it to work. I spent hours upon hours with the datasheet and the codec, and still no luck. Eventually I found out there are some design issues with the board itself and it will not work as I was expecting. On one hand, I was frustrated about the spent time, otoh, the somewhat silver lining is that I became extremely familiar with the datasheet and the code I wrote. To make it clear, beisdes the board problems, the codec is perfectly fine, once the aforementioned idiosyncrasies are accounted for. 
