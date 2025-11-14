// 函数: sub_58e400
// 地址: 0x58e400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7fa3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CResourceData::VTable* const var_20 = &sealengine::CResourceData::`vftable'
int96_t var_1c = (zx.o(0)).12
int32_t var_4 = 0
int32_t* ecx_1 = var_1c.d
void* ecx
struct sealengine::CLightParamList::VTable** result

if (sub_58f630(ecx, arg1, &var_20) == 0)
    result = nullptr
else
    int32_t edx_2
    
    if (ecx_1 != 0)
        int32_t eax_6 = (*(*ecx_1 + 0x14))(eax_2)
        ecx_1 = var_1c.d
        edx_2 = eax_6
    label_58e47c:
        
        if (edx_2 s<= 0)
            result = nullptr
        else
            void** eax_7 = sub_69adc6(0x1c)
            arg1 = eax_7
            var_4.b = 1
            
            if (eax_7 == 0)
                result = nullptr
            else
                result = sub_547530(eax_7)
            
            var_4.b = 0
            int32_t* ecx_3 = var_1c.d
            int32_t eax_12
            int32_t ecx_6
            int32_t ebx_1
            
            if (ecx_3 == 0)
                eax_12 = var_1c:4.d
                ecx_6 = var_1c:8.d
                ebx_1 = eax_12
                
                if (eax_12 == ecx_6)
                    ebx_1 = 0
                
                goto label_58e501
            
            int32_t* ecx_4 = var_1c.d
            ebx_1 = (*(*ecx_3 + 0x18))(eax_2)
            int32_t edi_1
            
            if (ecx_4 == 0)
                ecx_6 = var_1c:8.d
                eax_12 = var_1c:4.d
            label_58e501:
                edi_1 = ecx_6 - eax_12
            label_58e505:
                
                if (eax_12 == ecx_6)
                    eax_12 = 0
            else
                int32_t* ecx_5 = var_1c.d
                edi_1 = (*(*ecx_4 + 0x14))()
                
                if (ecx_5 == 0)
                    ecx_6 = var_1c:8.d
                    eax_12 = var_1c:4.d
                    goto label_58e505
                
                eax_12 = (*(*ecx_5 + 0x18))()
            
            int32_t var_28_1 = eax_12
            struct fileimage::CFileImageAnalyser::VTable* const var_2c =
                &fileimage::CFileImageAnalyser::`vftable'
            int32_t var_24_1 = edi_1 + ebx_1
            var_4.b = 2
            
            if (sub_547a70(result, &var_2c) != 0)
                ecx_1 = var_1c.d
            else
                sub_53a360(result)
                ecx_1 = var_1c.d
                result = nullptr
    else
        int32_t edx_1 = var_1c:8.d
        int32_t eax_4 = var_1c:4.d
        
        if (eax_4 != edx_1)
            edx_2 = edx_1 - eax_4
            goto label_58e47c
        
        result = nullptr

var_20 = &sealengine::CResourceData::`vftable'
int32_t var_4_1 = 3

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)

int32_t eax_16 = var_1c:4.d

if (eax_16 != 0)
    j__free(eax_16)

fsbase->NtTib.ExceptionList = ExceptionList
return result
