// 函数: sub_5412f0
// 地址: 0x5412f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[4] != 0 && *(arg1 + 0x10) == 4)
    void* ecx = *(arg1 + 0x1d0)
    
    if (ecx != 0)
    label_541357:
        struct fileimage::CFileImageMaker::VTable* var_30 = &fileimage::CFileImageMaker::`vftable'
        int32_t var_2c = 0
        int32_t var_28_1 = 0
        int32_t var_24_1 = 0
        int32_t var_4 = 0
        
        if (sub_5477d0(ecx, &var_30) != 0)
            struct filesystem::CFile::VTable* var_20 = &filesystem::CFile::`vftable'
            int32_t var_1c_1 = 0xffffffff
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            int32_t ebx
            ebx.b = sub_604d10(arg2, &var_2c) == 0
            sub_604940(&var_20)
            
            if (ebx.b == 0)
                sub_468e60(&var_30)
                int32_t result
                result.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
        
        sub_468e60(&var_30)
    else if (sub_53e620(arg1) != 0)
        ecx = *(arg1 + 0x1d0)
        
        if (ecx != 0)
            goto label_541357

fsbase->NtTib.ExceptionList = ExceptionList
return 0
