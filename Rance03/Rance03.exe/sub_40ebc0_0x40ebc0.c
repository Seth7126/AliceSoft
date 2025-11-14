// 函数: sub_40ebc0
// 地址: 0x40ebc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    arg1.b = 0
    return arg1

int32_t eax_1 = (*(*arg2 + 0x18))()

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

int32_t ebx = arg4 << 2

if (ebx s>= (*(*arg2 + 0x14))())
    int32_t eax_4
    eax_4.b = 0
    return eax_4

*arg3 = *(ebx + eax_1)
int32_t eax_5
eax_5.b = 1
return eax_5
