// 函数: sub_5793b0
// 地址: 0x5793b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
int32_t eax

if (arg2 != 0)
    if (arg2 u> 0x25ed097)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 * 0x6c)
    esi = eax
    
    if (esi == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_57a130(eax, arg1[1], *arg1, esi)
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t eax_3 = *arg1
int32_t edx_2 = edx_1 s>> 5

if (eax_3 != 0)
    j__free(eax_3)

*arg1 = esi
arg1[2] = arg2 * 0x6c + esi
int32_t result = ((edx_2 u>> 0x1f) + edx_2) * 0x6c + esi
arg1[1] = result
return result
