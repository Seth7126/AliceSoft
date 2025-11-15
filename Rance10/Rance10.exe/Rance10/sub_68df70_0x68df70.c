// 函数: sub_68df70
// 地址: 0x68df70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx

if ((*(*arg2 + 0xc))() != 0)
    edx = 1
else if ((*(*arg2 + 0x10))() != 0)
    edx = 1
else if ((*(*arg2 + 0x14))() != 0)
    edx = 1
else if ((*(*arg2 + 0x18))() != 0)
    edx = 1
else
    edx = 0

int32_t var_1c = sub_68f4d0(arg2, edx)
void** var_14
sub_4cedf0(arg1 + 0x88, &var_14, &var_1c)
void** esi = var_14

if (esi != *(arg1 + 0x88))
    (**esi[5])()
    return esi[5]

struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (*(arg1 + 0xc) == 0)
    if ((*(*arg2 + 0x18))() == 0)
        int32_t var_2c_2 = edx.d
        result = sub_68ed30(arg1, var_1c.b)
    else
        result = sub_68eb80(arg1)
else
    result = sub_68e080(arg1, var_1c, edx)

if (result == 0)
    return result

(*result)->vFunc_0()
sub_4cfa60(arg1 + 0x88, &var_14, &var_1c)
var_14[5] = result
return result
