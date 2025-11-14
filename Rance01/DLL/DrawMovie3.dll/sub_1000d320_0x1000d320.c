// 函数: sub_1000d320
// 地址: 0x1000d320
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax = *(arg1 + 0x10c)
int32_t var_18

if (eax s>= 0)
    int32_t edx_1
    edx_1.b = eax s<= *(arg1 + 0xf4) * 2
    var_18 = edx_1
else
    var_18 = 0

int32_t esi = 0x3e8

if (eax s>= 0)
    if (arg3 s< 0 || (arg3 s<= 0 && arg2 u<= 0))
        int32_t ecx_2 = *(arg1 + 0x108)
        
        if (ecx_2 s> 0x4e20 && arg3 s<= 0xffffffff && (arg3 s< 0xffffffff || arg2 u< 0xffffb1e0))
            if (ecx_2 s< eax && eax + 0x4e20 s> ecx_2)
                esi = divs.dp.d(sx.q(eax), eax - ecx_2 + 0x4e20) * 0x3e8
            
            if (ecx_2 s>= eax || eax + 0x4e20 s<= ecx_2 || esi s> 0x7d0)
                esi = 0x7d0
    else
        esi = 0x3e8 - __alldiv(arg2, arg3, 0x2710, 0)
        
        if (esi s< 0x1f4)
            esi = 0x1f4

int32_t eax_6
int32_t edx_6
edx_6:eax_6 = sx.q(*(arg1 + 0xf4))
int32_t eax_9
int32_t edx_7
edx_7:eax_9 = sx.q((eax_6 - edx_6) s>> 1)
void* ebx_1 = eax_9 + arg2
int32_t ebp_1 = adc.d(edx_7, arg3, eax_9 + arg2 u< eax_9)

if (*(arg1 + 0xac) == 0)
    void* eax_10 = *(arg1 + 0x78)
    arg2 = nullptr
    int32_t* eax_11 = *(eax_10 + 0x18)
    
    if ((**eax_11)(eax_11, 0x1001bd60, &arg2) s>= 0)
        *(arg1 + 0xac) = arg2

int32_t* ecx_5 = *(arg1 + 0xac)

if (ecx_5 == 0)
    return 1

arg2 = arg1 + 0xc
return (*(*ecx_5 + 0xc))(ecx_5, arg2, var_18, esi, ebx_1, ebp_1, arg4, arg5)
