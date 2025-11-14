// 函数: sub_10017195
// 地址: 0x10017195
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int16_t x87control
int16_t x87status
int16_t x87tag
uint864_t temp0
temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg1, arg3, arg2)
double var_78
int32_t eax
int80_t st0
st0, eax = sub_10017899(fconvert.d(arg5), fconvert.d(arg4), &var_78)
__frstor_memmem108(temp0)

if (eax == 0)
    return fconvert.t(var_78)

void* ebp
return sub_10017389(ebp) __tailcall
