#include "pkg/LZW/lzw_v5.cpp"

class file_compression_wrapper {
public:
    void do_test() {
        lzw lzw;
        int status = lzw.do_compress(2, "/home/arnab/Desktop/VCS/hello_compressed.txt",
                                     "/home/arnab/Desktop/VCS/hello_rebuilt.txt");
    }
};