// 函数: ??$_Distance2@V?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@U?$pair@EPAV_CancellationTokenState@details@Concurrency@@@std@@@details@Concurrency@@@std@@@std@@@std@@@std@@@std@@I@std@@YAXV?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@U?$pair@EPAV_CancellationTokenState@details@Concurrency@@@std@@@details@Concurrency@@@std@@@std@@@std@@@std@@@0@0AAIUrandom_access_iterator_tag@0@@Z
// 地址: 0x589a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d926
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg1
int32_t result = arg2
*arg1 = result

if (edx != 0)
    int32_t var_8_1 = 0
    result = (*(*edx + 0x1c))(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
