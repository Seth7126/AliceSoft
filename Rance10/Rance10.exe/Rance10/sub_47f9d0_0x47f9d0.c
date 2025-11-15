// 函数: sub_47f9d0
// 地址: 0x47f9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CHighLevelChannelList::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CHighLevelChannelList::`vftable'
EnterCriticalSection(&arg1[6][1])
int32_t* edi = arg1[3]
int32_t* i = *edi

while (i != edi)
    int32_t* ecx = i[5]
    
    if (ecx != 0)
        (**ecx)(1)
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

LeaveCriticalSection(&arg1[6][1])
arg1[2] =
    &thread::CCriticalObject<class std::map<int32_t, class kiwi::CMultiChannelSet*> >::`vftable'
arg1[5] = &thread::CCriticalSection::`vftable'
int32_t* ecx_1 = arg1[6]

if (ecx_1 != 0)
    (**ecx_1)(1)

int32_t** eax_9 = arg1[3]
sub_4346e0(&arg1[3], &var_14, *eax_9, eax_9)
int32_t result = sub_403160(arg1[3], 1, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
