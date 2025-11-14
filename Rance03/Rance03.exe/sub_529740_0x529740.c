// 函数: sub_529740
// 地址: 0x529740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* edi = nullptr
int128_t* eax

if (arg2 != 0)
    if (arg2 u> 0x9249249)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 * 0x1c)
    edi = eax
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_529900(eax, arg1[1], *arg1, edi)
int32_t ecx_2 = arg1[1] - *arg1
int32_t eax_5 = *arg1

if (eax_5 != 0)
    j__free(eax_5)

*arg1 = edi
arg1[2] = edi + arg2 * 0x1c
void* result = edi + ecx_2 s/ 0x1c * 0x1c
arg1[1] = result
return result
