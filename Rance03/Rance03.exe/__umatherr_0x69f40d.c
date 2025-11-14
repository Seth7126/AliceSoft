// 函数: __umatherr
// 地址: 0x69f40d
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = 0

for (int32_t i = 0; i s< 0x1d; i += 1)
    if (*((i << 3) + &data_74a450) == arg2)
        ecx = (&data_74a454)[i * 2]
        break

int32_t var_20 = ecx
int16_t x87control

if (ecx == 0)
    sub_69f534(x87control, arg8, 0xffff)
    __set_errno_from_matherr(arg1)
    return fconvert.t(arg7)

int32_t var_1c_1 = arg3
int32_t var_18_1 = arg4
int32_t var_14_1 = arg5
int32_t var_10_1 = arg6
void* var_24 = arg1
int32_t var_8_1 = arg7:4.d
sub_69f534(x87control, arg8, 0xffff)
int32_t* var_34_1 = &var_24
__set_errno_from_matherr(arg1)
return fconvert.t(arg7.d.q)
