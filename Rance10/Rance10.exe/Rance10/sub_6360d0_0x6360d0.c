// 函数: sub_6360d0
// 地址: 0x6360d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* var_4 = arg3
int16_t* edi = arg3

if ((arg7 & 0x100) != 0)
    return sub_6376a0(arg7, arg2, arg3, arg4, arg5, arg6)

if ((arg7 & 0x800) != 0)
    void* var_18_1 = arg6
    return sub_637720(arg7, arg2, arg3, arg4, arg5)

int16_t* edx = arg4
int16_t* esi = edi
bool cond:0_1

if (edi == arg2)
label_636149:
    cond:0_1 = edx == arg5
else
    while (true)
        cond:0_1 = edx == arg5
        
        if (edx == arg5)
            break
        
        arg3.w = *esi
        esi = &esi[1]
        int32_t eax
        eax.w = *edx
        edx = &edx[1]
        
        if (arg3.w != eax.w)
            return edi
        
        if (esi == arg2)
            goto label_636149

if (cond:0_1)
    return esi

return edi
