// 函数: sub_6f4b20
// 地址: 0x6f4b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t (* var_c)(void* arg1) = sub_74ab74
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
int32_t var_30 = eax_11
void* const var_34_2 = &data_6f4b2c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* i_2 = arg2
void* i = i_2
int32_t edi = 0

if (i_2 != 0)
    do
        i = *(i + 0x68)
        edi += 1
    while (i != 0)

int32_t result

if (i_2 == 0 || edi s<= 0)
    result = Concurrency::event::wait(arg1 + 0x3c, 0xffffffff)
else
    struct Concurrency::details::_MallocaArrayHolder<class Concurrency::event*>::VTable* const 
        var_20 = &Concurrency::details::_MallocaArrayHolder<class Concurrency::event*>::`vftable'
    int32_t* var_1c_1 = nullptr
    int32_t var_18_1 = 0
    int32_t var_8 = 0
    int32_t eax = sbb.d(i, i, (edi << 2) + 4 u< (edi << 2) + 0xc)
    int32_t* eax_5
    
    if ((((edi << 2) + 0xc) & eax) == 0)
        eax_5 = nullptr
    else
        void* eax_2 = sbb.d(eax, eax, (edi << 2) + 4 u< (edi << 2) + 0xc) & ((edi << 2) + 0xc)
        
        if (eax_2 u> 0x400)
            void* var_34 =
                sbb.d(eax_2, eax_2, (edi << 2) + 4 u< (edi << 2) + 0xc) & ((edi << 2) + 0xc)
            eax_5 = sub_705e22()
            
            if (eax_5 != 0)
                *eax_5 = 0xdddd
                eax_5 = &eax_5[2]
        else
            __alloca_probe_16(sbb.d(eax_2, eax_2, (edi << 2) + 4 u< (edi << 2) + 0xc)
                & ((edi << 2) + 0xc))
            eax_5 = &var_30
            
            if (&var_30 != 0)
                var_30 = 0xcccc
                eax_5 = &eax_5[2]
    
    int32_t* eax_8 = sub_6e9d3b(&var_20, eax_5)
    *eax_8 = *(arg1 + 0x64) + 0x3c
    int32_t i_1 = 1
    
    if (edi + 1 s> 1)
        do
            eax_8[i_1] = i_2 + 0x3c
            i_1 += 1
            i_2 = *(i_2 + 0x68)
        while (i_1 s< edi + 1)
    
    sub_6ea3a6(eax_8, edi + 1, 1, 0xffffffff)
    result = __freea_crt(var_1c_1)

@__security_check_cookie@4(eax_11 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f4c0b
return result
