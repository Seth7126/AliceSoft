// 函数: sub_57ab40
// 地址: 0x57ab40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 0x1c)
int32_t esi = *(arg2 + 0x1c)
void* result

if (ecx s>= esi)
    if (ecx s> esi)
        result.b = 0
        return result
    
    int32_t ecx_1 = *(arg1 + 0x20)
    int32_t esi_1 = *(arg2 + 0x20)
    
    if (ecx_1 s>= esi_1)
        if (ecx_1 s> esi_1)
            result.b = 0
            return result
        
        ecx_1.b = *(arg1 + 0x73)
        int32_t ebx
        ebx.b = *(arg2 + 0x73)
        
        if (ecx_1.b u>= ebx.b)
            if (ecx_1.b u> ebx.b)
                result.b = 0
                return result
            
            ecx_1.b = *(arg1 + 0x26)
            result.b = *(arg2 + 0x26)
            
            if (ecx_1.b u>= result.b)
                result.b = 0
                return result
        
        result.b = 1
        return result

result.b = 1
return result
