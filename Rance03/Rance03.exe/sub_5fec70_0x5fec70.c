// 函数: sub_5fec70
// 地址: 0x5fec70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc5a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d524
int32_t* result

if (sub_5fedf0(esi).b != 0)
    struct filesystem::CFile::VTable* const var_3c_1 = &filesystem::CFile::`vftable'
    int32_t var_38_1 = 0xffffffff
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    int32_t var_4 = 0
    int32_t var_4_1 = 0xffffffff
    result.b = sub_604a80(arg1, esi + 8).b == 0
    
    if (result.b != 0)
        result.b = 0
    else if (*(esi + 8) != *(esi + 0xc))
        struct fileimage::CFileImageAnalyser::VTable** edx_1 = sub_69adc6(0xc)
        
        if (edx_1 == 0)
            edx_1 = nullptr
        else
            int32_t ecx_1 = *(esi + 8)
            int32_t eax_7 = *(esi + 0xc) - ecx_1
            *edx_1 = &fileimage::CFileImageAnalyser::`vftable'
            edx_1[1] = ecx_1
            edx_1[2] = eax_7 + ecx_1
        
        *(esi + 0x14) = edx_1
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_4_2 = 1
        void** ebx
        
        if (sub_468d00(edx_1, &var_2c).b == 0)
            ebx.b = 0
        else if (sub_40c250(&var_2c, 0x6eba6c).b == 0)
            ebx.b = 0
        else if (sub_468b20(*(esi + 0x14), &var_40).b == 0 || var_40 != 0)
            ebx.b = 0
        else
            if (esi + 0x1c != arg1)
                sub_401ff0(esi + 0x1c, arg1, 0, 0xffffffff)
            
            *(esi + 0x19) = 1
            ebx.b = 1
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        result.b = ebx.b
    else
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
