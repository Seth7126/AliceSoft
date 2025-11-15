// 函数: sub_5ab920
// 地址: 0x5ab920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg3

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    return sub_5ab9d0(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_3 - edx) s>> 1
int32_t eax_5
int32_t ecx_1
eax_5, ecx_1 = sub_576930(arg5)
void* eax_7
int32_t esi_1

if (edi_1 s> eax_5)
    sub_5ab920(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_7 = sub_5ab920(esi_1, arg5, arg6)
else
    int32_t var_1c_1 = ecx_1
    esi_1 = arg4 - edi_1
    eax_7 = sub_5abae0(sub_5abae0(eax_5, &arg3[edi_1], arg3, edi_1, arg5), arg2, &arg3[edi_1], 
        esi_1, arg5)

long double x87_r0
long double x87_r1
return sub_5abba0(eax_7, &arg3[edi_1], arg3, x87_r0, x87_r1, arg2, edi_1, esi_1, arg5, arg6)
