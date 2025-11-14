// 函数: sub_5239c0
// 地址: 0x5239c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_2 = (arg4 - arg3) s>> 2

if (eax_2 s<= 0x28)
    int32_t __saved_ebx = arg5
    return sub_523cc0(eax_2, arg2, arg3, arg4)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
int32_t edi = eax_6 << 2
int32_t* eax_7 = &arg3[eax_6 * 2]
int32_t var_1c = arg5
sub_523cc0(eax_7, &arg3[eax_6], arg3, eax_7)
int32_t var_24 = arg5
int32_t* eax_8 = &arg2[eax_6]
sub_523cc0(eax_8, arg2, arg2 - edi, eax_8)
int32_t var_2c = arg5
void* eax_10 = arg4 - (eax_6 << 3)
int32_t* esi_2 = arg4 - edi
int32_t var_34 = arg5
return sub_523cc0(sub_523cc0(eax_10, esi_2, eax_10, arg4), arg2, &arg3[eax_6], esi_2)
