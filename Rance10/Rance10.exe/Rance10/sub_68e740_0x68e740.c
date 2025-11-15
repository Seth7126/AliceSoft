// 函数: sub_68e740
// 地址: 0x68e740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx
edx.b = arg3
int32_t var_18 = sub_68f620(arg2, edx)
void** var_14
sub_4cedf0(arg1 + 0x90, &var_14, &var_18)
void** esi = var_14

if (esi != *(arg1 + 0x90))
    (**esi[5])()
    return esi[5]

struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** result

if (*(arg1 + 0xc) == 0)
    if ((*(*arg2 + 0x18))() == 0)
        int32_t var_2c_2 = var_18
        result = sub_68ef30(arg1)
    else
        result = sub_68ec70(arg1)
else
    result = sub_68e810(arg1, var_18)

if (result == 0)
    return result

(*result)->vFunc_0()
sub_4cfa60(arg1 + 0x90, &var_14, &var_18)
var_14[5] = result
return result
