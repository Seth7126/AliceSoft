// 函数: sub_6f399e
// 地址: 0x6f399e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x2c
int32_t var_8 = 0x7dd760
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x7dd760 ^ __security_cookie_1
int32_t var_50 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_50
void* const var_54_2 = &data_6f39aa
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c = arg1

if (*(arg1 + 0x64) != 0)
    int32_t var_38_1 = 0
    int32_t (* var_34_1)() = sub_6eb74c
    
    do
        void var_40
        Concurrency::details::_SpinWait<0>::_SpinOnce(&var_40)
    while (*(arg1 + 0x64) != 0)

if (*(arg1 + 0x84) s> 0)
    Concurrency::details::ContextBase::ClearAliasTable(arg1)

bool i

if (*(arg1 + 0x50) != 0)
    i = false
    char var_1e_1 = 0
    bool i_1
    
    for (; i == 0; i = i_1)
        char var_1d_1 = 1
        Concurrency::details::_ReaderWriterLock::_AcquireWrite(arg1 + 0x54)
        int32_t var_8_1 = 0
        char eax = 1
        char var_1d_2 = 1
        void* edi_1 = *(arg1 + 0x50)
        int32_t* j
        
        if (edi_1 == 0)
            j = nullptr
        else
            j = *(edi_1 + 4)
        
        while (j != 0)
            if (eax == 0)
                break
            
            int32_t* j_1
            
            if (j == *(arg1 + 0x50))
                j_1 = nullptr
            else
                j_1 = j[1]
            
            void* var_30_1 = &j[-0x17]
            int32_t* eax_3 = sub_6f4c0e(j[-0xb])
            
            if (Concurrency::details::_ReaderWriterLock::_TryAcquireWrite(&eax_3[1]) == 0)
                Concurrency::details::_ReaderWriterLock::_ReleaseWrite(arg1 + 0x54)
                char var_1d_3 = 0
                Concurrency::details::platform::__Sleep(1)
                break
            
            int32_t var_8_3 = 1
            Concurrency::details::List<struct Concurrency::details::ListEntry,class Concurrency::details::CollectionTypes::NoCount>::Remove(
                arg1 + 0x50, j)
            *(j - 0xf) = 0
            Concurrency::details::List<struct Concurrency::details::ListEntry,class Concurrency::details::CollectionTypes::NoCount>::AddTail(
                eax_3, j)
            int32_t var_8_4 = 0
            j = j_1
            sub_6f3aba(ebp)
            eax = var_1d_2
        
        i_1 = j == 0
        bool i_2 = i_1
        int32_t var_8_2 = 0xfffffffe
        sub_6f3ad1(ebp, arg1)
else
    i = Concurrency::details::_ReaderWriterLock::_FlushWriteOwners(arg1 + 0x54)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f39ee
return i
