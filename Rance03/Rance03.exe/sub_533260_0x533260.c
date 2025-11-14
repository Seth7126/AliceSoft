// 函数: sub_533260
// 地址: 0x533260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c3c08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t edi
int32_t var_a8 = edi
int32_t var_ac = __security_cookie ^ &var_a8
fsbase->NtTib.ExceptionList = &ExceptionList

for (void* i = *(arg1 + 4); i != *(arg1 + 8); i += 0x84)
    void* ebx_1 = i + 0x28
    int32_t j = 0
    void* var_98_1 = ebx_1
    int64_t* edi_2 = i + 4
    
    do
        struct sealengine::CPoint::VTable* const var_70_1 = &sealengine::CPoint::`vftable'
        int32_t ecx_1 = 0xff800000
        int32_t eax_7 = mods.dp.d(sx.q(j + 1), 3) * 3
        int64_t xmm0_1 = *(i + (eax_7 << 2) + 4)
        
        if (*ebx_1 == 0)
            ecx_1 = 0xff00ffff
        
        int32_t eax_8 = *(i + (eax_7 << 2) + 0xc)
        int64_t var_6c_1 = xmm0_1
        int32_t var_64_1 = eax_8
        int32_t var_60_1 = ecx_1
        int32_t var_c_1 = 0
        int64_t xmm0_2 = *edi_2
        int32_t ebx_2 = edi_2[1].d
        struct sealengine::CPoint::VTable* const var_5c_1 = &sealengine::CPoint::`vftable'
        int64_t var_58_1 = xmm0_2
        int32_t var_50_1 = ebx_2
        int32_t var_4c_1 = ecx_1
        int32_t (__fastcall* var_b0_1)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
        var_c_1.b = 1
        struct sealengine::CLine::VTable* const var_48 = &sealengine::CLine::`vftable'
        void var_44
        sub_69b2ba(&var_44, 0x14, 2, sub_576570)
        int64_t var_40_1 = xmm0_2
        int32_t var_38_1 = ebx_2
        int32_t var_34_1 = ecx_1
        int64_t var_2c_1 = xmm0_1
        int32_t var_24_1 = eax_8
        int32_t var_20_1 = ecx_1
        var_c_1.b = 2
        sub_5336c0(arg2, &var_48)
        var_c_1.b = 1
        var_48 = &sealengine::CLine::`vftable'
        `eh vector vbase constructor iterator'(&var_44, 0x14, 2, sub_5765a0)
        edi_2 += 0xc
        j += 1
        ebx_1 = var_98_1 + 4
        int32_t var_c_2 = 0xffffffff
        var_98_1 = ebx_1
    while (j s< 3)

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
