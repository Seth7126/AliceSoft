// 函数: sub_1000eed0
// 地址: 0x1000eed0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* eax_2 = *(arg1 + 0x44)

if (eax_2 == 0)
    return 0x80004001

void* ecx

if (arg2 != 1)
    ecx = arg4
else
    ecx = arg1 + 0xc

return (*(*eax_2 + 0xc))(eax_2, arg2, arg3, ecx)
