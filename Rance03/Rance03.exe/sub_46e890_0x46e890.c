// 函数: sub_46e890
// 地址: 0x46e890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b954b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CHighLevelChannelList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &kiwi::CHighLevelChannelList::`vftable'
int32_t var_4 = 0
EnterCriticalSection(&arg1[6][1])
int32_t* eax_5 = arg1[3]
int32_t* i = *eax_5

if (i != eax_5)
    do
        int32_t* ecx_2 = i[5]
        
        if (ecx_2 != 0)
            (**ecx_2)(1)
        
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
    while (i != arg1[3])

LeaveCriticalSection(&arg1[6][1])
int32_t var_4_1 = 0xffffffff
arg1[2] =
    &thread::CCriticalObject<class std::map<int32_t, class kiwi::CMultiChannelSet*> >::`vftable'
int32_t* ecx_3 = arg1[6]
arg1[5] = &thread::CCriticalSection::`vftable'

if (ecx_3 != 0)
    (**ecx_3)(1)

int32_t** eax_10 = arg1[3]
sub_4200d0(&arg1[3], &var_10, *eax_10, eax_10)
int32_t result = j__free(arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
