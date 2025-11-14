// 函数: sub_4cfd90
// 地址: 0x4cfd90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf160
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t ebp = arg_4
void** eax_3 = sub_417ed0(arg1 + 4, ebp)
char eax_5

if (eax_3 != *(arg1 + 4))
    eax_5 = sub_40c3a0(ebp, &eax_3[4])

if (eax_3 == *(arg1 + 4) || eax_5 != 0)
    arg_4 = *(arg1 + 4)
else
    arg_4 = eax_3

uint32_t eax_7 = arg_4
char result

if (eax_7 == *(arg1 + 4) || eax_7 == 0xffffffd8)
    void* var_50 = nullptr
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    int32_t var_4 = 0
    result = sub_4e5f00(*(arg1 + 0xc), arg2, &var_50)
    void* esi_1 = var_50
    void* edi_2
    
    if (result != 0)
        edi_2 = var_4c_1 - esi_1
    
    int32_t* ebx
    
    if (result == 0 || edi_2 s< 6)
        ebx.b = 0
    else
        void var_38
        sub_4c9680(&var_38)
        var_4.b = 1
        struct fileimage::CFileImageAnalyser::VTable* const var_44
        
        if (*(esi_1 + 4) != 0x78 || *(esi_1 + 5) != 0x9c)
            var_44 = &fileimage::CFileImageAnalyser::`vftable'
            void* var_40_2 = esi_1
            void* var_3c_2 = edi_2 + esi_1
            var_4.b = 3
            
            if (sub_4ccab0(&var_38, &var_44, arg3) != 0)
            label_4cff23:
                var_4.b = 1
                sub_4cfa10(sub_4d01c0(arg1 + 4, ebp), &var_38)
                ebx.b = 1
                sub_4c9780(&var_38)
            else
                ebx.b = 0
                sub_4c9780(&var_38)
        else if (edi_2 s<= 4)
            ebx.b = 0
            sub_4c9780(&var_38)
        else
            char eax_8 = sub_4cf830(&var_50)
            esi_1 = var_50
            
            if (eax_8 == 0)
                ebx.b = 0
                sub_4c9780(&var_38)
            else
                var_44 = &fileimage::CFileImageAnalyser::`vftable'
                void* var_40_1 = esi_1
                int32_t var_3c_1 = var_4c_1
                var_4.b = 2
                arg_4 = 0
                
                if (sub_468b20(&var_44, &arg_4) == 0)
                    ebx.b = 0
                    sub_4c9780(&var_38)
                else
                    if (sub_4caf20(&var_38, arg_4, &var_44, arg3) != 0)
                        goto label_4cff23
                    
                    ebx.b = 0
                    sub_4c9780(&var_38)
    
    if (esi_1 != 0)
        j__free(esi_1)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
