// 函数: sub_561860
// 地址: 0x561860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5786
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_298
int32_t eax_2 = __security_cookie ^ &var_298
int32_t __saved_edi
int32_t var_2a8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_2

if (arg2 s>= 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x1a6d01a7, *(arg1 + 0x18) - *(arg1 + 0x14))
    edx_2 = edx_1 s>> 6

struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0 || arg2 s> (edx_2 u>> 0x1f) + edx_2)
    result.b = 0
else
    struct sealengine::CEmitter::VTable* var_27c
    sub_535f80(&var_27c)
    int32_t var_4 = 0
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x1a6d01a7, *(arg1 + 0x18) - *(arg1 + 0x14))
    int32_t edx_4 = edx_3 s>> 6
    int32_t var_2ac_1 = (edx_4 u>> 0x1f) + 1 + edx_4
    int32_t var_294
    void** eax_13 = sub_4691f0(&var_294, "Object%03d")
    var_4.b = 1
    void var_274
    
    if (&var_274 != eax_13)
        sub_401ff0(&var_274, eax_13, 0, 0xffffffff)
    
    var_4.b = 0
    int32_t var_280
    
    if (var_280 u>= 0x10)
        j__free(var_294)
    
    struct sealengine::CEmitter::VTable** var_2ac_3 = &var_27c
    sub_5661b0(arg1 + 0x14, &var_298, arg2 * 0x26c + *(arg1 + 0x14), &var_27c)
    *(arg1 + 0x10) += 1
    sub_5368b0(&var_27c)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_298)
return result
