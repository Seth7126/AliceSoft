// 函数: sub_4958e0
// 地址: 0x4958e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb7f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t ebx
int32_t var_c0 = ebx
int32_t __saved_edi
int32_t var_cc = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x3c] != 0)
    int32_t edi_1 = arg1[0x59]
    
    while (true)
        void* ecx = arg1[0x3c]
        void* eax_5 = *(ecx + 0x10)
        int32_t eax_6
        
        if (eax_5 != 0)
            void* eax_7 = *(eax_5 + 0x3c)
            
            if (eax_7 != 0)
                eax_6 = *(eax_7 + 0x14)
            else
                eax_6 = 0xffffffff
        else
            eax_6 = 0xffffffff
        
        if (edi_1 s>= eax_6 - 1)
            break
        
        ebx.b = *(ecx + 0x40)
        char var_b0
        var_b0.d = *(ecx + 0x44)
        int32_t eax_9
        eax_9.b = arg1[0x41].b
        char var_ac_1 = eax_9.b
        result_1 = nullptr
        int32_t var_b8_1 = 0
        int32_t var_b4_1 = 0
        int32_t var_c_1 = 0
        sub_4908d0(ecx, var_ac_1.d, arg1[0x57], 0, arg1, &result_1, 0, nullptr)
        int32_t var_c_2 = 0xffffffff
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
        
        if (result_2 != 0)
            j__free(result_2)
            result_1 = nullptr
            int32_t var_b8_2 = 0
            int32_t var_b4_2 = 0
        
        if (ebx.b == 0)
            void* eax_10 = arg1[0x3c]
            int32_t ecx_1 = *(eax_10 + 0x44)
            eax_10.b = *(eax_10 + 0x48)
            
            if (eax_10.b != 0)
                break
            
            if (var_b0.d + 1 != ecx_1)
                break
        
        edi_1 += 1
    
    void* eax_14 = (*(*arg1 + 8))(edi_1)
    struct partsengine::CFlatKeyDataGraphicMatrix::VTable* var_a8
    sub_48d6a0(&var_a8, &arg1[0xa])
    int32_t var_c_3 = 1
    sub_48d740(&var_a8, eax_14)
    char eax_15 = arg1[0x41].b
    result_1 = nullptr
    int32_t var_b8_3 = 0
    int32_t var_b4_3 = 0
    var_c_3.b = 2
    sub_4908d0(arg1[0x3c], eax_15.d, arg1[0x57], 0, arg1, &result_1, 0, &var_a8)
    result = result_1
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
