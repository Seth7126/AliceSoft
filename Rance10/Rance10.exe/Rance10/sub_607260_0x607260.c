// 函数: sub_607260
// 地址: 0x607260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = 0
*arg5 = 0
void* eax_2 = sub_622690(arg7, *(arg7 + 0x18))

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

int32_t esi_2 = (*(arg6 + 0x74) - *(arg6 + 0x70)) s/ 0x70
int32_t* eax_4 = sub_60b5b0(arg6, arg2)
int32_t var_28_2 = sub_6061c0(arg1 + 0x10, esi_2 + 1)
sub_608b60(arg1 + 4)
int32_t* eax_5 = *(arg1 + 4)
int32_t esi_3 = 0
int32_t var_14 = 0
*eax_5 = 0

if (esi_2 s> 0)
    do
        void* edx_4 = esi_3 * 0x70 + *(arg6 + 0x70)
        int32_t eax_7 = *(edx_4 + 0x48)
        
        if (eax_7 != 0xffffffff && eax_7 == eax_4 && *(edx_4 + 0x28) != 0)
            if (esi_3 u>= *(eax_2 + 0x14) u>> 2)
                goto label_6073b9
            
            uint32_t eax_11 = *(*(eax_2 + 0x10) + (esi_3 << 2))
            int32_t esi_4 = esi_3 << 5
            *(esi_4 + *(arg1 + 0x10)) = *(edx_4 + 0x34)
            char* ecx_12 = *(arg1 + 0x10) + 8 + esi_4
            
            if (ecx_12 != edx_4 + 0x18)
                sub_403590(ecx_12, edx_4 + 0x18, 0, 0xffffffff)
            
            uint32_t* ecx_13 = *(arg1 + 0x10)
            
            if (sub_608330(ecx_13[esi_3 * 8], eax_11, &ecx_13[1 + esi_3 * 8], arg7).b == 0)
                goto label_6073b9
            
            sub_404370(*(arg1 + 4) + 4, &var_14)
            esi_3 = var_14
            ebp += 1
        
        esi_3 += 1
        var_14 = esi_3
    while (esi_3 s< esi_2)

sub_607430(arg1)
uint32_t eax_9
int32_t ecx_19
eax_9, ecx_19 = sub_607af0(arg1, esi_2, arg2, arg3, arg4)

if (eax_9.b == 0)
label_6073b9:
    eax_9.b = 0
    return eax_9

void* var_28_6 = arg6
int32_t var_2c_3 = ecx_19
int32_t ecx_21 = sub_606dc0(*(arg1 + 0x10), *(arg1 + 0x14))
*(arg1 + 0x14) = *(arg1 + 0x10)
void* var_28_7 = arg6
int32_t var_2c_4 = ecx_21
sub_417d50(*(arg1 + 0x1c), *(arg1 + 0x20))
*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t ebx_1 = *(arg1 + 0x2c)

for (void* i = *(arg1 + 0x28); i != ebx_1; i += 0x1c)
    sub_606fa0(i)

*(arg1 + 0x2c) = *(arg1 + 0x28)
*(arg1 + 0x38) = *(arg1 + 0x34)
*arg5 = ebp
int32_t* eax_19
eax_19.b = 1
return eax_19
