// 函数: sub_50c2b0
// 地址: 0x50c2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c18fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CMotionSound::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

for (int32_t* i = arg1[1]; i != arg1[2]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

struct partsengine::CMotionSound::VTable** ebp = arg3
arg1[2] = arg1[1]
int32_t result

for (struct partsengine::ISound::partsengine::CSound::VTable** i_1 = ebp[1]; i_1 != ebp[2]; 
        i_1 = &i_1[0x21])
    int32_t ebx_1 = i_1[0xc]
    
    if (ebx_1 s>= arg2)
        struct partsengine::CMotionSound::VTable** eax_4
        int32_t ecx_1
        eax_4, ecx_1 = sub_69adc6(0x28)
        arg3 = eax_4
        int32_t var_4 = 0
        struct partsengine::CMotionSound::VTable** ebx_2
        
        if (eax_4 == 0)
            ebx_2 = nullptr
        else
            int32_t var_28_1 = ecx_1
            ebx_2 = sub_50bf90(eax_4, i_1, ebx_1)
        
        int32_t var_4_1 = 0xffffffff
        struct partsengine::CMotionSound::VTable*** ecx_3 = &var_10
        result = arg1[2]
        var_10 = ebx_2
        
        if (&var_10 u< result)
            ecx_3 = arg1[1]
        
        if (&var_10 u>= result || ecx_3 u> &var_10)
            if (result == arg1[3])
                struct partsengine::CMotionSound::VTable*** var_28_3 = ecx_3
                sub_412f20(&arg1[1])
            
            result = arg1[2]
            
            if (result != 0)
                *result = ebx_2
        else
            if (result == arg1[3])
                struct partsengine::CMotionSound::VTable*** var_28_2 = ecx_3
                sub_412f20(&arg1[1])
            
            int32_t* ecx_5 = arg1[2]
            
            if (ecx_5 != 0)
                *ecx_5 = arg1[1][(&var_10 - ecx_3) s>> 2].vFunc_0
        
        arg1[2] = &arg1[2][1]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
