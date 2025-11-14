// 函数: sub_62d6e0
// 地址: 0x62d6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
            void* esi_5 = arg2 - 1 + (i_8 << 2)
            void* edx_5 = esi_5 + (i_8 << 2)
            
            if (i_8 != 0)
                int32_t i_5 = i_8
                int32_t i
                
                do
                    *edx_5 = *esi_5
                    edx_5 -= 8
                    char eax_9 = *(esi_5 - 1)
                    esi_5 -= 4
                    *(edx_5 + 7) = eax_9
                    *(edx_5 + 6) = *(esi_5 + 2)
                    *(edx_5 + 5) = *(esi_5 + 1)
                    *(edx_5 + 4) = *(esi_5 + 2)
                    *(edx_5 + 3) = *(esi_5 + 1)
                    *(edx_5 + 2) = *(esi_5 + 2)
                    *(edx_5 + 1) = *(esi_5 + 1)
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else
            char* edx_4 = arg2 + (i_8 << 1) - 1
            eax = &edx_4[i_8 << 1]
            
            if (i_8 != 0)
                int32_t i_7 = i_8
                int32_t i_1
                
                do
                    char ecx_1 = *edx_4
                    edx_4 = &edx_4[0xfffffffe]
                    *eax = ecx_1
                    *(eax - 1) = edx_4[1]
                    *(eax - 2) = edx_4[1]
                    *(eax - 3) = edx_4[1]
                    eax -= 4
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
            char eax_4 = esi_2[0xffffffff]
            esi_2 = &esi_2[0xfffffffe]
            edx_2[5] = eax_4
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

eax.b = *(ebx + 9)
*(ebx + 0xa) += 2
eax.w = muls.dp.b(eax.b, *(ebx + 0xa))
ebx[2].b |= 2
*(ebx + 0xb) = eax.b
uint32_t eax_15 = zx.d(eax.b)

if (eax.b u>= 8)
    ebx[1] = (eax_15 u>> 3) * i_8
    return 

ebx[1] = (eax_15 * i_8 + 7) u>> 3
