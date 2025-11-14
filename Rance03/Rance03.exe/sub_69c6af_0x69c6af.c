// 函数: sub_69c6af
// 地址: 0x69c6af
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return _flsall(arg1)

if (__flush(arg1) != 0)
    return 0xffffffff

if ((arg1[3] & 0x4000) == 0)
    return 0

enum WIN32_ERROR eax_3 = sub_6a73c2(__fileno(arg1))
int32_t eax_4 = neg.d(eax_3)
return sbb.d(eax_4, eax_4, eax_3 != NO_ERROR)
