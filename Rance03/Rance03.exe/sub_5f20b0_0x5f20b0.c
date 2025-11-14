// 函数: sub_5f20b0
// 地址: 0x5f20b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*(arg2 i+ 0x10))))
int32_t ebp = *(arg2 i+ 8)
int32_t esi = ebp
int32_t eax = int.d(fconvert.t(fconvert.s(st0)))

if (eax s< ebp)
    esi = eax

int32_t eax_1 = int.d(fconvert.t(fconvert.s(sub_6b1380(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(*(arg2 i+ 0x14)))))))

if (eax_1 s< ebp)
    ebp = eax_1

if (esi s> ebp)
    ebp = esi

double var_18_2

if (*(arg2 i+ 4) s< 0x100)
    var_18_2:4.d = arg3
    var_18_2.d = arg2
    *arg4 = sub_5f1b30(var_18_2) + (ebp << 1)
    int32_t* eax_3
    eax_3.b = 1
    return eax_3

if (*(arg1 + 0x118) == 0xffffffff)
    var_18_2:4.d = arg1 + 0x138
    
    if (sub_5f02c0(arg1 + 0x110) == 0)
        var_18_2:4.d = arg3
        var_18_2.d = arg2
        *arg4 = sub_5f1b30(var_18_2) + (ebp << 1)
        int32_t* eax_7
        eax_7.b = 0
        return eax_7

var_18_2:4.d = arg3
var_18_2:4.d = arg4
var_18_2.d = sub_5f21d0()

if (sub_5f0590(arg1 + 0x110, *(arg2 i+ 4) - 0x100, *(arg1 + 0x44) * *(arg2 i+ 8), var_18_2) != 0)
    int32_t esi_2 = *(arg1 + 0x44)
    *arg4 = divs.dp.d(sx.q((*arg4 - 1 + esi_2) & not.d(esi_2 - 1)), esi_2) + (ebp << 1)
    int32_t eax_21
    eax_21.b = 1
    return eax_21

var_18_2:4.d = arg3
var_18_2.d = arg2
*arg4 = sub_5f1b30(var_18_2) + (ebp << 1)
int32_t eax_14
eax_14.b = 0
return eax_14
