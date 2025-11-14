// 函数: sub_59c5a0
// 地址: 0x59c5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    result = *i
    
    if (result != 0)
        int32_t* ecx = *(result + 0x10)
        
        if (ecx != 0)
            result = (*(*ecx + 0x10))()
        
        if (ecx == 0 || result.b == 0)
            result.b = 0
            return result

result.b = 1
return result
