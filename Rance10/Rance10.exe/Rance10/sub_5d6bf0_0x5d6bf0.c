// 函数: sub_5d6bf0
// 地址: 0x5d6bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7413a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5d6f90(arg1)
int32_t eax_3 = 0x1000 s>> arg2.b
arg1[6] = arg2

if (eax_3 s< 1)
    eax_3 = 1

arg1[4] = eax_3
arg1[5] = eax_3
bool eax_4 = sub_5d6e50(arg1)
char* result

if (eax_4 != 0)
    float xmm3_1 = 0.5f / _mm_cvtepi32_ps(zx.o(arg1[4]))
    float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg1[5]))
    arg1[0x50] = 0x3f000000
    arg1[0x51] = 0
    arg1[0x52] = 0
    arg1[0x53] = 0
    arg1[0x54] = 0
    arg1[0x55] = 0xbf000000
    arg1[0x56] = 0
    arg1[0x57] = 0
    arg1[0x58] = 0
    arg1[0x59] = 0
    arg1[0x5a] = 0x3f800000
    arg1[0x5b] = 0
    arg1[0x5e] = 0
    arg1[0x5f] = 0x3f800000
    arg1[0x5c] = xmm3_1 + 0.5f
    arg1[0x5d] = 0.5f / xmm0_4 + 0.5f
    int32_t eax_7 = (*(**arg1 + 0x5c))(eax_2)
    __seterrormode(&arg1[0x99])
    int32_t var_8_2 = 1
    int32_t* ecx_5 = arg1[0x98]
    
    if (ecx_5 != 0)
        arg1[0x98] = 0
        (*(*ecx_5 + 4))()
    
    int32_t var_8_3 = 0xffffffff
    arg1[0x98] = eax_7
    ___crtSetUnhandledExceptionFilter(&arg1[0x99])
    __Smtx_lock_shared(&arg1[0x99])
    int32_t esi_2 = arg1[0x98]
    __Smtx_unlock_shared(&arg1[0x99])
    
    if (esi_2 == 0)
        result.b = 0
    else if (sub_5dc7a0(&arg1[0x9a], (zx.o(0)).d, (zx.o(0)).d, *arg1, 128f, 128f).b != 0)
        arg1[1].b = 1
        result.b = 1
    else
        void var_48
        sub_403360(&var_48, 0x76a844)
        int32_t var_8_4 = 2
        sub_5e01e0(&var_48)
        sub_403320(&var_48)
        result.b = 0
else
    char* var_1c_1 = 0xf
    int32_t var_20_1 = 0
    bool var_30 = eax_4
    sub_403490(&var_30, 0x76a814, 0x2c)
    int32_t var_8_1 = 0
    sub_5e01e0(&var_30)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, &var_1c_1[1], 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
