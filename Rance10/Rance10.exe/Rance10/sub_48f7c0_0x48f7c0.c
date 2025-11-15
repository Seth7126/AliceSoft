// 函数: sub_48f7c0
// 地址: 0x48f7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f469
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg3
int32_t var_14 = 0
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
int32_t* esi = (*(*arg4 + 0x2c))(arg2)
int32_t* var_1c = esi

if (esi != 0)
    int32_t eax_5 = (*(*esi + 8))(eax_2)
    sub_42c9c0(arg3, eax_5)
    void* ecx_3 = nullptr
    arg4 = nullptr
    
    if (eax_5 s> 0)
        do
            uint32_t* edi_2 = *arg3 + (ecx_3 << 2)
            int32_t eax_8 = (*(*esi + 0xc))(ecx_3, 0)
            ecx_3 = arg4 + 1
            arg4 = ecx_3
            int32_t eax_11
            int32_t edx_2
            edx_2:eax_11 = mulu.dp.d(0x10624dd3, eax_8 * (*(*arg5 + 0x10))())
            esi = var_1c
            *edi_2 = edx_2 u>> 6
        while (ecx_3 s< eax_5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
