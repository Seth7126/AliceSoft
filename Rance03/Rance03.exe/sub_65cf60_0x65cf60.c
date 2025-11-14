// 函数: sub_65cf60
// 地址: 0x65cf60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg2
int32_t* var_4 = eax
int32_t* ebp = arg3

if (arg4 s>= 0x20)
    uint32_t i_1 = arg4 u>> 5
    uint32_t i
    
    do
        int32_t* var_1c_1 = arg3
        int32_t var_20_1 = arg6
        sub_660020(arg3, &arg3[0x600])
        arg3 = &arg3[0x600]
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax = var_4

int32_t* var_1c_2 = arg3
int32_t var_20_2 = arg6
int32_t* result = sub_660020(arg3, eax)
int32_t esi_2 = 0x20

if (arg4 s> 0x20)
    do
        int32_t var_1c_3 = arg6
        int32_t* ecx = *(arg5 + 0x10)
        int32_t var_20_3 = arg4
        int32_t var_24_1 = esi_2
        ecx[1] = *ecx
        int32_t eax_2 = *(arg5 + 0x10)
        int32_t var_28_1 = eax_2
        int32_t eax_3 = sub_6601b0(eax_2, var_4, ebp, 0, 0, 0, 0)
        int32_t** ecx_2 = *(arg5 + 0x10)
        int32_t esi_3 = esi_2 * 2
        result = sub_660310(eax_3, ecx_2[1], *ecx_2, ebp, esi_3, arg4, arg6)
        esi_2 = esi_3 * 2
    while (esi_2 s< arg4)

return result
