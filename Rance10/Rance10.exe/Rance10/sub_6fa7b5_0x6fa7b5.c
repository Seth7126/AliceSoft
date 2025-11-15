// 函数: sub_6fa7b5
// 地址: 0x6fa7b5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** i_1 = *(arg1 + 0x14)

if (i_1 != 0)
    void** i
    
    do
        i = i_1[6]
        int32_t var_20_1
        
        if (i_1 == *(arg1 + 0x10))
            var_20_1 = *(arg1 + 0x1c) - i_1[4]
        else
            var_20_1 = *(arg1 + 0xc)
        
        Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment::SetDeletionReferences(
            i_1, var_20_1)
        i_1 = i
    while (i != 0)

int32_t result = _free(*(arg1 + 8))
fsbase->NtTib.ExceptionList = ExceptionList
return result
