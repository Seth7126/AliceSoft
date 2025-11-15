// 函数: _strncmp
// 地址: 0x7062c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = arg2
int32_t ebx = arg3

if ((ebx & 0xffffffff) == 0)
    return 0

void* ecx_1 = arg1 - edx

if ((edx & 3) != 0)
    goto label_7062e0

while (true)
    if (((edx + ecx_1) & 0xfff) u<= 0xffc)
        int32_t eax_4 = *(edx + ecx_1)
        
        if (eax_4 == *edx)
            int32_t temp1_1 = ebx
            ebx -= 4
            
            if (temp1_1 u<= 4)
                return 0
            
            edx = &edx[4]
            
            if ((not.d(eax_4) & (eax_4 - 0x1010101) & 0x80808080) != 0)
                return 0
            
            continue
    
label_7062e0:
    uint32_t eax_1 = zx.d(*(edx + ecx_1))
    char temp0_1 = *edx
    
    if (eax_1.b != temp0_1)
        return sbb.d(eax_1, eax_1, eax_1.b u< temp0_1) | 1
    
    if (eax_1 == 0)
        return 0
    
    edx = &edx[1]
    int32_t temp2_1 = ebx
    ebx -= 1
    
    if (temp2_1 u<= 1)
        return 0
    
    if ((edx.b & 3) != 0)
        break
