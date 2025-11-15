// 函数: sub_4ab8a0
// 地址: 0x4ab8a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 4)
int32_t edi = *(arg1 + 8)

if (edx == edi)
    return 

int32_t* ecx
int32_t esi_1

while (true)
    ecx = *edx
    esi_1 = edx[1]
    
    if (ecx != esi_1)
        break
    
label_4ab8e6:
    edx = &edx[4]
    
    if (edx == edi)
        return 

while (true)
    int32_t eax = ecx[1]
    int32_t* ebx_1 = *ecx
    
    if (eax != ebx_1)
        while (*ebx_1 != arg2)
            ebx_1 = &ebx_1[1]
            
            if (ebx_1 == eax)
                break
        
        if (eax != ebx_1)
            eax.b = arg4
            char ecx_1
            
            if (arg3 == 0 || eax.b != 0)
                ecx_1 = 0
            else
                ecx_1 = 1
            
            edx[3].b = ecx_1
            *(edx + 0xd) = eax.b
            
            if (arg5 != 0 && arg6 == 0)
                *(edx + 0xf) = arg6
                *(edx + 0xe) = 1
                return 
            
            *(edx + 0xf) = arg6
            *(edx + 0xe) = 0
            break
    
    ecx = &ecx[3]
    
    if (ecx == esi_1)
        goto label_4ab8e6
