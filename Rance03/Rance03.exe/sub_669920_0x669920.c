// 函数: sub_669920
// 地址: 0x669920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 s<= 0x20)
    int128_t* var_14 = arg3
    int128_t* var_18 = arg6
    return sub_66e240(arg3, arg2)

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_2 - edx) s>> 1
void* eax_4 = arg3 + edi_1 * 0x28
int32_t eax_5 = sub_669a20(arg5)
int128_t* eax_7
void* esi_1

if (edi_1 s> eax_5)
    sub_669920(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_7 = sub_669920(esi_1, arg5, arg6)
else
    esi_1 = arg4 - edi_1
    eax_7 = sub_66b4f0(sub_66b4f0(eax_5, eax_4, arg3, edi_1, arg5, arg6), arg2, eax_4, esi_1, arg5, 
        arg6)

return sub_66b5c0(eax_7, eax_4, arg3, arg2, edi_1, esi_1, arg5, arg6)
