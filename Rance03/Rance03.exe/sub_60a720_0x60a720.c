// 函数: sub_60a720
// 地址: 0x60a720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 4) = 0

int128_t var_20 = zx.o(0)
var_20.d = arg2
int64_t var_10 = 0
var_20:4.d = 0
var_20:8.d = 4
var_20:0xc.d = 0
int32_t result
result.b = (*(*arg3 + 0xc))(arg3, &var_20, 0, arg1 + 4) s>= 0
sub_69a5bc(eax_1 ^ &var_24)
return result
