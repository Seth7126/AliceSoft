// 函数: sub_5fedf0
// 地址: 0x5fedf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (*(arg1 + 0x18) != 0)
    void* eax_1 = *(arg1 + 4)
    
    if (eax_1 != 0 && sub_604d10(arg1 + 0x1c, eax_1 + 4) == 0)
        return false

int32_t* ecx = *(arg1 + 0x14)
*(arg1 + 0x18) = 0

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x14) = 0

int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    (**ecx_1)(1)
    *(arg1 + 4) = 0

*(arg1 + 0xc) = *(arg1 + 8)
int32_t result
result.b = 1
return result
