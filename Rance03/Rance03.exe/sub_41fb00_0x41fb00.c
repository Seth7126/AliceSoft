// 函数: sub_41fb00
// 地址: 0x41fb00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*arg1 s> *arg2)
    return 1

void* ecx_1 = &arg2[1]

if (*(ecx_1 + 0x14) u>= 0x10)
    ecx_1 = *ecx_1

void* eax_2 = &arg1[1]

if (arg1[6] u>= 0x10)
    eax_2 = *eax_2

while (true)
    int32_t* edx
    edx.b = *eax_2
    char temp1_1 = *ecx_1
    bool c_1 = edx.b u< temp1_1
    
    if (edx.b == temp1_1)
        if (edx.b == 0)
            break
        
        edx.b = *(eax_2 + 1)
        char temp2_1 = *(ecx_1 + 1)
        c_1 = edx.b u< temp2_1
        
        if (edx.b == temp2_1)
            eax_2 += 2
            ecx_1 += 2
            
            if (edx.b == 0)
                break
            
            continue
    
    return sbb.d(eax_2, eax_2, c_1) | 1

return 0
