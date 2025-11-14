// 函数: sub_4ff540
// 地址: 0x4ff540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 8)
int32_t edi = ebx
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
st0, x87control_1 = sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*(arg1 + 0x20))))
float var_8 = fconvert.s(st0)
int32_t eax_5 = int.d(fconvert.t(var_8))
int32_t esi = ebx
double var_20_1 = fconvert.d(fconvert.t(*(arg1 + 0x1c)))

if (eax_5 s< ebx)
    esi = eax_5

int32_t var_4 = esi
var_8 = fconvert.s(sub_6b1380(mxcsr, x87control_1, var_20_1))
int32_t eax_6 = int.d(fconvert.t(var_8))

if (eax_6 s< ebx)
    ebx = eax_6

int32_t* eax_7 = &var_4
var_8 = ebx

if (ebx s>= esi)
    eax_7 = &var_8

return edi + (*eax_7 << 1)
