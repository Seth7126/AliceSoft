// 函数: sub_627c20
// 地址: 0x627c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x9c) != 0)
    return 

if (arg2 + 7 u<= 9)
    switch (arg2)
        case 1
            *(arg1 + 0x9c) = "unexpected end of LZ stream"
            return 
        case 2
            *(arg1 + 0x9c) = "missing LZ dictionary"
            return 
        case 0xfffffff9
            *(arg1 + 0x9c) = "unexpected zlib return"
            return 
        case 0xfffffffa
            *(arg1 + 0x9c) = "unsupported zlib version"
            return 
        case 0xfffffffb
            *(arg1 + 0x9c) = "truncated"
            return 
        case 0xfffffffc
            *(arg1 + 0x9c) = "insufficient memory"
            return 
        case 0xfffffffd
            *(arg1 + 0x9c) = "damaged LZ stream"
            return 
        case 0xfffffffe
            *(arg1 + 0x9c) = "bad parameters to zlib"
            return 
        case 0xffffffff
            *(arg1 + 0x9c) = "zlib IO error"
            return 

*(arg1 + 0x9c) = "unexpected zlib return code"
