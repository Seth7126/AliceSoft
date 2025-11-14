// 函数: sub_6696e0
// 地址: 0x6696e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* esi = arg4

if (esi s<= 0x20)
    int32_t* var_14 = arg3
    int128_t* var_18 = arg6
    return sub_66d4e0(arg3, arg2)

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(esi + 1)
int32_t edi_1 = (eax_2 - edx) s>> 1
arg4 = &arg3[edi_1 * 0xa]
int32_t eax_5 = sub_669a20(arg5)
int128_t* eax_7
void* esi_1

if (edi_1 s> eax_5)
    sub_6696e0(edi_1, arg5, arg6)
    esi_1 = esi - edi_1
    eax_7 = sub_6696e0(esi_1, arg5, arg6)
else
    esi_1 = esi - edi_1
    eax_7 =
        sub_66ac00(sub_66ac00(eax_5, arg4, arg3, edi_1, arg5, arg6), arg2, arg4, esi_1, arg5, arg6)

return sub_66acd0(eax_7, arg4, arg3, arg2, edi_1, esi_1, arg5, arg6)
