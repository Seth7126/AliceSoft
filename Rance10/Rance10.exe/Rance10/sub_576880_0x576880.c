// 函数: sub_576880
// 地址: 0x576880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg3

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    return sub_576cf0(arg3, arg2)

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
    sub_576880(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_7 = sub_576880(esi_1, arg5, arg6)
else
    int32_t var_1c_1 = ecx_1
    esi_1 = arg4 - edi_1
    eax_7 = sub_576d80(sub_576d80(eax_5, &arg3[edi_1], arg3, edi_1, arg5), arg2, &arg3[edi_1], 
        esi_1, arg5)

return sub_576e40(eax_7, &arg3[edi_1], arg3, arg2, edi_1, esi_1, arg5, arg6)
