// 函数: __isctype_l
// 地址: 0x6a7018
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_1c
sub_69beb0(&var_1c, arg3)
void* var_14
char var_10
uint32_t eax_3

if (arg1 + 1 u> 0x100)
    int32_t eax_5 = arg1 s>> 8
    uint8_t var_c
    int32_t ecx_2
    
    if (sub_6a774d(eax_5.b, &var_1c) == 0)
        var_c = arg1.b
        char var_b_2 = 0
        ecx_2 = 1
    else
        var_c = eax_5.b
        char var_b_1 = arg1.b
        char var_a_1 = 0
        ecx_2 = 2
    
    uint16_t var_8
    BOOL eax_10 = ___crtGetStringTypeA(&var_1c, 1, &var_c, ecx_2, &var_8, *(var_1c + 4), 1)
    
    if (eax_10 == 0)
        if (var_10 != eax_10.b)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return 0
    
    eax_3 = zx.d(var_8)
else
    eax_3 = zx.d(*(*(var_1c + 0x90) + (arg1 << 1)))

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd

return eax_3 & arg2
