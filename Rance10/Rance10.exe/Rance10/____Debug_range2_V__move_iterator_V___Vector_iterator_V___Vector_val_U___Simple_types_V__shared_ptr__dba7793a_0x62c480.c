// 函数: ??$_Debug_range2@V?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@U?$pair@EPAV_CancellationTokenState@details@Concurrency@@@std@@@details@Concurrency@@@std@@@std@@@std@@@std@@@std@@@std@@YAXV?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@U?$pair@EPAV_CancellationTokenState@details@Concurrency@@@std@@@details@Concurrency@@@std@@@std@@@std@@@std@@@0@0PB_WIUrandom_access_iterator_tag@0@@Z
// 地址: 0x62c480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t __saved_ebp
    result = (*(*ecx + 8))(__security_cookie ^ &__saved_ebp)
    
    if (result != 0)
        result = (*result)->Next(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
