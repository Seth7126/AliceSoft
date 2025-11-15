// 函数: sub_64a490
// 地址: 0x64a490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = data_7fcbcc

if (*(ecx + 0x19) == 0)
    int32_t eax
    eax.b = 0
    return eax

void* edx = *(ecx + 0x14)
char* eax_1 = *(edx + 4)
void* esi = &eax_1[1]

if (esi u<= *(edx + 8))
    eax_1.b = *eax_1
    *(edx + 4) = esi
    
    if (eax_1.b == 0)
        void* ecx_1 = *(ecx + 0x14)
        eax_1 = *(ecx_1 + 4)
        void* edx_1 = &eax_1[1]
        
        if (edx_1 u<= *(ecx_1 + 8))
            eax_1.b = *eax_1
            *(ecx_1 + 4) = edx_1
            *arg1 = zx.d(eax_1.b)
            uint32_t* eax_2
            eax_2.b = 1
            return eax_2

eax_1.b = 0
return eax_1
