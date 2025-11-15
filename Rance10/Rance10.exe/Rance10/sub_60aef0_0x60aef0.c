// 函数: sub_60aef0
// 地址: 0x60aef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x4c)

for (int32_t edi = *(arg1 + 0x50); i != edi; i = &i[0xe])
    sub_60e600(i)

*(arg1 + 0x50) = *(arg1 + 0x4c)
char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
label_60afbd:
    struct _EXCEPTION_REGISTRATION_RECORD** eax_1
    eax_1.b = 0
    return eax_1

uint32_t esi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]

if (esi_6 s> 0)
    sub_60bed0(arg1 + 0x4c, esi_6)
    int32_t var_18_1 = 0
    
    if (esi_6 s> 0)
        int32_t edi_2 = 0
        int32_t ecx_8
        
        do
            if (sub_625aa0(*(arg1 + 0x4c) + edi_2, arg2).b == 0)
                goto label_60afbd
            
            uint32_t var_10
            sub_60d7d0(arg1 + 0xd4, &var_10, *(arg1 + 0x4c) + edi_2)
            edi_2 += 0x38
            *(var_10 + 0x20) = var_18_1
            ecx_8 = var_18_1 + 1
            var_18_1 = ecx_8
        while (ecx_8 s< esi_6)

uint32_t eax_4
eax_4.b = 1
return eax_4
