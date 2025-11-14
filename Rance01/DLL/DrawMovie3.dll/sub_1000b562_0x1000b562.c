// 函数: sub_1000b562
// 地址: 0x1000b562
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1 == 0)
    return sub_1000b5aa(arg1)

if (sub_1000b4fa(arg1) != 0)
    return 0xffffffff

if ((arg1[3] & 0x4000) == 0)
    return 0

enum WIN32_ERROR eax_3 = sub_1000b9c9(sub_10009f7a(arg1))
int32_t eax_4 = neg.d(eax_3)
return sbb.d(eax_4, eax_4, eax_3 != NO_ERROR)
