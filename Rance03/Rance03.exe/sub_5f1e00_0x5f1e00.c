// 函数: sub_5f1e00
// 地址: 0x5f1e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = *(arg1 + 4)

if (ebp == 0)
    return 0

int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*(arg2 i+ 0x10))))
int32_t ebx = *(arg2 i+ 8)
int32_t edi = ebx
int32_t eax_1 = int.d(fconvert.t(fconvert.s(st0)))

if (eax_1 s< ebx)
    edi = eax_1

int32_t eax_2 = int.d(fconvert.t(fconvert.s(sub_6b1380(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(*(arg2 i+ 0x14)))))))
double var_18_1
var_18_1:4.d = 0x20

if (eax_2 s< ebx)
    ebx = eax_2

if (edi s> ebx)
    ebx = edi

var_18_1.d = arg4 + (ebx << 1)
return (*(*ebp + 8))(arg3 + (ebx << 1), var_18_1)
