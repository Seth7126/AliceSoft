// 函数: sub_431bd0
// 地址: 0x431bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

int32_t* var_c_1
char* ecx_3

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        sub_4170d0(arg1, 1)
    
    ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        var_c_1 = arg2
    label_431c2e:
        *(ecx_3 + 0x14) = 0xf
        *(ecx_3 + 0x10) = 0
        *ecx_3 = 0
        sub_4056a0(ecx_3, var_c_1)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 2
    
    if (ecx == arg1[2])
        sub_4170d0(arg1, 1)
    
    ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        var_c_1 = *arg1 + ((edx_2 u>> 0x1f) + edx_2) * 0x18
        goto label_431c2e
arg1[1] += 0x18
