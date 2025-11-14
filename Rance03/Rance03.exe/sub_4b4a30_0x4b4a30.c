// 函数: sub_4b4a30
// 地址: 0x4b4a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd7a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 4)
int32_t edi = *(arg1 + 8)
struct partsengine::CGUIMessage::VTable** result

if (&edx[4] u> edi)
    result = nullptr
else
    uint32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg1 + 4) = &edx[4]
    
    if (&edx[8] u> edi)
        result = nullptr
    else
        uint32_t edi_7 =
            ((zx.d(edx[7]) << 8 | zx.d(edx[6])) << 8 | zx.d(edx[5])) << 8 | zx.d(edx[4])
        *(arg1 + 4) = &edx[8]
        uint32_t var_44
        
        if (sub_468b20(arg1, &var_44) == 0)
            result = nullptr
        else if (sub_468b20(arg1, &var_48) == 0)
            result = nullptr
        else
            struct partsengine::CGUIMessage::VTable** eax_15 = sub_69adc6(0x34)
            struct partsengine::CGUIMessage::VTable** var_40_1 = eax_15
            int32_t var_4 = 0
            struct partsengine::CGUIMessage::VTable** result_1
            
            if (eax_15 == 0)
                result_1 = nullptr
            else
                result_1 = sub_4b4760(eax_15, esi_7, edi_7, var_44)
            
            int32_t var_4_1 = 0xffffffff
            int32_t esi_8 = 0
            uint32_t ebp_1 = var_48
            
            if (ebp_1 s<= 0)
            label_4b4bb9:
                result = result_1
            else
                while (true)
                    struct partsengine::CGUIMessageVariable::VTable* const var_3c =
                        &partsengine::CGUIMessageVariable::`vftable'
                    int32_t var_38_1 = 1
                    int32_t var_34_1 = 0
                    int32_t var_30_1 = 0
                    char var_2c_1 = 0
                    int32_t var_14_1 = 0xf
                    int32_t var_18_1 = 0
                    char var_28_1 = 0
                    int32_t var_4_2 = 1
                    
                    if (sub_4b6560(&var_3c, arg1) == 0)
                        if (result_1 != 0)
                            (*result_1)->vFunc_0(1)
                        
                        var_3c = &partsengine::CGUIMessageVariable::`vftable'
                        
                        if (var_14_1 u>= 0x10)
                            j__free(var_28_1.d)
                        
                        break
                    
                    sub_4b4c20(&result_1[4], &var_3c)
                    int32_t var_4_3 = 0xffffffff
                    var_3c = &partsengine::CGUIMessageVariable::`vftable'
                    
                    if (var_14_1 u>= 0x10)
                        j__free(var_28_1.d)
                    
                    esi_8 += 1
                    
                    if (esi_8 s>= ebp_1)
                        goto label_4b4bb9
                
                result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
