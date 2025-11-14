// 函数: sub_44ce70
// 地址: 0x44ce70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = data_75d4cc

if (*(result + 0x2b8) == 1)
    result = *(result + 0x2b4)
    
    if (result == 0)
        result.b = 0
        return result
    
    int32_t* ecx_1 = *(result + 0x80)
    
    if (ecx_1 == 0)
        result.b = 0
        return result
    
    if ((*(*ecx_1 + 0x10))().b == 0)
        result.b = 0
        return result

result.b = 1
return result
