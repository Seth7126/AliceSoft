// 函数: sub_545180
// 地址: 0x545180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_104 = 0xffffffff
int32_t (* var_108)(void* arg1) = sub_73a080
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_100
int32_t eax_2 = __security_cookie ^ &var_100
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg4
int32_t* result_1 = result

if (arg2 != 0 && result != 0 && arg5 != 0)
    result = sub_4f4e40(data_7fcba4 + 0x124, arg3)
    
    if (result != 0)
        struct partsengine::CConstructionProcess::VTable* var_d0
        sub_4c3030(&var_d0)
        int32_t var_104_1 = 0
        int32_t var_cc_1 = *(*(*arg2 + 0xc))(0)
        int32_t var_c8_1 = *(*(*arg2 + 0xc))(1)
        int32_t var_c4_1 = *(*(*arg2 + 0xc))(2)
        int32_t var_c0_1 = *(*(*arg2 + 0xc))(3)
        int32_t var_bc_1 = *(*(*arg2 + 0xc))(4)
        int32_t var_b8_1 = *(*(*arg2 + 0xc))(5)
        int32_t var_b4_1 = *(*(*arg2 + 0xc))(6)
        int32_t var_b0_1 = *(*(*arg2 + 0xc))(7)
        int32_t var_ac_1 = *(*(*arg2 + 0xc))(8)
        int32_t var_a8_1 = *(*(*arg2 + 0xc))(9)
        int32_t var_a4_1 = *(*(*arg2 + 0xc))(0xa)
        int32_t var_a0_1 = *(*(*arg2 + 0xc))(0xb)
        int32_t var_9c_1 = *(*(*arg2 + 0xc))(0xc)
        int32_t var_98_1 = *(*(*arg2 + 0xc))(0xd)
        int32_t var_94_1 = *(*(*arg2 + 0xc))(0xe)
        int32_t var_90_1 = *(*(*arg2 + 0xc))(0xf)
        int32_t var_8c_1 = *(*(*arg2 + 0xc))(0x10)
        int32_t var_88_1 = *(*(*arg2 + 0xc))(0x11)
        int32_t var_84_1 = *(*(*arg2 + 0xc))(0x12)
        int32_t var_80_1 = *(*(*arg2 + 0xc))(0x13)
        int32_t var_78_1 = *(*(*arg2 + 0xc))(0x14)
        int32_t var_74_1 = *(*(*arg2 + 0xc))(0x15)
        struct textsurface::CTextSurfaceProperty::VTable* var_168
        void var_70
        sub_4aa6d0(&var_168, &var_70)
        var_104_1.b = 1
        int32_t eax_70 = *(*(*arg2 + 0xc))(0x16)
        int32_t var_164_1 = eax_70
        int32_t ebx_1 = *(*(*arg2 + 0xc))(0x17)
        int32_t var_160_1 = ebx_1
        int128_t var_134
        int128_t xmm0_1 = *sub_402f50(&var_134, *(*(*arg2 + 0xc))(0x18), *(*(*arg2 + 0xc))(0x19), 
            *(*(*arg2 + 0xc))(0x1a), 0xff)
        int128_t var_15c_1 = xmm0_1
        int32_t xmm0_2 = *(*(*result_1 + 0x10))(0)
        int32_t var_14c_1 = xmm0_2
        int128_t xmm0_3 = *sub_402f50(&var_134, *(*(*arg2 + 0xc))(0x1b), *(*(*arg2 + 0xc))(0x1c), 
            *(*(*arg2 + 0xc))(0x1d), 0xff)
        int32_t eax_89 = *result_1
        var_134 = xmm0_3
        int128_t var_144_1 = xmm0_3
        int32_t xmm0_4 = *(*(eax_89 + 0x10))(1)
        int32_t var_68_1 = ebx_1
        int32_t var_148_1 = xmm0_4
        int32_t var_6c_1 = eax_70
        int32_t var_50_1 = xmm0_4
        int128_t var_64_1 = xmm0_1
        int32_t var_54_1 = xmm0_2
        int128_t var_4c_1 = var_134
        void var_e8
        sub_403360(&var_e8, (**(*(*arg5 + 0x14))(0))(eax_2))
        var_104_1.b = 2
        void var_3c
        sub_403590(&var_3c, &var_e8, 0, 0xffffffff)
        var_104_1.b = 1
        sub_403320(&var_e8)
        sub_403360(&var_100, (**(*(*arg5 + 0x14))(1))())
        var_104_1.b = 3
        void var_24
        sub_403590(&var_24, &var_100, 0, 0xffffffff)
        var_104_1.b = 1
        sub_403320(&var_100)
        bool var_c_1 = *(*(*arg2 + 0xc))(0x1e) != 0
        int32_t var_7c_1 = *(*(*arg2 + 0xc))(0x1f)
        void* edi_4 = result[0x11]
        sub_555e00(edi_4, 0x18, arg6)
        sub_4c52a0(*(edi_4 + (arg6 << 2) + 0x7c) + 0x7c, &var_d0)
        result = sub_4c3130(&var_d0)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_100)
return result
