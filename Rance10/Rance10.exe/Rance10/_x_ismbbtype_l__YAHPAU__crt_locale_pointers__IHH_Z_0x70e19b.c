// 函数: ?x_ismbbtype_l@@YAHPAU__crt_locale_pointers@@IHH@Z
// 地址: 0x70e19b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_14
_LocaleUpdate::_LocaleUpdate(&var_14, arg1)
uint32_t esi = zx.d(arg2)
int32_t var_c
int32_t eax_4
int32_t result

if ((*(var_c + esi + 0x19) & arg4) == 0)
    result = 0
    int32_t* var_10
    
    if (arg3 == 0)
        eax_4 = 0
    else
        eax_4 = zx.d(*(*var_10 + (esi << 1))) & arg3

if ((*(var_c + esi + 0x19) & arg4) != 0 || eax_4 != 0)
    result = 1

char var_8

if (var_8 != 0)
    void* ecx_2 = var_14
    *(ecx_2 + 0x350) &= 0xfffffffd

return result
