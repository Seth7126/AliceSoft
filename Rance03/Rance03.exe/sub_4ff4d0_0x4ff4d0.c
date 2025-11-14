// 函数: sub_4ff4d0
// 地址: 0x4ff4d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
float arg_4
float edi = arg_4
int32_t eax_1 = edi & 0x80000001
bool cond:0 = eax_1 == 0

if (eax_1 s< 0)
    cond:0 = ((eax_1 - 1) | 0xfffffffe) == 0xffffffff

if (not(cond:0))
    edi += 1

int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*(arg1 + 0x1c))))
arg_4 = fconvert.s(st0)
int32_t esi = int.d(fconvert.t(arg_4))
double var_18_1 = fconvert.d(fconvert.t(*(arg1 + 0x20)))
var_4 = esi
arg_4 = fconvert.s(sub_6b1380(mxcsr, x87control_1, var_18_1))
int32_t eax_5 = int.d(fconvert.t(arg_4))
int32_t* ecx = &arg_4
arg_4 = eax_5

if (esi s>= eax_5)
    ecx = &var_4

int32_t result = *ecx * 2
*(arg1 + 8) = edi i- result
return result
