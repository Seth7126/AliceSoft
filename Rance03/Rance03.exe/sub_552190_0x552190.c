// 函数: sub_552190
// 地址: 0x552190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t eax_2 = (arg4 - arg3) s>> 5
int32_t var_18 = arg5

if (eax_2 s<= 0x28)
    return sub_552af0(eax_2, arg2, arg3, arg4)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t edi_1 = ((edx & 7) + eax_4) s>> 3
int32_t edi_2 = edi_1 << 5
int32_t* ebp = &arg3[edi_1 * 8]
int32_t* eax_5 = &arg3[edi_1 * 0x10]
sub_552af0(eax_5, ebp, arg3, eax_5)
int32_t var_20 = arg5
int32_t* eax_6 = &arg2[edi_1 * 8]
sub_552af0(eax_6, arg2, arg2 - edi_2, eax_6)
int32_t var_28 = arg5
int32_t* esi_2 = arg4 - edi_2
void* eax_8 = arg4 - (edi_1 << 6)
int32_t var_30 = arg5
return sub_552af0(sub_552af0(eax_8, esi_2, eax_8, arg4), arg2, ebp, esi_2)
