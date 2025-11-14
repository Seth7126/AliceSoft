// 函数: sub_5fb690
// 地址: 0x5fb690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0
int32_t eax

if (arg2 != 0)
    if (arg2 u> 0x2222222)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 * 0x78)
    edi = eax
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_5fb730(eax, arg1[1], *arg1, edi)
int32_t ecx_2 = arg1[1] - *arg1
int32_t eax_6 = *arg1

if (eax_6 != 0)
    j__free(eax_6)

*arg1 = edi
arg1[2] = edi + arg2 * 0x78
int32_t result = edi + ecx_2 s/ 0x78 * 0x78
arg1[1] = result
return result
