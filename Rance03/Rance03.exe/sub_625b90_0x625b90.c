// 函数: sub_625b90
// 地址: 0x625b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = 0xffffffff
int32_t ebx = *arg2
int32_t* eax_1 = arg2[2]
int32_t var_c = 0xffffffff
int32_t edi = eax_1[3]
int32_t ecx = 0
int32_t edx = *eax_1
*(arg1 + 0x1450) = 0
*(arg1 + 0x1454) = 0x23d

if (edi s> 0)
    do
        if (*(ebx + (ecx << 2)) == 0)
            *(ebx + (ecx << 2) + 2) = 0
        else
            *(arg1 + 0x1450) += 1
            ebp = ecx
            *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = ecx
            *(ecx + arg1 + 0x1458) = 0
        
        ecx += 1
    while (ecx s< edi)
    
    var_c = ebp

if (*(arg1 + 0x1450) s< 2)
    do
        int32_t ecx_1
        
        if (ebp s>= 2)
            ecx_1 = 0
        else
            ebp += 1
            ecx_1 = ebp
        
        *(arg1 + 0x1450) += 1
        *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = ecx_1
        *(ebx + (ecx_1 << 2)) = 1
        *(arg1 + ecx_1 + 0x1458) = 0
        *(arg1 + 0x16a8) -= 1
        
        if (edx != 0)
            *(arg1 + 0x16ac) -= zx.d(*(edx + (ecx_1 << 2) + 2))
    while (*(arg1 + 0x1450) s< 2)
    
    var_c = ebp

arg2[1] = ebp
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(*(arg1 + 0x1450))
uint32_t eax_8 = eax_7 - edx_1

for (int32_t i = eax_8 s>> 1; i s>= 1; i -= 1)
    eax_8 = sub_6257e0(eax_8, ebx, arg1, i)

int32_t ebp_1 = edi

do
    int32_t edi_3 = *(arg1 + 0xb60)
    int32_t eax_10 = *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c)
    *(arg1 + 0xb60) = eax_10
    *(arg1 + 0x1450) -= 1
    sub_6257e0(eax_10, ebx, arg1, 1)
    int32_t ecx_4 = *(arg1 + 0xb60)
    *(arg1 + 0x1454) -= 1
    int16_t* edx_4 = ebx + (ecx_4 << 2)
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = edi_3
    *(arg1 + 0x1454) -= 1
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = ecx_4
    int32_t eax_12
    eax_12.w = *edx_4
    eax_12.w += *(ebx + (edi_3 << 2))
    *(ebx + (ebp_1 << 2)) = eax_12.w
    eax_12.b = *(arg1 + edi_3 + 0x1458)
    ecx_4.b = *(arg1 + ecx_4 + 0x1458)
    char eax_13 = eax_12.b
    
    if (eax_12.b u< ecx_4.b)
        eax_13 = ecx_4.b
    
    *(arg1 + ebp_1 + 0x1458) = eax_13 + 1
    uint32_t eax_14 = zx.d(ebp_1.w)
    edx_4[1] = eax_14.w
    *(ebx + (edi_3 << 2) + 2) = eax_14.w
    *(arg1 + 0xb60) = ebp_1
    ebp_1 += 1
    sub_6257e0(eax_14, ebx, arg1, 1)
while (*(arg1 + 0x1450) s>= 2)

*(arg1 + 0x1454) -= 1
*(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = *(arg1 + 0xb60)
return sub_625af0(sub_6258b0(arg1, arg2), var_c, ebx, arg1 + 0xb3c)
