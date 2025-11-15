// 函数: sub_485870
// 地址: 0x485870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSoundChannelList::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSoundChannelList::`vftable'
EnterCriticalSection(&arg1[7][1])
int32_t* edi = arg1[4]

for (void** i = *edi; i != edi; i = *i)
    void* eax_5 = i[2]
    
    if (eax_5 != 0)
        sub_489590(eax_5)
        (*(**(eax_5 + 4) + 0x14))(eax_2)
        (*(**(eax_5 + 4) + 0xc))()
        int32_t* ecx_4 = i[2]
        
        if (ecx_4 != 0)
            (*(*ecx_4 + 4))(1)

int32_t* eax_10 = arg1[4]
int32_t* i_2 = *eax_10
*eax_10 = eax_10
void* eax_11 = arg1[4]
*(eax_11 + 4) = eax_11
arg1[5] = 0

if (i_2 != arg1[4])
    int32_t* i_1
    
    do
        i_1 = *i_2
        sub_403160(i_2, 1, 0xc)
        i_2 = i_1
    while (i_1 != arg1[4])

LeaveCriticalSection(&arg1[7][1])
int32_t* ecx_5 = arg1[1]

if (ecx_5 != 0)
    (*(*ecx_5 + 4))(eax_2)
    arg1[1] = 0

arg1[3] = &thread::CCriticalObject<class std::list<class kiwi::CSoundChannel*> >::`vftable'
arg1[6] = &thread::CCriticalSection::`vftable'
int32_t* ecx_6 = arg1[7]

if (ecx_6 != 0)
    (**ecx_6)(1)

sub_406910(&arg1[4])
int32_t result = sub_403160(arg1[4], 1, 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return result
