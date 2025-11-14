// 函数: sub_47ed00
// 地址: 0x47ed00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i

if (arg2 == 0)
    i = 0
else
    i = arg2 - 8

int32_t result = *(arg1 + 0x2c)
int32_t* ecx = *(arg1 + 0x28)

if (ecx != result)
    while (*ecx != i)
        ecx = &ecx[1]
        
        if (ecx == result)
            break
    
    if (ecx != result)
        int32_t ecx_2 = (ecx - *(arg1 + 0x28)) s>> 2
        
        if (ecx_2 != 0xffffffff)
            int32_t* ecx_3 = *(arg1 + 0x38) + (ecx_2 << 2)
            result = *ecx_3
            *(arg1 + 0x34) += result
            *ecx_3 = 0xffffffff

return result
