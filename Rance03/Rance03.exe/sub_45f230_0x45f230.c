// 函数: sub_45f230
// 地址: 0x45f230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx = *(arg1 + 8)
char* esi = *(arg1 + 4)
char* eax = esi
char* edx = esi
void* var_4 = arg1
*arg2 = 1
*arg3 = 1

if (edx != ebx)
    while (*edx != 0xa)
        eax = edx
        edx -= 1
        
        if (edx == ebx)
            break

if (eax != esi)
    do
        arg1.b = *eax
        
        if (arg1.b u>= 0x81 && arg1.b u<= 0x9f)
            eax = &eax[1]
        else if (arg1.b u>= 0xe0 && arg1.b u<= 0xef)
            eax = &eax[1]
        
        *arg3 += 1
        eax = &eax[1]
    while (eax != esi)
    
    arg1 = var_4

void* esi_1 = esi - ebx

if (esi - ebx s>= 0)
    eax = (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 2
    
    if (eax s> esi_1)
        int32_t eax_4 = *(*(arg1 + 0x20) + (esi_1 << 2))
        *arg2 = eax_4
        return eax_4

*arg2 = 0xffffffff
return eax
