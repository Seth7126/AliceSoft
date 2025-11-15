// 函数: sub_481520
// 地址: 0x481520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundChannel::VTable** result_4 = arg1
struct kiwi::CSoundChannel::VTable** result_1 = result_4
void** i_1 = sub_432330(arg3, arg2)
void** eax_4 = sub_481810(arg3, arg2)

if (i_1 != eax_4 && result_4[2] s> 0)
    void** i = i_1
    
    while (true)
        if ((*(**(i[0xa] + 4) + 0x18))(eax_2) != 0)
            int32_t eax_11 = (*(**(i[0xa] + 4) + 0x24))()
            struct kiwi::CSoundChannel::VTable** result_3 = result_1
            
            if (eax_11 u< result_3[2])
                sub_481010(result_3, nullptr)
                goto label_481615
        
        if (*(i + 0xd) == 0)
            void** i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                void** i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                void** i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
        
        if (i == eax_4)
            result_4 = result_1
            break

struct kiwi::CSoundChannel::VTable** result

if (i_1 == eax_4 || result_4[3].b != 0)
    sub_481010(result_4, nullptr)
    int32_t var_54_3 = 0
    struct kiwi::CSoundChannel::VTable** result_2 = sub_485990(result_4[1])
    result_1 = result_2
    
    if (result_2 == 0)
    label_481615:
        result = nullptr
    else
        int32_t var_8_1 = 0
        void* var_30
        int32_t* eax_16
        int32_t ecx_10
        eax_16, ecx_10 = sub_432530(sub_4322f0(&result_1, arg2, &var_30, &result_1))
        int32_t* var_54_6 = eax_16
        void* var_58_1 = &eax_16[4]
        void* var_40
        sub_481880(arg3, &var_40, ecx_10)
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        result = result_1
else
    sub_481010(result_4, i_1[0xa])
    (*(**(i_1[0xa] + 4) + 0x14))(eax_2)
    result = i_1[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
