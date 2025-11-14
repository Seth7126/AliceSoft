// 函数: sub_512900
// 地址: 0x512900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x3c) != 0)
    void* __saved_esi = arg1
    return sub_512a70(arg1, arg4, arg2, arg3, arg5, *(arg1 + 0x10), *(arg1 + 0x1c), arg6, arg7, 
        arg8, arg9, arg10, arg11, arg12)

void* var_3c_1 = arg1
int32_t var_4 = 0
int32_t var_1c = 0
int32_t esi_1 = arg2 - int.d(fconvert.t(arg4))
int32_t var_c = *(arg1 + 0x20)
int32_t var_28 = 0
int32_t var_10 = 0
int32_t var_8 = *(arg1 + 0x24)
int32_t edi_1 = arg3 - int.d(fconvert.t(arg5))
int32_t var_24 = *(arg1 + 0x18)
int32_t var_20 = *(arg1 + 0x1c)
int32_t var_30 = *(arg1 + 0x10)
int32_t var_2c = *(arg1 + 0x14)
int32_t var_18 = *(arg1 + 8)
int32_t var_14 = *(arg1 + 0xc)
char eax_3
int32_t ecx
eax_3, ecx = sub_512ed0(esi_1, edi_1, &var_18, &var_30, &var_24)

if (eax_3 != 0)
    return 1

int32_t var_3c_2 = ecx
return sub_512ed0(esi_1, edi_1, &var_24, &var_30, &var_c) != 0
