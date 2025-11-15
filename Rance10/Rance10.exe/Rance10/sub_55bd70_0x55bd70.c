// 函数: sub_55bd70
// 地址: 0x55bd70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

void* eax_3
void* ecx_5

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_55bfd0(arg1)
    
    int32_t* ecx_7 = arg1[1]
    
    if (ecx_7 != 0)
        *ecx_7 = *arg2
        eax_3 = &arg2[1]
        ecx_5 = &ecx_7[1]
    label_55bde6:
        *(ecx_5 + 0x14) = 0xf
        *(ecx_5 + 0x10) = 0
        *ecx_5 = 0
        sub_4056a0(ecx_5, eax_3)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_55bfd0(arg1)
    
    int32_t* edx_4 = arg1[1]
    
    if (edx_4 != 0)
        int32_t* ecx_4 = *arg1 + (arg2 - eax) s/ 0x1c * 0x1c
        *edx_4 = *ecx_4
        eax_3 = &ecx_4[1]
        ecx_5 = &edx_4[1]
        goto label_55bde6
arg1[1] += 0x1c
