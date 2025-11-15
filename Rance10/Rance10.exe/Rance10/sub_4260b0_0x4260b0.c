// 函数: sub_4260b0
// 地址: 0x4260b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_854
int32_t eax_1 = __security_cookie ^ &var_854
uint32_t var_84c
void* eax_2

if (sub_6c9790(arg1, &var_84c).b == 0)
label_4260e3:
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_854)
    return eax_2

int32_t var_840 = 0xffffffff
uint32_t var_83c[0x82][0x4]
_memset(&var_83c, 0, 0x824)
uint32_t esi_1 = var_84c
uint32_t var_18_1 = esi_1
int32_t var_14_1 = 0
sub_4a7790(&var_840, esi_1)
arg2[1] = *arg2
int32_t ebx_1 = 0

if (esi_1 s> 0)
    int32_t esi_2 = var_840
    
    do
        int32_t esi_3 = esi_2 + 1
        var_840 = esi_3
        
        if (esi_3 s>= 0x209)
            sub_4a7690(&var_840)
            esi_3 = 0
            var_840 = 0
        
        if (sub_6c95a0(arg1, (var_83c[0][esi_3] & 3) + 1).b == 0)
            goto label_4260e3
        
        esi_2 = esi_3 + 1
        var_840 = esi_2
        
        if (esi_2 s>= 0x209)
            sub_4a7690(&var_840)
            esi_2 = 0
        
        int32_t eax_7
        eax_7.b = *(arg1 + 0xc) != 0
        
        if (eax_7 + 2 + *(arg1 + 4) u> *(arg1 + 8))
            goto label_4260e3
        
        int16_t var_850
        
        if (sub_6c96d0(arg1, &var_850).b == 0)
            goto label_4260e3
        
        if (sub_6c96d0(arg1, &var_850:1).b == 0)
            goto label_4260e3
        
        eax_2.w = var_850
        uint32_t var_848 = zx.d(zx.w(eax_2:1.b) << 8) | zx.d(eax_2.b)
        sub_404370(arg2, &var_848)
        ebx_1 += 1
    while (ebx_1 s< var_84c)

void* eax_3
eax_3.b = 1
@__security_check_cookie@4(eax_1 ^ &var_854)
return eax_3
