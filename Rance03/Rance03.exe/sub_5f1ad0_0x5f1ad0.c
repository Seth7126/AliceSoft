// 函数: sub_5f1ad0
// 地址: 0x5f1ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x3c) s<= 0 || *(arg1 + 0x40) s<= 0)
    int32_t eax
    eax.b = 0
    return eax

char* eax_2 = (*(*(arg1 + 0xc) + 8))(0, 0)
int32_t ebx = *(arg1 + 0x3c)
char* esi = eax_2
int32_t i = 0
int32_t eax_5 = (*(*(arg1 + 0xc) + 0x1c))() - ebx

if (*(arg1 + 0x40) s> 0)
    do
        int32_t ecx_2 = 0
        
        if (ebx s> 0)
            do
                *esi = 0
                ecx_2 += 1
                ebx = *(arg1 + 0x3c)
                esi = &esi[1]
            while (ecx_2 s< ebx)
        
        i += 1
        esi = &esi[eax_5]
    while (i s< *(arg1 + 0x40))

eax_5.b = 1
return eax_5
