// 函数: sub_100061fe
// 地址: 0x100061fe
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* eax_3 = *arg1

if (*eax_3 == 0xe06d7363 && eax_3[4] == 3)
    int32_t ecx_1 = eax_3[5]
    
    if ((ecx_1 == 0x19930520 || ecx_1 == 0x19930521 || ecx_1 == 0x19930522) && eax_3[7] == 0)
        *(__getptd() + 0x20c) = 1
        return 1

return 0
