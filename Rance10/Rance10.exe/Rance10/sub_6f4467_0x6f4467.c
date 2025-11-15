// 函数: sub_6f4467
// 地址: 0x6f4467
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74aafd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0

if (Concurrency::details::_TaskCollection::_IsDirectAlias(arg1) == 0)
    char eax_4 = Concurrency::details::_TaskCollection::_TaskCleanup(arg1, 0)
    char temp0_1 = eax_4
    eax_4 = neg.b(eax_4)
    ebx = sbb.b(eax_4, eax_4, temp0_1 != 0) + 1
    
    if (*(arg1 + 0x64) == arg1)
        void* i_1 = *(arg1 + 0x68)
        
        if (i_1 != 0)
            void* i
            
            do
                i = *(i_1 + 0x68)
                Concurrency::details::_TaskCollection::_ReleaseAlias(i_1)
                i_1 = i
            while (i != 0)

void* esi_1 = *(arg1 + 0x6c)

if (esi_1 != 0)
    Concurrency::details::TaskStack::~TaskStack(esi_1)
    operator new(esi_1)

void* esi_3 = *(arg1 + 0x18) & 0xfffffffc

if (esi_3 != 0 && esi_3 != 0xc)
    __ExceptionPtrDestroy(esi_3)
    int32_t var_34_2 = 8
    operator new(esi_3)

if (Concurrency::details::_CancellationTokenState::_IsValid(*(arg1 + 8)) != 0)
    sub_697230(*(arg1 + 8))

if (ebx == 0)
    int32_t result = sub_6e96d4(arg1 + 0x3c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void var_1c
Concurrency::details::_MallocaArrayHolder<class Concurrency::Context*>::_MallocaArrayHolder<class Concurrency::Context*>(
    &var_1c)
sub_70021b(&var_1c, 0x7dd8a0)
noreturn
