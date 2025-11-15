// 函数: sub_581090
// 地址: 0x581090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_581130(arg1)
    
    int128_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *arg2
        ecx_4[1] = arg2[1]
        ecx_4[2] = arg2[2]
        ecx_4[3].d = arg2[3].d
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x4ec4ec4f, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 4
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_581130(arg1)
    
    int128_t* ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        int128_t* eax_2 = ((edx_2 u>> 0x1f) + edx_2) * 0x34 + *arg1
        *ecx_2 = *eax_2
        ecx_2[1] = eax_2[1]
        ecx_2[2] = eax_2[2]
        ecx_2[3].d = eax_2[3].d
        arg1[1] += 0x34
        return 

arg1[1] += 0x34
