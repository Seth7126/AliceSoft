// 函数: sub_47d790
// 地址: 0x47d790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e61f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x20) == 0)
    struct ibis::CMouseCursor::VTable** eax_3 = sub_6e810c(0x44)
    struct ibis::CMouseCursor::VTable** var_14_1 = eax_3
    int32_t var_8_1 = 0
    int64_t* eax_4 = sub_6e810c(8)
    int64_t* var_18_1 = eax_4
    *eax_4 = 0
    *(eax_4 + 4) = 1
    *eax_4 = &savedata::CSaveData::`vftable'{for `common::SuicideRefCounter<class ISaveData>'}
    *(arg1 + 0x20) = sub_47e150(eax_3, eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 0x20)
