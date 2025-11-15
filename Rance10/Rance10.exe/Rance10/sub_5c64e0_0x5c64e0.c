// 函数: sub_5c64e0
// 地址: 0x5c64e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_78 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct math3d::CLineSegment::VTable* const var_2c = &math3d::CLineSegment::`vftable'
int128_t var_28
__builtin_memset(&var_28, 0, 0x18)
int32_t var_8_1 = 0

if (sub_5c6210(arg1, arg3, &var_2c).b != 0 && arg2 s>= 0)
    int32_t edx_1 = *(arg1 + 4)
    
    if (arg2 s< (*(arg1 + 8) - edx_1) s>> 3)
        void* edi_1 = *(edx_1 + (arg2 << 3))
        
        if (edi_1 != 0)
            float var_6c[0x4][0x4]
            int32_t* eax_7 = sub_586450(edi_1, &var_2c, sub_56bca0(arg1 + 0x1c, &var_6c), arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7

float eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
