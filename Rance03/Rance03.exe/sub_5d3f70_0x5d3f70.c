// 函数: sub_5d3f70
// 地址: 0x5d3f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char* eax

if (*(arg1 + 0xc) != 0)
    eax = *(arg1 + 8)
else
    eax = nullptr

int32_t* edx = nullptr
int32_t esi = 0

if (*eax != 0)
    char* edi_1 = nullptr
    
    do
        if (esi == arg3)
            edx = eax
        
        if (esi == arg4 + arg3)
            edi_1 = eax
            break
        
        arg1.b = *eax
        
        if (arg1.b u>= 0x81 && arg1.b u<= 0x9f)
            eax = &eax[1]
        else if (arg1.b u>= 0xe0 && arg1.b u<= 0xef)
            eax = &eax[1]
        
        eax = &eax[1]
        esi += 1
    while (*eax != 0)
    
    if (edx != 0)
        if (edi_1 == 0)
            edi_1 = eax
        
        if (edi_1 u> edx)
            arg2[5] = 0xf
            arg2[4] = 0
            *arg2 = 0
            
            if (edx != edi_1)
                sub_402110(arg2, edx, edi_1 - edx)
            
            return arg2

arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
return arg2
