// 函数: sub_634fd0
// 地址: 0x634fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg3
uint32_t esi = arg3
char* eax = arg2
arg3.b = *(esi + 0xa)
void* edi_1 = *(esi + 4) + arg2

if (arg3.b == 2)
    arg3.b = *(esi + 9)
    
    if (arg3.b == 8)
        char* edx
        
        if (arg4 == 0)
            edx = &arg2[2]
            eax = &arg2[1]
        else
            edx = &arg2[1]
        
        uint32_t ecx_3 = (edi_1 - edx + 1) u>> 1
        int32_t ebx_1 = 0
        
        if (edx u> edi_1)
            ecx_3 = 0
        
        var_4 = ecx_3
        
        if (ecx_3 != 0)
            uint32_t edi_3 = ecx_3
            
            do
                ecx_3.b = *edx
                edx = &edx[2]
                *eax = ecx_3.b
                ebx_1 += 1
                eax = &eax[1]
            while (ebx_1 u< edi_3)
        
        *(esi + 0xb) = 8
        goto label_63506d
    
    if (arg3.b == 0x10)
        void* edx_1
        
        if (arg4 == 0)
            edx_1 = &arg2[4]
            eax = &arg2[2]
        else
            edx_1 = &arg2[2]
        
        while (edx_1 u< edi_1)
            *eax = *edx_1
            char ecx_5 = *(edx_1 + 1)
            edx_1 += 4
            eax[1] = ecx_5
            eax = &eax[2]
        
        *(esi + 0xb) = 0x10
    label_63506d:
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
        void* edx_2
        
        if (arg4 == 0)
            edx_2 = &arg2[4]
            eax = &arg2[3]
        else
            edx_2 = &arg2[1]
        
        while (edx_2 u< edi_1)
            *eax = *edx_2
            eax[1] = *(edx_2 + 1)
            char ecx_9 = *(edx_2 + 2)
            edx_2 += 4
            eax[2] = ecx_9
            eax = &eax[3]
        
        *(esi + 0xb) = 0x18
        goto label_635126
    
    if (arg3.b == 0x10)
        void* edx_3
        
        if (arg4 == 0)
            edx_3 = &arg2[8]
            eax = &arg2[6]
        else
            edx_3 = &arg2[2]
        
        while (edx_3 u< edi_1)
            *eax = *edx_3
            eax[1] = *(edx_3 + 1)
            eax[2] = *(edx_3 + 2)
            eax[3] = *(edx_3 + 3)
            eax[4] = *(edx_3 + 4)
            char ecx_15 = *(edx_3 + 5)
            edx_3 += 8
            eax[5] = ecx_15
            eax = &eax[6]
        
        *(esi + 0xb) = 0x30
    label_635126:
        bool cond:1_1 = *(esi + 8) != 6
        *(esi + 0xa) = 3
        
        if (not(cond:1_1))
            *(esi + 8) = 2
        
        eax -= arg2
        *(esi + 4) = eax

return eax
