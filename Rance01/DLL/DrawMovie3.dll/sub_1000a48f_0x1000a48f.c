// 函数: sub_1000a48f
// 地址: 0x1000a48f
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* var_14
sub_10004910(&var_14, arg1)
uint32_t eax = zx.d(arg2)
int32_t var_10
int32_t result

if ((*(var_10 + eax + 0x1d) & arg4) == 0)
    if (arg3 == 0)
        result = 0
    else
        result = zx.d(*(*(var_14 + 0xc8) + (eax << 1))) & arg3

if ((*(var_10 + eax + 0x1d) & arg4) != 0 || result != 0)
    result = 1

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
