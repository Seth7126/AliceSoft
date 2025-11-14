// 函数: sub_59df00
// 地址: 0x59df00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* ebx = nullptr
int128_t* eax

if (arg2 != 0)
    if (arg2 u> 0xfffffff)
        sub_69a4fc()
        noreturn
    
    eax = sub_69adc6(arg2 << 4)
    ebx = eax
    
    if (ebx == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_59dfb0(eax, arg1[1], *arg1, ebx)
int32_t result = *arg1
int32_t edi_1 = arg1[1] - result

if (result != 0)
    result = j__free(result)

*arg1 = ebx
arg1[1] = (edi_1 & 0xfffffff0) + ebx
arg1[2] = &ebx[arg2]
return result
