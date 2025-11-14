// 函数: sub_10012ab0
// 地址: 0x10012ab0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1 == 0)
    return 

if (*(arg1 + 0x40) != 0)
    CoTaskMemFree(*(arg1 + 0x44))
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0

int32_t* eax_2 = *(arg1 + 0x3c)

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    *(arg1 + 0x3c) = 0

CoTaskMemFree(arg1)
