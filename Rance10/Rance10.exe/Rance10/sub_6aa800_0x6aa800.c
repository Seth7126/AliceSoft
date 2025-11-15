// 函数: sub_6aa800
// 地址: 0x6aa800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
arg1.b = *(ebx + 9)
int32_t i_8 = *ebx

if (arg1.b u< 8)
    return 

uint32_t eax
eax.b = ebx[2].b

if ((eax.b & 2) != 0)
    return 

if (eax.b != 0)
    if (eax.b == 4)
        if (arg1.b != 8)
            char* esi_5 = arg2 - 1 + (i_8 << 2)
            char* edx_5 = &esi_5[i_8 << 2]
            
            if (i_8 != 0)
                int32_t i_5 = i_8
                int32_t i
                
                do
                    *edx_5 = *esi_5
                    edx_5 = &edx_5[0xfffffff8]
                    char eax_12 = esi_5[0xffffffff]
                    esi_5 = &esi_5[0xfffffffc]
                    edx_5[7] = eax_12
                    edx_5[6] = esi_5[2]
                    edx_5[5] = esi_5[1]
                    edx_5[4] = esi_5[2]
                    edx_5[3] = esi_5[1]
                    edx_5[2] = esi_5[2]
                    edx_5[1] = esi_5[1]
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else
            char* edx_4 = arg2 + (i_8 << 1) - 1
            void* eax_10 = &edx_4[i_8 << 1]
            
            if (i_8 != 0)
                int32_t i_7 = i_8
                int32_t i_1
                
                do
                    eax_10 -= 4
                    *(eax_10 + 4) = *edx_4
                    edx_4 = &edx_4[0xfffffffe]
                    *(eax_10 + 3) = edx_4[1]
                    *(eax_10 + 2) = edx_4[1]
                    *(eax_10 + 1) = edx_4[1]
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
else if (arg1.b != 8)
    char* esi_2 = arg2 - 1 + (i_8 << 1)
    char* edx_2 = &esi_2[i_8 << 2]
    
    if (i_8 != 0)
        int32_t i_4 = i_8
        int32_t i_2
        
        do
            *edx_2 = *esi_2
            edx_2 = &edx_2[0xfffffffa]
            char eax_5 = esi_2[0xffffffff]
            esi_2 = &esi_2[0xfffffffe]
            edx_2[5] = eax_5
            edx_2[4] = esi_2[2]
            edx_2[3] = esi_2[1]
            edx_2[2] = esi_2[2]
            edx_2[1] = esi_2[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
else
    char* edx_1 = arg2 - 1 + i_8
    void* ecx = &edx_1[i_8 << 1]
    
    if (i_8 != 0)
        int32_t i_6 = i_8
        int32_t i_3
        
        do
            ecx -= 3
            *(ecx + 3) = *edx_1
            edx_1 = &edx_1[0xffffffff]
            *(ecx + 2) = edx_1[1]
            *(ecx + 1) = edx_1[1]
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)

*(ebx + 0xa) += 2
ebx[2].b |= 2
char ecx_6 = *(ebx + 9) * *(ebx + 0xa)
*(ebx + 0xb) = ecx_6
uint32_t eax_20 = zx.d(ecx_6)

if (ecx_6 u>= 8)
    ebx[1] = (eax_20 u>> 3) * i_8
    return 

ebx[1] = (eax_20 * i_8 + 7) u>> 3
