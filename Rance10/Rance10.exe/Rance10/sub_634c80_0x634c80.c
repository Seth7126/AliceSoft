// 函数: sub_634c80
// 地址: 0x634c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax = arg8
int16_t** var_4 = arg3
*arg3 = arg5
int16_t* edi = arg2

if ((eax & 0x100) != 0)
    *arg3 = *sub_636230(eax, arg2, &arg8, arg4, arg5, arg6, arg7)
    return arg3

if ((eax & 0x800) != 0)
    void* var_1c_1 = arg7
    *arg3 = *sub_6362c0(eax, arg2, &arg8, arg4, arg5, arg6)
    return arg3

int16_t* ebx_1 = arg4
int16_t* ecx_2 = ebx_1
bool cond:0_1

if (ebx_1 == arg5)
label_634d1b:
    cond:0_1 = edi == arg6
else
    while (true)
        cond:0_1 = edi == arg6
        
        if (edi == arg6)
            break
        
        arg2.w = *edi
        int16_t* eax_7 = ecx_2
        ecx_2 = &ecx_2[1]
        edi = &edi[1]
        
        if (*eax_7 != arg2.w)
            goto label_634d27
        
        if (ecx_2 == arg5)
            goto label_634d1b

if (cond:0_1)
    ebx_1 = ecx_2

label_634d27:
*var_4 = ebx_1
return var_4
