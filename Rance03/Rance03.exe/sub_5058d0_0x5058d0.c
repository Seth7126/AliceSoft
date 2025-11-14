// 函数: sub_5058d0
// 地址: 0x5058d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c14c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** edi = arg2
int32_t* edx = &data_74f8cc

if (data_74f8e0 u>= 0x10)
    edx = data_74f8cc

int32_t ebx = edi[4]
int32_t* ecx

if (edi[5] u< 0x10)
    ecx = edi
else
    ecx = *edi

int32_t ebp = data_74f8dc
int32_t eax_3 = ebp

if (ebx u< ebp)
    eax_3 = ebx

int32_t eax_4 = sub_405190(eax_3, edx, ecx, eax_3)
bool cond:1 = eax_4 == 0

if (eax_4 == 0)
    if (ebx u>= ebp)
        eax_4.b = ebx != ebp
    else
        eax_4 = 0xffffffff
    
    cond:1 = eax_4 == 0

eax_4.b = cond:1
eax_4.b = eax_4.b == 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax_4.b == 0)
    sub_505830(arg1)
    result.b = 1
else
    void* eax_5 = *(arg1 + 4)
    int32_t ebx_1
    
    if (eax_5 != 0)
        ebx_1 = *(eax_5 + 8)
    else
        ebx_1 = 0xffffffff
    
    if (eax_5 == 0)
        ebx_1 = sub_44f0e0(data_75d4cc + 0x29c)
    
    arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    int32_t var_4_1 = 0xffffffff
    result.b = sub_514240(ebx_1, edi) == 0
    
    if (result.b == 0)
        arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
        int32_t var_4_2 = 1
        int32_t var_24_2 = ebx_1
        result = sub_44e5c0(data_75d4cc + 0x288)
        
        if (*(arg1 + 4) != result)
            sub_505830(arg1)
            *(arg1 + 4) = result
            result[1] = &result[1]->Next + 1
        
        result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
