// 函数: ?_CopyException@__ExceptionPtr@@SA?AV?$shared_ptr@V__ExceptionPtr@@@std@@PBXPBU_s_ThrowInfo@@_N@Z
// 地址: 0x6d5160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x30
int32_t (* var_c)(void* arg1) = sub_7494da
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_50
void* const var_54_1 = &data_6d516c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40
int32_t* var_1c = &var_40
char* eax = arg3
int32_t var_20 = 0
int32_t var_8 = 0
var_40 = 0xe06d7363
int32_t var_3c = 1
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 3
int32_t var_2c = 0x19930520
int32_t* var_28 = arg2

if (eax != 0 && (*eax & 0x10) != 0)
    eax = *(*(*arg2 - 4) + 0x18)

char* var_24 = eax

if (eax != 0 && (*eax & 8) != 0)
    int32_t var_2c_1 = 0x1994000

char var_15
char* var_54 = &var_15
int32_t** var_58 = &var_1c

if (arg4 == 0)
    var_15 = 0
    void var_16
    std::allocate_shared<class __ExceptionPtr,struct _StaticAllocator<int32_t>,struct EHExceptionRecord*&,bool>(
        arg1, &var_16, var_58, var_54)
else
    var_15 = 1
    std::make_shared<class __ExceptionPtr,struct EHExceptionRecord*&,bool>(arg1, var_58, var_54)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d51ee
return arg1
