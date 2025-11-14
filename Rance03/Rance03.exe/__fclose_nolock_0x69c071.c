// 函数: __fclose_nolock
// 地址: 0x69c071
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0xffffffff

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if ((arg1[3].b & 0x83) != 0)
    result = __flush(arg1)
    __freebuf(arg1)
    
    if (sub_6a4a51(__fileno(arg1)) s< 0)
        result = 0xffffffff
    else if (arg1[7] != 0)
        _free(arg1[7])
        arg1[7] = 0

arg1[3] = 0
return result
