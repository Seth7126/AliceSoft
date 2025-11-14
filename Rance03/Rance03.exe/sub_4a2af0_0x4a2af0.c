// 函数: sub_4a2af0
// 地址: 0x4a2af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
void* result = *(arg1 + 0xd8)

if (result != edi)
    void* ecx = *(arg1 + 0x60)
    void* result_1 = result
    arg2 = result
    
    if (result s> 0)
        int32_t* var_4
        result.b = *sub_42f3d0(ecx + 0x14, &var_4, &arg2) != *(ecx + 0x14)
        
        if (result.b != 0)
            result = sub_42f350(ecx + 0x14, &result_1)
            *result -= 1
    
    void* ecx_3 = *(arg1 + 0x60)
    arg2 = edi
    
    if (edi s> 0)
        result = sub_42f350(ecx_3 + 0x14, &arg2)
        *result += 1
    
    if (*(arg1 + 0xd8) != edi)
        *(arg1 + 0xd8) = edi
        *(arg1 + 0x70) = 1

return result
