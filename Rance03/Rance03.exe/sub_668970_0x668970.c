// 函数: sub_668970
// 地址: 0x668970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* edi = nullptr
int128_t* eax

if (arg2 != 0)
    if (arg2 u> 0x6666666)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 * 0x28)
    edi = eax
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_66b800(eax, arg1[1], *arg1, edi)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x66666667, arg1[1] - *arg1)
int32_t eax_4 = *arg1
int32_t edx_2 = edx_1 s>> 4

if (eax_4 != 0)
    j__free(eax_4)

*arg1 = edi
arg1[2] = edi + arg2 * 0x28
void* result = edi + ((edx_2 u>> 0x1f) + edx_2) * 0x28
arg1[1] = result
return result
