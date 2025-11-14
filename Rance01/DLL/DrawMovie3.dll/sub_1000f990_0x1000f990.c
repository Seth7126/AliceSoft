// 函数: sub_1000f990
// 地址: 0x1000f990
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 == 0)
    return 0x80004003

int32_t* eax_2 = *(arg1 + 0xc)
*arg2 = eax_2

if (eax_2 == 0)
    return 0x80040209

(*(*eax_2 + 4))(eax_2)
return 0
