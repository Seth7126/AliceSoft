// 函数: sub_50bf10
// 地址: 0x50bf10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = nullptr
int32_t* eax

if (arg2 != 0)
    if (arg2 u> 0x1fffffff)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 << 3)
    esi = eax
    
    if (esi == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_4c1730(eax, arg1[1], *arg1, esi)
int32_t eax_2 = *arg1
int32_t ebp_2 = (arg1[1] - eax_2) s>> 3

if (eax_2 != 0)
    j__free(eax_2)

*arg1 = esi
arg1[2] = &esi[arg2 * 2]
void* result = &esi[ebp_2 * 2]
arg1[1] = result
return result
