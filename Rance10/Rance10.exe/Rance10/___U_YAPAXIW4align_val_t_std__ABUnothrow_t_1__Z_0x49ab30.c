// 函数: ??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
// 地址: 0x49ab30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73051e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t* edx = arg2
*arg1 = *edx
arg2 = &arg1[2]
arg1[0xb] = 0
int32_t var_8_1 = 0
int32_t* ecx = edx[0xb]

if (ecx != 0)
    if (ecx != &edx[2])
        arg1[0xb] = ecx
        edx[0xb] = 0
    else
        arg1[0xb] = (*(*ecx + 4))(&arg1[2])
        var_8_1.b = 1
        int32_t* ecx_1 = edx[0xb]
        
        if (ecx_1 != 0)
            int32_t eax_5
            eax_5.b = ecx_1 != &edx[2]
            (*(*ecx_1 + 0x10))(zx.d(eax_5.b))
            edx[0xb] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
