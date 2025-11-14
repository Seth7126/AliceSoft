// 函数: sub_47de60
// 地址: 0x47de60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t ebx
ebx.b = *(arg1 + 0x28) != 0xffffffff
var_4:3.b = ebx.b != 0
sub_414b60(arg2 + 4, &var_4:3)
int32_t result

if (ebx.b != 0)
    int32_t ecx_2 = *(arg1 + 0x28)
    
    if (ecx_2 s< 0)
        result.b = 0
        return result
    
    void* edx_1 = data_75d508
    
    if (ecx_2 s>= (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
        result.b = 0
        return result
    
    void* ecx_3 = *(*(edx_1 + 0x50) + (ecx_2 << 2))
    
    if (ecx_3 == 0)
        result.b = 0
        return result
    
    if (sub_587380(ecx_3 + 0x10, arg2).b == 0)
        result.b = 0
        return result

result.b = 1
return result
