// 函数: sub_659d10
// 地址: 0x659d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x188)
int32_t ecx = *(arg1 + 0x34)
int32_t edx_1 = *(arg1 + 0x30) * edi
void* eax_21

if (edx_1 u<= ecx)
    void* eax_1 = *(arg1 + 0x1c) - 1
    *(arg1 + 0x120) = 1
    *(arg1 + 0x124) = 1
    *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_1 + edi), edi)
    eax_21 = *(arg1 + 0x20) - 1 + edi
else if (edx_1 u<= ecx * 2)
    int32_t eax_7 = *(arg1 + 0x1c)
    *(arg1 + 0x120) = 2
    *(arg1 + 0x124) = 2
    *(arg1 + 0x5c) = divs.dp.d(sx.q((eax_7 << 1) + 0xffffffff + edi), edi)
    eax_21 = (*(arg1 + 0x20) << 1) + 0xffffffff + edi
else if (edx_1 u<= ecx * 3)
    int32_t ecx_1 = *(arg1 + 0x1c)
    *(arg1 + 0x120) = 3
    *(arg1 + 0x124) = 3
    int32_t ecx_3 = *(arg1 + 0x20)
    *(arg1 + 0x5c) = divs.dp.d(sx.q(edi + (ecx_1 << 1) + ecx_1 - 1), edi)
    eax_21 = (ecx_3 << 1) + 0xffffffff + edi + ecx_3
else if (edx_1 u<= ecx << 2)
    int32_t eax_23 = *(arg1 + 0x1c)
    *(arg1 + 0x120) = 4
    *(arg1 + 0x124) = 4
    *(arg1 + 0x5c) = divs.dp.d(sx.q((eax_23 << 2) + 0xffffffff + edi), edi)
    eax_21 = (*(arg1 + 0x20) << 2) + 0xffffffff + edi
else if (edx_1 u> ecx * 5)
    if (edx_1 u<= ecx * 6)
        int32_t eax_38 = *(arg1 + 0x1c)
        *(arg1 + 0x120) = 6
        *(arg1 + 0x124) = 6
        *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_38 * 6 + 0xffffffff + edi), edi)
        eax_21 = *(arg1 + 0x20) * 6 + 0xffffffff + edi
    else if (edx_1 u<= ecx * 7)
        int32_t eax_48 = *(arg1 + 0x1c)
        *(arg1 + 0x120) = 7
        *(arg1 + 0x124) = 7
        *(arg1 + 0x5c) = divs.dp.d(sx.q(edi - 1 + eax_48 * 7), edi)
        eax_21 = edi - 1 + *(arg1 + 0x20) * 7
    else if (edx_1 u<= ecx << 3)
        int32_t eax_56 = *(arg1 + 0x1c)
        *(arg1 + 0x120) = 8
        *(arg1 + 0x124) = 8
        *(arg1 + 0x5c) = divs.dp.d(sx.q((eax_56 << 3) + 0xffffffff + edi), edi)
        eax_21 = (*(arg1 + 0x20) << 3) + 0xffffffff + edi
    else if (edx_1 u> ecx * 9)
        if (edx_1 u<= ecx * 0xa)
            int32_t eax_71 = *(arg1 + 0x1c)
            *(arg1 + 0x120) = 0xa
            *(arg1 + 0x124) = 0xa
            *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_71 * 0xa + 0xffffffff + edi), edi)
            eax_21 = *(arg1 + 0x20) * 0xa + 0xffffffff + edi
        else if (edx_1 u<= ecx * 0xb)
            int32_t eax_80 = *(arg1 + 0x1c) * 0xb
            *(arg1 + 0x120) = 0xb
            *(arg1 + 0x124) = 0xb
            *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_80 - 1 + edi), edi)
            eax_21 = *(arg1 + 0x20) * 0xb - 1 + edi
        else if (edx_1 u<= ecx * 0xc)
            int32_t eax_87 = *(arg1 + 0x1c)
            *(arg1 + 0x120) = 0xc
            *(arg1 + 0x124) = 0xc
            *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_87 * 0xc + 0xffffffff + edi), edi)
            eax_21 = *(arg1 + 0x20) * 0xc + 0xffffffff + edi
        else if (edx_1 u> ecx * 0xd)
            if (edx_1 u<= ecx * 0xe)
                int32_t eax_104 = *(arg1 + 0x1c)
                *(arg1 + 0x120) = 0xe
                *(arg1 + 0x124) = 0xe
                *(arg1 + 0x5c) = divs.dp.d(sx.q(edi - 1 + eax_104 * 0xe), edi)
                eax_21 = edi - 1 + *(arg1 + 0x20) * 0xe
            else if (edx_1 u> ecx * 0xf)
                void* eax_121 = (*(arg1 + 0x1c) << 4) - 1
                *(arg1 + 0x120) = 0x10
                *(arg1 + 0x124) = 0x10
                *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_121 + edi), edi)
                eax_21 = (*(arg1 + 0x20) << 4) - 1 + edi
            else
                void* eax_115 = edi - 1 + *(arg1 + 0x1c) * 0xf
                *(arg1 + 0x120) = 0xf
                int32_t ecx_23 = *(arg1 + 0x20) * 0xf
                *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_115), edi)
                eax_21 = edi - 1 + ecx_23
                *(arg1 + 0x124) = 0xf
        else
            int32_t eax_96 = *(arg1 + 0x1c) * 0xd
            *(arg1 + 0x120) = 0xd
            *(arg1 + 0x124) = 0xd
            *(arg1 + 0x5c) = divs.dp.d(sx.q(eax_96 - 1 + edi), edi)
            eax_21 = *(arg1 + 0x20) * 0xd - 1 + edi
    else
        int32_t ecx_11 = *(arg1 + 0x1c)
        *(arg1 + 0x120) = 9
        *(arg1 + 0x124) = 9
        int32_t ecx_13 = *(arg1 + 0x20)
        *(arg1 + 0x5c) = divs.dp.d(sx.q(edi + (ecx_11 << 3) + ecx_11 - 1), edi)
        eax_21 = (ecx_13 << 3) + 0xffffffff + edi + ecx_13
else
    int32_t ecx_4 = *(arg1 + 0x1c)
    *(arg1 + 0x120) = 5
    *(arg1 + 0x124) = 5
    int32_t ecx_6 = *(arg1 + 0x20)
    *(arg1 + 0x5c) = divs.dp.d(sx.q(edi + (ecx_4 << 2) + ecx_4 - 1), edi)
    eax_21 = (ecx_6 << 2) + 0xffffffff + edi + ecx_6

int32_t result = divs.dp.d(sx.q(eax_21), edi)
void* ecx_24 = *(arg1 + 0xc4)
int32_t i = 0
*(arg1 + 0x60) = result

if (*(arg1 + 0x24) s> 0)
    void* ecx_25 = ecx_24 + 0x28
    
    do
        ecx_25 += 0x58
        *(ecx_25 - 0x5c) = *(arg1 + 0x120)
        i += 1
        result = *(arg1 + 0x124)
        *(ecx_25 - 0x58) = result
    while (i s< *(arg1 + 0x24))

return result
