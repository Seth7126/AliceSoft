// 函数: sub_5d3f10
// 地址: 0x5d3f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx

if (*(arg2 + 0xc) != 0)
    edx = *(arg2 + 8)
else
    edx = nullptr

void* eax

if (*(arg1 + 0xc) != 0)
    eax = *(arg1 + 8)
else
    eax = nullptr

while (true)
    arg1.b = *eax
    char temp1_1 = *edx
    bool c_1 = arg1.b u< temp1_1
    
    if (arg1.b == temp1_1)
        if (arg1.b == 0)
            break
        
        arg1.b = *(eax + 1)
        char temp2_1 = edx[1]
        c_1 = arg1.b u< temp2_1
        
        if (arg1.b == temp2_1)
            eax += 2
            edx = &edx[2]
            
            if (arg1.b == 0)
                break
            
            continue
    
    int32_t result
    result.b = (sbb.d(arg1, arg1, c_1) | 1) != 0
    return result

int32_t eax_1
eax_1.b = false
return 0
