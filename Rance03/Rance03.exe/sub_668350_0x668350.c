// 函数: sub_668350
// 地址: 0x668350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbdf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* var_24
__builtin_memset(&var_24, 0, 0x18)
var_4.b = 1

if (arg2 s> 0)
    void* edi_1 = data_75d4fc
    int32_t var_3c_1 = arg2
    
    if (sub_4a55e0(edi_1 + 0x178) != 0)
        int32_t var_3c_2 = arg2
        struct partsengine::CPartsList::VTable** eax_4 = sub_4a52a0(edi_1 + 0x178)
        
        if (eax_4 != 0)
            int32_t eax_5 = eax_4[2]
            struct IInterface::VTable** vFunc_0
            
            if (arg2 s< eax_5 || eax_4[1] + eax_5 s<= arg2)
                vFunc_0 = nullptr
            label_66840f:
                
                if (vFunc_0 != 0)
                    sub_4a4f00(vFunc_0, &var_24, 1)
            else
                vFunc_0 = eax_4[3][arg2 - eax_5].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_4, arg2)
                    goto label_66840f
                
                sub_4a4f00(vFunc_0, &var_24, 1)

int32_t var_3c_4 = arg2
int32_t var_20
int32_t result_1
sub_669130(&result_1, nullptr, var_24, var_20)

if (arg2 s> 0)
    void* edi_2 = data_75d4fc
    int32_t var_3c_5 = arg2
    
    if (sub_4a55e0(edi_2 + 0x178) != 0)
        int32_t var_3c_6 = arg2
        struct partsengine::CPartsList::VTable** eax_8 = sub_4a52a0(edi_2 + 0x178)
        
        if (eax_8 != 0)
            int32_t eax_9 = eax_8[2]
            struct IInterface::VTable** vFunc_0_1
            
            if (arg2 s< eax_9 || eax_8[1] + eax_9 s<= arg2)
                vFunc_0_1 = nullptr
            label_66848e:
                
                if (vFunc_0_1 != 0)
                    sub_4a4f00(vFunc_0_1, &var_24, 2)
            else
                vFunc_0_1 = eax_8[3][arg2 - eax_9].vFunc_0
                
                if (vFunc_0_1 == 0)
                    vFunc_0_1 = sub_4e7720(eax_8, arg2)
                    goto label_66848e
                
                sub_4a4f00(vFunc_0_1, &var_24, 2)

int32_t var_3c_8 = arg2
int32_t* var_14
sub_669130(&result_1, var_14, var_24, var_20)

if (arg2 s> 0)
    void* edi_3 = data_75d4fc
    int32_t var_3c_9 = arg2
    
    if (sub_4a55e0(edi_3 + 0x178) != 0)
        int32_t var_3c_10 = arg2
        struct partsengine::CPartsList::VTable** eax_12 = sub_4a52a0(edi_3 + 0x178)
        
        if (eax_12 != 0)
            int32_t eax_13 = eax_12[2]
            struct IInterface::VTable** vFunc_0_2
            
            if (arg2 s< eax_13 || eax_12[1] + eax_13 s<= arg2)
                vFunc_0_2 = nullptr
            label_66850f:
                
                if (vFunc_0_2 != 0)
                    sub_4a4f00(vFunc_0_2, &var_24, 3)
            else
                vFunc_0_2 = eax_12[3][arg2 - eax_13].vFunc_0
                
                if (vFunc_0_2 == 0)
                    vFunc_0_2 = sub_4e7720(eax_12, arg2)
                    goto label_66850f
                
                sub_4a4f00(vFunc_0_2, &var_24, 3)

int32_t var_3c_12 = arg2
sub_669130(&result_1, var_14, var_24, var_20)
sub_4a6db0(arg1 + 0x2a8, &result_1)
int32_t* eax_15 = var_24

if (eax_15 != 0)
    j__free(eax_15)
    var_24 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0

int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
