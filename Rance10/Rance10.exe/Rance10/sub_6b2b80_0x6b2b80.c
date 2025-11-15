// 函数: sub_6b2b80
// 地址: 0x6b2b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebp = zx.d(*(arg2 + 9))
uint32_t edi = zx.d(*(arg1 + 0x148))

if (edi s>= 1 << ebp.b || edi.w == 0)
    return 

int32_t edi_1 = *(arg1 + 0x124)
char* eax = arg2[1] + edi_1
char ecx_4 = (neg.d(zx.d(*(arg2 + 0xb)) * *arg2)).b & 7

if (ebp - 1 u> 7)
    return 

switch (ebp)
    case 1
        if (eax u> edi_1)
            do
                int32_t edx
                edx.b = *eax
                edx.b u>>= ecx_4
                
                if (edx.b != 0)
                    *(arg1 + 0x14c) = 1
                
                eax -= 1
                ecx_4 = 0
            while (eax u> edi_1)
    case 2
        if (eax u> edi_1)
            uint32_t esi_1 = *(arg1 + 0x14c)
            
            do
                uint32_t edx_2 = zx.d(*eax) u>> ecx_4
                uint32_t ecx_6 = edx_2 & 3
                
                if (ecx_6 s> esi_1)
                    esi_1 = ecx_6
                
                uint32_t ecx_9 = edx_2 u>> 2 & 3
                
                if (ecx_9 s> esi_1)
                    esi_1 = ecx_9
                
                uint32_t ecx_12 = edx_2 u>> 4 & 3
                
                if (ecx_12 s> esi_1)
                    esi_1 = ecx_12
                
                uint32_t edx_3 = edx_2 u>> 6
                
                if (edx_3 s> esi_1)
                    esi_1 = edx_3
                
                eax -= 1
                ecx_4 = 0
            while (eax u> edi_1)
            
            *(arg1 + 0x14c) = esi_1
    case 4
        if (eax u> edi_1)
            uint32_t esi_2 = *(arg1 + 0x14c)
            
            do
                uint32_t edx_5 = zx.d(*eax) u>> ecx_4
                uint32_t ecx_14 = edx_5 & 0xf
                
                if (ecx_14 s> esi_2)
                    esi_2 = ecx_14
                
                uint32_t edx_6 = edx_5 u>> 4
                
                if (edx_6 s> esi_2)
                    esi_2 = edx_6
                
                eax -= 1
                ecx_4 = 0
            while (eax u> edi_1)
            
            *(arg1 + 0x14c) = esi_2
    case 8
        if (eax u> edi_1)
            uint32_t edx_7 = *(arg1 + 0x14c)
            
            do
                uint32_t ecx_15 = zx.d(*eax)
                
                if (ecx_15 s> edx_7)
                    edx_7 = ecx_15
                
                eax -= 1
            while (eax u> edi_1)
            
            *(arg1 + 0x14c) = edx_7
