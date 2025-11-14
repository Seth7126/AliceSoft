// 函数: sub_4fb1f0
// 地址: 0x4fb1f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0bb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_174
int32_t eax_2 = __security_cookie ^ &var_174
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t* result_1 = result
var_174 = arg3

if (arg3 != 0 && result != 0 && arg4 != 0)
    int32_t esi_1 = *(*(*arg3 + 0x10))(0)
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_9 =
        *(*(*arg3 + 0x10))(1)
    result = sub_4a8b80(data_75d4fc + 0x174, esi_1)
    
    if (result != 0)
        struct partsengine::CConstructionProcess::VTable* var_104
        sub_47f050(&var_104)
        int32_t var_4 = 0
        int32_t var_100_1 = *(*(*arg3 + 0x10))(2)
        int32_t var_fc_1 = *(*(*arg3 + 0x10))(3)
        int32_t var_f8_1 = *(*(*arg3 + 0x10))(4)
        int32_t var_f4_1 = *(*(*arg3 + 0x10))(5)
        int32_t var_f0_1 = *(*(*arg3 + 0x10))(6)
        int32_t var_ec_1 = *(*(*arg3 + 0x10))(7)
        int32_t var_e8_1 = *(*(*arg3 + 0x10))(8)
        int32_t var_e4_1 = *(*(*arg3 + 0x10))(9)
        int32_t var_e0_1 = *(*(*arg3 + 0x10))(0xa)
        int32_t var_dc_1 = *(*(*arg3 + 0x10))(0xb)
        int32_t var_d8_1 = *(*(*arg3 + 0x10))(0xc)
        int32_t var_d4_1 = *(*(*arg3 + 0x10))(0xd)
        int32_t var_d0_1 = *(*(*arg3 + 0x10))(0xe)
        int32_t var_cc_1 = *(*(*arg3 + 0x10))(0xf)
        int32_t var_c8_1 = *(*(*arg3 + 0x10))(0x10)
        int32_t var_c4_1 = *(*(*arg3 + 0x10))(0x11)
        int32_t var_c0_1 = *(*(*arg3 + 0x10))(0x12)
        int32_t var_bc_1 = *(*(*arg3 + 0x10))(0x13)
        int32_t var_b8_1 = *(*(*arg3 + 0x10))(0x14)
        int32_t var_b4_1 = *(*(*arg3 + 0x10))(0x15)
        int32_t var_b0_1 = *(*(*arg3 + 0x10))(0x16)
        struct partsengine::CCharSpriteProperty::VTable* var_148
        sub_47fa90(&var_104, &var_148)
        var_4.b = 1
        int32_t ebp_1 = *(*(*arg3 + 0x10))(0x17)
        int32_t var_144_1 = ebp_1
        int32_t ebx_1 = *(*(*arg3 + 0x10))(0x18)
        int32_t var_140_1 = ebx_1
        int32_t edi_1 = *(*(*arg3 + 0x10))(0x19)
        int32_t esi_2 = *(*(*var_174 + 0x10))(0x1a)
        int32_t* eax_81
        int32_t ecx_33
        eax_81, ecx_33 = (*(*var_174 + 0x10))(0x1b)
        int32_t var_18c_3 = ecx_33
        int128_t var_15c
        int128_t xmm0_1 = *sub_47f000(&var_15c, edi_1, esi_2, *eax_81)
        int128_t var_13c_1 = xmm0_1
        int32_t* eax_84 = (*(*result_1 + 0x14))(0)
        int32_t* esi_3 = var_174
        int32_t xmm0_2 = *eax_84
        int32_t var_12c_1 = xmm0_2
        int32_t edi_2 = *(*(*esi_3 + 0x10))(0x1c)
        int32_t esi_4 = *(*(*esi_3 + 0x10))(0x1d)
        int32_t* eax_90
        int32_t ecx_39
        eax_90, ecx_39 = (*(*var_174 + 0x10))(0x1e)
        int32_t var_18c_4 = ecx_39
        int128_t xmm0_3 = *sub_47f000(&var_15c, edi_2, esi_4, *eax_90)
        int32_t eax_92 = *result_1
        var_15c = xmm0_3
        int128_t var_124_1 = xmm0_3
        int32_t xmm0_4 = *(*(eax_92 + 0x14))(1)
        int32_t var_a4_1 = ebx_1
        int32_t var_128_1 = xmm0_4
        int32_t var_8c_1 = xmm0_4
        int128_t var_a0_1 = xmm0_1
        int32_t var_a8_1 = ebp_1
        int32_t var_90_1 = xmm0_2
        int128_t var_88_1 = var_15c
        void var_2c
        sub_401f60(&var_2c, (**(*(*arg4 + 0x18))(0))(eax_4))
        var_4.b = 2
        void var_78
        sub_401ff0(&var_78, &var_2c, 0, 0xffffffff)
        var_4.b = 1
        sub_401fb0(&var_2c)
        void var_44
        sub_401f60(&var_44, (**(*(*arg4 + 0x18))(1))())
        var_4.b = 3
        void var_60
        sub_401ff0(&var_60, &var_44, 0, 0xffffffff)
        var_4.b = 1
        sub_401fb0(&var_44)
        bool var_48_1 = *(*(*var_174 + 0x10))(0x1f) != 0
        sub_481250(sub_510540(result[0xd], eax_9) + 0x2c, &var_104)
        result = sub_47f160(&var_104)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_174)
return result
