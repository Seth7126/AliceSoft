// 函数: sub_407160
// 地址: 0x407160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* eax

if (arg1 + 0x30 != arg2)
    eax = sub_403590(arg1 + 0x30, arg2, 0, 0xffffffff)

int32_t* ecx_1 = *(arg1 + 0x64)

if (ecx_1 != 0)
    eax = (*(*ecx_1 + 8))(1)
    *(arg1 + 0x64) = 0

if (sub_40dfb0(eax, arg2, arg1 + 0x64, 0) u< arg2[4])
    int32_t* ecx_3 = *(arg1 + 0x64)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 8))(1)
        *(arg1 + 0x64) = 0

if (*(arg1 + 0x64) != 0)
    *(arg1 + 0x68) = 0
    return sub_407000(arg1)

int32_t* ecx_6 = *(arg1 + 0x64)

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(1)
    *(arg1 + 0x64) = 0

return sub_407000(arg1)
