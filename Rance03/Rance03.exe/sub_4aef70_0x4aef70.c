// 函数: sub_4aef70
// 地址: 0x4aef70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x38)
float var_4 = 0f
float var_8 = 0f
int16_t x87control

if (eax == 0)
    x87control = sub_4af180(arg1, &var_4, &var_8)
else if (eax == 1)
    x87control = sub_4af3a0(arg1, &var_4, &var_8)
else if (eax == 2)
    x87control = sub_4af6f0(arg1, &var_4, &var_8)

float* var_10
var_10.q = fconvert.d(fconvert.t(var_8))
int32_t mxcsr
var_4 = fconvert.s(sub_6b1380(mxcsr, x87control, var_10))
return int.d(fconvert.t(var_4))
