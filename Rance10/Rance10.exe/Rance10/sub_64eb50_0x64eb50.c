// 函数: sub_64eb50
// 地址: 0x64eb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_124
int32_t eax_1 = __security_cookie ^ &var_124
void* esi = *(arg1 + 0x198)
void* var_118 = esi
*(esi + 0x70) = **(arg1 + 0x18)
*(esi + 0x74) = *(*(arg1 + 0x18) + 4)

if (*(arg1 + 0xe0) != 0 && *(esi + 0x24) == 0)
    sub_64e690(esi, (*(esi + 0x28)).b)

int32_t eax_6 = *(arg1 + 0x160)
int32_t edx_2 = *(arg1 + 0x15c)
char ecx_2 = (*(arg1 + 0x168)).b
int32_t ebx = *(arg1 + 0x170)
int32_t eax_8 = *arg2
int32_t ebp = 0
int32_t eax_9 = eax_6
int32_t var_114 = 0
var_124 = edx_2
int32_t var_104[0x40]

if (edx_2 s<= eax_9)
    do
        int32_t eax_12 = sx.d(*(eax_8 + (*(&var_104 + ebx - &var_104 + (edx_2 << 2)) << 1)))
        
        if (eax_12 s< 0)
            eax_12 = neg.d(eax_12)
        
        int32_t eax_13 = eax_12 s>> ecx_2
        var_104[edx_2] = eax_13
        
        if (eax_13 == 1)
            ebp = edx_2
        
        edx_2 += 1
    while (edx_2 s<= eax_6)
    
    esi = var_118
    eax_9 = eax_6
    var_114 = ebp

int32_t ebp_1 = 0
char* edi_4 = *(esi + 0x88) + *(esi + 0x84)
int32_t i_2 = 0
int32_t ecx_3 = var_124

if (ecx_3 s<= eax_9)
    int32_t eax_14 = *(arg1 + 0x170)
    esi = var_118
    char** edx_4 = eax_14 + (ecx_3 << 2)
    char** var_120_1 = edx_4
    
    do
        int32_t eax_16 = *(&var_104 - eax_14 + edx_4)
        
        if (eax_16 != 0)
            if (ebp_1 s> 0xf)
                while (ecx_3 s<= var_114)
                    sub_64e520(esi)
                    int32_t edx_5 = *(esi + 0x7c)
                    char* eax_17
                    
                    if (*(esi + 0x6c) == 0)
                        void* edx_6 = *(esi + (edx_5 << 2) + 0x3c)
                        char* eax_18 = sx.d(*(edx_6 + 0x4f0))
                        eax_17 = sub_64e3c0(eax_18, *(edx_6 + 0x3c0), esi, eax_18)
                    else
                        eax_17 = *(esi + (edx_5 << 2) + 0x5c)
                        *(eax_17 + 0x3c0) += 1
                    
                    ebp_1 -= 0x10
                    
                    if (*(esi + 0x6c) == 0 && i_2 != 0)
                        int32_t i
                        
                        do
                            eax_17 = sub_64e3c0(eax_17, sx.d(*edi_4), esi, 1)
                            edi_4 = &edi_4[1]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    edi_4 = *(esi + 0x88)
                    i_2 = 0
                    ecx_3 = var_124
                    
                    if (ebp_1 s<= 0xf)
                        break
                
                edx_4 = var_120_1
            
            if (eax_16 s<= 1)
                sub_64e520(esi)
                int32_t edx_9 = *(esi + 0x7c)
                int32_t ebp_2 = ebp_1 << 4
                
                if (*(esi + 0x6c) == 0)
                    int32_t edx_10 = *(esi + (edx_9 << 2) + 0x3c)
                    char* eax_20 = sx.d(*(edx_10 + ebp_2 + 0x401))
                    sub_64e3c0(eax_20, *(edx_10 + (ebp_2 << 2) + 4), esi, eax_20)
                else
                    int32_t eax_19 = *(esi + (edx_9 << 2) + 0x5c)
                    *(eax_19 + (ebp_2 << 2) + 4) += 1
                
                char* eax_22
                eax_22.w = *(eax_8 + (*var_120_1 << 1))
                eax_22.w = not.w(eax_22.w)
                char* eax_23 = sub_64e3c0(eax_22, zx.d(eax_22.w) u>> 0xf, esi, 1)
                
                if (*(esi + 0x6c) == 0 && i_2 != 0)
                    int32_t i_1
                    
                    do
                        eax_23 = sub_64e3c0(eax_23, sx.d(*edi_4), esi, 1)
                        edi_4 = &edi_4[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                edi_4 = *(esi + 0x88)
                i_2 = 0
                ecx_3 = var_124
                ebp_1 = 0
                edx_4 = var_120_1
            else
                eax_16.b &= 1
                edi_4[i_2] = eax_16.b
                i_2 += 1
        else
            ebp_1 += 1
        
        ecx_3 += 1
        edx_4 = &edx_4[1]
        var_124 = ecx_3
        var_120_1 = edx_4
    while (ecx_3 s<= eax_6)
    
    if (ebp_1 s> 0 || i_2 != 0)
        *(esi + 0x80) += 1
        *(esi + 0x84) += i_2
        
        if (*(esi + 0x80) == 0x7fff || *(esi + 0x84) u> 0x3a9)
            sub_64e520(esi)

**(arg1 + 0x18) = *(esi + 0x70)
*(*(arg1 + 0x18) + 4) = *(esi + 0x74)
int32_t result = *(arg1 + 0xe0)

if (result != 0)
    if (*(esi + 0x24) == 0)
        *(esi + 0x24) = result
        *(esi + 0x28) = (*(esi + 0x28) + 1) & 7
    
    *(esi + 0x24) -= 1

result.b = 1
@__security_check_cookie@4(eax_1 ^ &var_124)
return result
