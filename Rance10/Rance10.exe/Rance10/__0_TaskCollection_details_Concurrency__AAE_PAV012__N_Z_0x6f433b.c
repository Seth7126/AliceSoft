// 函数: ??0_TaskCollection@details@Concurrency@@AAE@PAV012@_N@Z
// 地址: 0x6f433b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aae2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f4347
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
arg1[1] |= 0xfffffff
arg1[2] = 0
arg1[4] = 0
arg1[5] = 0x80000000
arg1[6] = 0
arg1[0xe] = 0
sub_6e9639(&arg1[0xf])
int32_t var_8 = 0
arg1[0x19] = *(arg2 + 0x64)
arg1[0x1b] = 0
arg1[0x1e] = 0
arg1[0x21] = 0
arg1[0x22] = 0
void* eax_1 = Concurrency::details::SchedulerBase::CurrentContext()
arg1[3] = eax_1
*arg1 = *(eax_1 + 0x34)
void* esi_1 = *(arg2 + 8)
arg1[2] = esi_1

if (Concurrency::details::_CancellationTokenState::_IsValid(esi_1) != 0)
    *(esi_1 + 4) += 1

Concurrency::details::_TaskCollection::_Initialize(arg1)
sub_6ea04f(&arg1[0xf])

if (arg3 == 0)
    arg1[0x1e] |= 1
    arg1[0x1a] = 0
else
    int32_t** edx_2 = arg1[0x19] + 0x68
    int32_t* esi_2 = *edx_2
    int32_t* eax_4 = esi_2
    arg1[0x1a] = esi_2
    
    if (eax_4 == *edx_2)
        *edx_2 = arg1
    else
        eax_4 = *edx_2
    
    while (eax_4 != esi_2)
        arg1[0x1a] = eax_4
        esi_2 = eax_4
        void** ecx_6 = arg1[0x19] + 0x68
        
        if (eax_4 == *ecx_6)
            *ecx_6 = arg1
        else
            eax_4 = *ecx_6

void* eax_5 = sub_6f09b1()

if (*(eax_5 + 0x20) == 0)
    Concurrency::details::ContextBase::CreateWorkQueue(eax_5)

int32_t eax_7 = *(*(eax_5 + 0x20) + 0x40)
arg1[1] &= 0xfffffff
arg1[0x20] = eax_7
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f4429
return arg1
