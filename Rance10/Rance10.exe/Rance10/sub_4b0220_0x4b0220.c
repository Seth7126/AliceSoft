// 函数: sub_4b0220
// 地址: 0x4b0220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ebx = arg4
*arg6 = 0
char* eax = arg5
*ebx = 0
int32_t* edi = *arg1
int32_t* ecx = edi
int32_t esi_1 = arg1[1]
*eax = 0
*arg3 = 0

if (ecx != esi_1)
    while (true)
        int32_t eax_1 = ecx[1]
        int32_t* edx_1 = *ecx
        
        if (eax_1 != edx_1)
            while (*edx_1 != arg2)
                edx_1 = &edx_1[1]
                
                if (edx_1 == eax_1)
                    break
            
            if (eax_1 != edx_1)
                break
        
        ecx = &ecx[3]
        
        if (ecx == esi_1)
            return eax_1
    
    int32_t* edx_2 = *ecx
    *ebx = 0
    int32_t* ebx_1 = edx_2
    *arg3 = 0
    eax = ecx[1]
    
    if (edx_2 != eax)
        while (*ebx_1 != arg2)
            ebx_1 = &ebx_1[1]
            
            if (ebx_1 == eax)
                break
    
    if (ebx_1 != eax)
        edx_2.b = ebx_1 != edx_2
        *arg3 = edx_2.b
        eax.b = &ebx_1[1] == eax
        *arg4 = eax.b
    
    eax.b = ecx != edi
    *arg5 = eax.b
    eax.b = &ecx[3] == esi_1
    *arg6 = eax.b

return eax
