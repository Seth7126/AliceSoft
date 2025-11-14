// 函数: sub_5d3ec0
// 地址: 0x5d3ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax

if (*(arg1 + 0xc) != 0)
    eax = *(arg1 + 8)
else
    eax = nullptr

char* ecx = arg2

while (true)
    char edx = *eax
    char temp1_1 = *ecx
    bool c_1 = edx u< temp1_1
    
    if (edx == temp1_1)
        if (edx == 0)
            break
        
        edx = eax[1]
        char temp2_1 = ecx[1]
        c_1 = edx u< temp2_1
        
        if (edx == temp2_1)
            eax = &eax[2]
            ecx = &ecx[2]
            
            if (edx == 0)
                break
            
            continue
    
    int32_t result
    result.b = (sbb.d(ecx, ecx, c_1) | 1) == 0
    return result

int32_t eax_1
eax_1.b = true
return 1
