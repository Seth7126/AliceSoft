// 函数: ?wait@event@Concurrency@@QAEII@Z
// 地址: 0x6ea1e4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x48
int32_t (* var_c)(void* arg1) = sub_74a4d5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
void* const var_6c_3 = &data_6ea1f0
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 == 0xffffffff)
    int32_t (* var_30_1)() = sub_6eb74c
    char var_14_1 = 0
    int32_t var_34_1 = 0
    void var_3c
    
    while (*arg1 != 1)
        if (Concurrency::details::_SpinWait<0>::_SpinOnce(&var_3c) == 0)
            struct Concurrency::details::WaitBlock::VTable* var_2c
            Concurrency::details::WaitBlock::WaitBlock(&var_2c)
            var_2c = &Concurrency::details::SingleWaitBlock::`vftable'{for `Concurrency::details::WaitBlock'}
            struct Concurrency::details::WaitBlock::VTable** var_1c_1 = &var_2c
            void var_58
            sub_6ea792(&var_58, &arg1[2])
            int32_t var_8 = 0
            
            if (*arg1 != 1)
                int32_t* var_20 = Concurrency::details::Sweep(*arg1, 1)
                *arg1 = &var_20
            else
                var_14_1 = 1
            
            int32_t var_8_1 = 0xffffffff
            Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_58)
            int32_t var_24
            
            if (var_14_1 == 0 && var_24 != 1)
                int32_t var_6c_2 = 2
                int32_t eax_8 = 0
                
                if (0 == var_24)
                    int32_t var_24_1 = 2
                else
                    eax_8 = var_24
                
                if (eax_8 != 1)
                    sub_6eb772()
            
            break
    result = 0
else if (arg2 != 0)
    int32_t* var_18 = arg1
    result = sub_6ea3a6(&var_18, 1, 1, arg2)
else
    int32_t eax_2 = *arg1 - 1
    int32_t eax_3 = neg.d(eax_2)
    result = sbb.d(eax_3, eax_3, eax_2 != 0)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ea2bd
return result
