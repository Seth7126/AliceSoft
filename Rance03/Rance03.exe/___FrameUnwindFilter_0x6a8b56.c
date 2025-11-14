// 函数: ___FrameUnwindFilter
// 地址: 0x6a8b56
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = *arg1

if (*eax_1 == 0xe0434352 || *eax_1 == 0xe0434f4d)
    if (__getptd()[0x24] s> 0)
        uint32_t* eax_4 = __getptd()
        eax_4[0x24] -= 1
else if (*eax_1 == 0xe06d7363)
    __getptd()[0x24] = 0
    noreturn terminate() __tailcall

return 0
