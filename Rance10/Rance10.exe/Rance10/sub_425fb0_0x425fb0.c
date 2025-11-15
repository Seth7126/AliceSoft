// 函数: sub_425fb0
// 地址: 0x425fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_844
int32_t eax_1 = __security_cookie ^ &var_844
var_844 = arg1
void* var_854 = arg1
int32_t var_858 = (arg2[1] - *arg2) s>> 2
sub_6c9f00(arg1)
int32_t esi_2 = (arg2[1] - *arg2) s>> 2
int32_t var_840 = 0xffffffff
uint32_t var_83c[0x82][0x4]
_memset(&var_83c, 0, 0x824)
int32_t var_18 = esi_2
int32_t var_14 = 0
void* result = sub_4a7790(&var_840, esi_2)
int32_t edi = arg2[1]

for (int16_t* i = *arg2; i != edi; i = &i[2])
    int32_t eax_6 = var_840 + 1
    var_840 = eax_6
    
    if (eax_6 s>= 0x209)
        sub_4a7690(&var_840)
        eax_6 = 0
        var_840 = 0
    
    int32_t eax_7 = eax_6 + 1
    void* ebx_2 = var_83c[0][eax_6] & 3
    var_840 = eax_7
    
    if (eax_7 s>= 0x209)
        sub_4a7690(&var_840)
        eax_7 = 0
        var_840 = 0
    
    int32_t var_854_3 = sub_6c9c50(var_844, var_83c[0][eax_7].b, ebx_2 + 1)
    uint32_t var_858_2 = zx.d(*i)
    result = sub_6c9df0(var_844)

@__security_check_cookie@4(eax_1 ^ &var_844)
return result
