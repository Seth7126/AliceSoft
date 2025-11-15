// 函数: sub_6b2930
// 地址: 0x6b2930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg3
void* esi = arg3
char* eax = arg2
arg3.b = *(esi + 0xa)
void* edi_1 = *(esi + 4) + arg2

if (arg3.b == 2)
    arg3.b = *(esi + 9)
    
    if (arg3.b == 8)
        void* ecx
        
        if (arg4 == 0)
            eax = &arg2[1]
            ecx = 2
        else
            ecx = 1
        
        char* edx = ecx + arg2
        int32_t ebx_1 = 0
        uint32_t ebp_4 = (edi_1 - edx + 1) u>> 1
        
        if (edx u> edi_1)
            ebp_4 = 0
        
        if (ebp_4 != 0)
            do
                char ecx_1 = *edx
                edx = &edx[2]
                *eax = ecx_1
                ebx_1 += 1
                eax = &eax[1]
            while (ebx_1 u< ebp_4)
        
        *(esi + 0xb) = 8
        goto label_6b29dd
    
    if (arg3.b == 0x10)
        void* const ecx_2
        
        if (arg4 == 0)
            eax = &arg2[2]
            ecx_2 = 4
        else
            ecx_2 = 2
        
        void* edx_1 = ecx_2 + arg2
        
        while (edx_1 u< edi_1)
            *eax = *edx_1
            char ecx_4 = *(edx_1 + 1)
            edx_1 += 4
            eax[1] = ecx_4
            eax = &eax[2]
        
        *(esi + 0xb) = 0x10
    label_6b29dd:
        bool cond:0_1 = *(esi + 8) != 4
        *(esi + 0xa) = 1
        
        if (not(cond:0_1))
            void* eax_1 = eax - arg2
            *(esi + 8) = 0
            *(esi + 4) = eax_1
            return eax_1
        
        eax -= arg2
        *(esi + 4) = eax
else if (arg3.b == 4)
    arg3.b = *(esi + 9)
    
    if (arg3.b == 8)
        void* const ecx_6
        
        if (arg4 == 0)
            eax = &arg2[3]
            ecx_6 = 4
        else
            ecx_6 = 1
        
        void* edx_2 = ecx_6 + arg2
        
        while (edx_2 u< edi_1)
            *eax = *edx_2
            eax[1] = *(edx_2 + 1)
            char ecx_9 = *(edx_2 + 2)
            edx_2 += 4
            eax[2] = ecx_9
            eax = &eax[3]
        
        *(esi + 0xb) = 0x18
        goto label_6b2aa6
    
    if (arg3.b == 0x10)
        void* const ecx_10
        
        if (arg4 == 0)
            eax = &arg2[6]
            ecx_10 = 8
        else
            ecx_10 = 2
        
        void* edx_3 = ecx_10 + arg2
        
        while (edx_3 u< edi_1)
            *eax = *edx_3
            eax[1] = *(edx_3 + 1)
            eax[2] = *(edx_3 + 2)
            eax[3] = *(edx_3 + 3)
            eax[4] = *(edx_3 + 4)
            char ecx_16 = *(edx_3 + 5)
            edx_3 += 8
            eax[5] = ecx_16
            eax = &eax[6]
        
        *(esi + 0xb) = 0x30
    label_6b2aa6:
        bool cond:1_1 = *(esi + 8) != 6
        *(esi + 0xa) = 3
        
        if (not(cond:1_1))
            *(esi + 8) = 2
        
        eax -= arg2
        *(esi + 4) = eax

return eax
