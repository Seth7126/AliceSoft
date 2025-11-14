// 函数: sub_5f2790
// 地址: 0x5f2790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc001
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d0
int32_t eax_2 = __security_cookie ^ &var_d0
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5f2430(arg1)
void** var_c4
struct chipmunk::CTextSpriteCacheProperty::VTable* var_48
void** esi = *sub_5f2c80(arg1 + 4, &var_c4, sub_5f10b0(&var_48, arg2, arg3))
var_48 = &chipmunk::CTextSpriteCacheProperty::`vftable'
int32_t var_14
char var_28

if (var_14 u>= 0x10)
    j__free(var_28.d)
int32_t var_14_1 = 0xf
int32_t var_18 = 0
char var_28_1 = 0
struct chipmunk::CTextSpriteProperty::VTable* const var_44 =
    &chipmunk::CTextSpriteProperty::`vftable'
int32_t* result

if (esi == *(arg1 + 4))
    result = sub_5f15e0(arg1 + 0x18, esi, arg2, arg2, arg3)
    
    if (result != 0)
        struct chipmunk::CTextSpriteCache::VTable** esi_2 = sub_69adc6(0xc)
        var_c4 = esi_2
        int32_t var_4 = 0
        
        if (esi_2 == 0)
            esi_2 = nullptr
        else
            int32_t ecx_5 = *(arg1 + 0x168)
            *(arg1 + 0x168) = ecx_5 + 1
            esi_2[2] = ecx_5
            *esi_2 = &chipmunk::CTextSpriteCache::`vftable'
            esi_2[1] = result
            (**result)(eax_4)
        
        int32_t var_4_1 = 0xffffffff
        int32_t var_4_2 = 1
        struct chipmunk::CTextSpriteCacheProperty::VTable* var_bc
        struct chipmunk::CTextSpriteCacheProperty::VTable* var_80
        int32_t ecx_9 = sub_5f3440(&var_bc, sub_5f10b0(&var_80, arg2, arg3))
        struct chipmunk::CTextSpriteCache::VTable** var_84_1 = esi_2
        var_4_2.b = 2
        uint32_t var_e8_6 = zx.d(data_75dd33)
        struct chipmunk::CTextSpriteCacheProperty::VTable** var_ec_4 = &var_bc
        sub_5f32a0(arg1 + 4, &var_c4, ecx_9)
        var_bc = &chipmunk::CTextSpriteCacheProperty::`vftable'
        int32_t var_88
        char var_9c
        
        if (var_88 u>= 0x10)
            j__free(var_9c.d)
        int32_t var_4_3 = 0xffffffff
        int32_t var_88_1 = 0xf
        int32_t var_8c_1 = 0
        char var_9c_1 = 0
        struct chipmunk::CTextSpriteProperty::VTable* const var_b8_1 =
            &chipmunk::CTextSpriteProperty::`vftable'
        var_80 = &chipmunk::CTextSpriteCacheProperty::`vftable'
        int32_t var_4c
        char var_60
        
        if (var_4c u>= 0x10)
            j__free(var_60.d)
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        char var_60_1 = 0
        struct chipmunk::CTextSpriteProperty::VTable* const var_7c_1 =
            &chipmunk::CTextSpriteProperty::`vftable'
        int32_t esi_4 = (*(*result + 0x14))(eax_4) * (*(*result + 0x10))()
        *(arg1 + 0xc) += esi_4 << 2
else
    int32_t ecx_2 = *(arg1 + 0x168)
    *(arg1 + 0x168) = ecx_2 + 1
    *(esi[0x12] + 8) = ecx_2
    void* esi_1 = esi[0x12]
    (***(esi_1 + 4))(eax_4)
    result = *(esi_1 + 4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d0)
return result
