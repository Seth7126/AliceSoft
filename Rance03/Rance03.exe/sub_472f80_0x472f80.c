// 函数: sub_472f80
// 地址: 0x472f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9abb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSoundChannelList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundChannelList::VTable** var_10_1 = arg1
*arg1 = &kiwi::CSoundChannelList::`vftable'
int32_t var_4 = 0
EnterCriticalSection(&arg1[7][1])
int32_t* edi = arg1[4]

for (void** i = *edi; i != edi; i = *i)
    void* ecx = i[2]
    
    if (ecx != 0)
        (*(**(ecx + 4) + 0xc))(eax_2)
        int32_t* ecx_2 = i[2]
        
        if (ecx_2 != 0)
            (**ecx_2)(1)

int32_t* eax_7 = arg1[4]
int32_t* i_3 = *eax_7
*eax_7 = eax_7
void* eax_8 = arg1[4]
*(eax_8 + 4) = eax_8
arg1[5] = 0

if (i_3 != arg1[4])
    int32_t* i_1
    
    do
        i_1 = *i_3
        j__free(i_3)
        i_3 = i_1
    while (i_1 != arg1[4])

LeaveCriticalSection(&arg1[7][1])
int32_t* ecx_3 = arg1[1]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    arg1[1] = 0

int32_t var_4_1 = 0xffffffff
arg1[3] = &thread::CCriticalObject<class std::list<class kiwi::CSoundChannel*> >::`vftable'
int32_t* ecx_4 = arg1[7]
arg1[6] = &thread::CCriticalSection::`vftable'

if (ecx_4 != 0)
    (**ecx_4)(1)

int32_t* eax_13 = arg1[4]
int32_t* i_4 = *eax_13
*eax_13 = eax_13
void* eax_14 = arg1[4]
*(eax_14 + 4) = eax_14
arg1[5] = 0

if (i_4 != arg1[4])
    int32_t* i_2
    
    do
        i_2 = *i_4
        j__free(i_4)
        i_4 = i_2
    while (i_2 != arg1[4])

int32_t result = j__free(arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
