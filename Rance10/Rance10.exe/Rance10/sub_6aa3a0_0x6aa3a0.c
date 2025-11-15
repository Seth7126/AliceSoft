// 函数: sub_6aa3a0
// 地址: 0x6aa3a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax
eax.b = arg1[2].b
int32_t i_4 = *arg1

if (eax.b != 6)
    if (eax.b == 4)
        if (*(arg1 + 9) != 8)
            eax = arg1[1] + arg2
            char* esi_5 = eax
            
            if (i_4 != 0)
                int32_t ebx
                int32_t var_10_1 = ebx
                int32_t i
                
                do
                    char ecx = *(eax - 3)
                    eax -= 4
                    arg2.b = *(eax + 3)
                    esi_5 = &esi_5[0xfffffffc]
                    ebx.b = *(eax + 2)
                    esi_5[3] = ecx
                    esi_5[2] = *eax
                    esi_5[1] = arg2.b
                    *esi_5 = ebx.b
                    i = i_4
                    i_4 -= 1
                while (i != 1)
        else
            char* edx_3 = arg1[1] + arg2
            char* esi_4 = edx_3
            
            if (i_4 != 0)
                int32_t i_1
                
                do
                    arg1.b = edx_3[0xffffffff]
                    edx_3 = &edx_3[0xfffffffe]
                    eax.b = *edx_3
                    esi_4 = &esi_4[0xfffffffe]
                    esi_4[1] = eax.b
                    *esi_4 = arg1.b
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
else if (*(arg1 + 9) != 8)
    char* esi_3 = arg1[1] + arg2
    char* edi_1 = esi_3
    
    if (i_4 != 0)
        char eax_9
        int32_t i_2
        
        do
            char eax_4 = esi_3[0xfffffffd]
            esi_3 = &esi_3[0xfffffff8]
            arg1.b = esi_3[7]
            edi_1 = &edi_1[0xfffffff8]
            arg2.b = esi_3[6]
            edi_1[7] = eax_4
            edi_1[6] = esi_3[4]
            edi_1[5] = esi_3[3]
            edi_1[4] = esi_3[2]
            edi_1[3] = esi_3[1]
            eax_9 = *esi_3
            edi_1[2] = eax_9
            edi_1[1] = arg1.b
            *edi_1 = arg2.b
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        return eax_9
else
    char* edx_1 = arg1[1] + arg2
    char* esi_1 = edx_1
    
    if (i_4 != 0)
        char eax_3
        int32_t i_3
        
        do
            char eax_1 = edx_1[0xfffffffe]
            edx_1 = &edx_1[0xfffffffc]
            arg1.b = edx_1[3]
            esi_1 = &esi_1[0xfffffffc]
            esi_1[3] = eax_1
            esi_1[2] = edx_1[1]
            eax_3 = *edx_1
            esi_1[1] = eax_3
            *esi_1 = arg1.b
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
        return eax_3

return eax
