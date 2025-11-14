// 函数: sub_60f950
// 地址: 0x60f950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_38
int32_t eax_1 = __security_cookie ^ &var_38
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 4) = 0

_memset(&var_38, 0, 0x34)
int32_t var_20 = 1
int32_t var_28 = 0
int32_t var_24 = 0x10
int32_t eax_3
eax_3.b = arg3 == 0
int32_t var_c = 0xff7fffff
int32_t var_8 = 0x7f7fffff
void* var_34 = (eax_3 << 1) + 1
void* var_30 = (eax_3 << 1) + 1
void* var_2c = (eax_3 << 1) + 1

if (arg2 u> 4)
    int32_t eax_5
    eax_5.b = 0
    sub_69a5bc(eax_1 ^ &var_38)
    return eax_5

switch (arg2)
    case 0
        var_38 = 0
    case 1
        var_38 = 0x15
    case 2
        int32_t var_24_1 = 4
        var_38 = 0x55
    case 3
        int32_t var_24_2 = 8
        var_38 = 0x55
    case 4
        int32_t var_24_3 = 0x10
        var_38 = 0x55

int32_t eax_7
eax_7.b = (*(*arg4 + 0x5c))(arg4, &var_38, arg1 + 4) s>= 0
sub_69a5bc(eax_1 ^ &var_38)
return eax_7
