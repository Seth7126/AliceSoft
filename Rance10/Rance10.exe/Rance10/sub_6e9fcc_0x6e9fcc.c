// 函数: sub_6e9fcc
// 地址: 0x6e9fcc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x20
int32_t (* var_c)(void* arg1) = sub_74a45a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_5 = __security_cookie ^ &__saved_ebp
void* const var_44_2 = &data_6e9fd8
int32_t var_8_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 0)
    void var_30
    sub_6ea792(&var_30, &arg1[1])
    int32_t* i_1 = *arg1
    int32_t var_8 = 0
    int32_t* var_14 = nullptr
    
    if (i_1 == 0)
        *arg1 = 0
    else
        int32_t* i
        
        do
            if (sub_6e99ac(i_1, &var_14) != 0)
                break
            
            i = *i_1
            sub_6e9784(i_1)
            i_1 = i
        while (i != 0)
        
        if (i_1 == 0)
            *arg1 = 0
        else
            *arg1 = *i_1
            sub_6e9784(i_1)
            int32_t esi_1 = *(*var_14 + 0xc)
            j_sub_4033e0()
            esi_1(eax_5)
    
    result = Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ea04e
return result
