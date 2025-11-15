// 函数: sub_5b7d00
// 地址: 0x5b7d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *arg1
int32_t edx = *(ecx + 0x18)
void* result = *arg2
int32_t esi = *(result + 0x18)

if (edx s>= esi)
    if (edx s> esi)
        result.b = 0
        return result
    
    int32_t edx_1 = *(ecx + 0x1c)
    int32_t esi_1 = *(result + 0x1c)
    
    if (edx_1 s>= esi_1)
        if (edx_1 s> esi_1)
            result.b = 0
            return result
        
        edx_1.b = *(ecx + 0x75)
        int32_t ebx
        ebx.b = *(result + 0x75)
        
        if (edx_1.b u>= ebx.b)
            if (edx_1.b u<= ebx.b)
                ecx.b = *(ecx + 0x22)
                result.b = *(result + 0x22)
            
            if (edx_1.b u> ebx.b || ecx.b u>= result.b)
                result.b = 0
                return result
        
        result.b = 1
        return result

result.b = 1
return result
