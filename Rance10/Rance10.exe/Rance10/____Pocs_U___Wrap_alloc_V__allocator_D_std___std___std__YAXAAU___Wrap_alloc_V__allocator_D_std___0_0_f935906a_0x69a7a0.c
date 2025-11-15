// 函数: ??$_Pocs@U?$_Wrap_alloc@V?$allocator@D@std@@@std@@@std@@YAXAAU?$_Wrap_alloc@V?$allocator@D@std@@@0@0U?$integral_constant@_N$0A@@0@@Z
// 地址: 0x69a7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    bool cond:0_1 = ecx[2] != 1
    result = ecx[2]
    ecx[2] -= 1
    
    if (not(cond:0_1))
        result = (*(*ecx + 4))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
