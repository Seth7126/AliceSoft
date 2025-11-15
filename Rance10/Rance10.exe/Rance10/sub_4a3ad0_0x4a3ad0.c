// 函数: sub_4a3ad0
// 地址: 0x4a3ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* ecx = *(arg1 + 0x2b8)

if (ecx != 0)
    int32_t* eax_3 = (**ecx)(0x760e3c)
    
    if (eax_3 != 0)
        sub_403360(arg2, (*(*eax_3 + 8))(0))
        return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
