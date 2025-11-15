// 函数: sub_495780
// 地址: 0x495780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

int32_t* eax_1
char* ecx_3

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_10_3 = ecx
        sub_495840(arg1)
    
    char* esi_6 = arg1[1]
    
    if (esi_6 != 0)
        *(esi_6 + 0x14) = 0xf
        *(esi_6 + 0x10) = 0
        *esi_6 = 0
        sub_4056a0(esi_6, arg2)
        eax_1 = &arg2[6]
        ecx_3 = &esi_6[0x18]
    label_495819:
        *(ecx_3 + 0x14) = 0xf
        *(ecx_3 + 0x10) = 0
        *ecx_3 = 0
        sub_4056a0(ecx_3, eax_1)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_495840(arg1)
    
    char* ebx_2 = arg1[1]
    
    if (ebx_2 != 0)
        int32_t* esi_5 = ((edx_2 u>> 0x1f) + edx_2) * 0x30 + *arg1
        *(ebx_2 + 0x14) = 0xf
        *(ebx_2 + 0x10) = 0
        *ebx_2 = 0
        sub_4056a0(ebx_2, esi_5)
        eax_1 = &esi_5[6]
        ecx_3 = &ebx_2[0x18]
        goto label_495819
arg1[1] += 0x30
