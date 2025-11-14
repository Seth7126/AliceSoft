// 函数: sub_61f930
// 地址: 0x61f930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x1c)
void* var_5c = arg2
int32_t* eax_6 = arg3
int32_t* var_58 = eax_6

if (ecx != 0)
    eax_6 = (*(*ecx + 8))(ecx)
    *(arg1 + 0x1c) = 0

int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    eax_6 = (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0x18) = 0

struct ISoundData::decodeogg::CSoundDataOgg::VTable** result =
    sub_475dc0(eax_6, var_58, var_5c, arg1 + 0x6c)
struct ISoundData::decodeogg::CSoundDataOgg::VTable** result_1 = result

if (result == 0)
    result.b = 0
else
    int32_t eax_11 = (*result)->vFunc_10(eax_4)
    struct ISoundData::decodeogg::CSoundDataOgg::VTable* eax_12 = *result_1
    
    if (eax_11 != 0)
        int32_t* var_68
        sub_448e90(&var_68, eax_12->vFunc_10())
        int32_t var_4 = 0
        int32_t* edx_1 = var_68
        struct ISoundData::decodeogg::CSoundDataOgg::VTable** result_2 = result_1
        var_6c = 0
        int32_t var_64
        int32_t* var_54 = var_64 - edx_1
        char var_49_1
        int32_t* esi_2
        
        if ((*result_2)->vFunc_5(edx_1, var_54, &var_6c) == 0 || var_54 != var_6c)
            (*result_1)->vFunc_1()
            esi_2 = var_68
            var_49_1 = 0
        else
            (*result_1)->vFunc_1()
            int32_t eax_24 = (*(*(arg1 + 0x6c) + 0xc))()
            
            if (eax_24 != 1)
                result = (*(*(arg1 + 0x6c) + 0xc))()
            
            if (eax_24 != 1 && result != 2)
                esi_2 = var_68
                var_49_1 = 0
            else
                int32_t eax_29 = (*(*(arg1 + 0x6c) + 0x1c))()
                
                if (eax_29 != 8)
                    result = (*(*(arg1 + 0x6c) + 0x1c))()
                
                if (eax_29 != 8 && result != 0x10)
                    esi_2 = var_68
                    var_49_1 = 0
                else
                    int32_t eax_34 = (*(*(arg1 + 0x6c) + 0x10))()
                    
                    if (eax_34 != 0x5622)
                        result = (*(*(arg1 + 0x6c) + 0x10))()
                    
                    if (eax_34 != 0x5622 && result != 0xac44)
                        esi_2 = var_68
                        var_49_1 = 0
                    else
                        int32_t* eax_37 = var_54
                        *(arg1 + 0x30) = eax_37
                        result = sub_474240(arg1 + 0x6c, eax_37)
                        bool cond:1_1 = *(arg1 + 0x14) == 0
                        *(arg1 + 0x2c) = result
                        
                        if (cond:1_1)
                            esi_2 = var_68
                            var_49_1 = 1
                        else
                            int16_t var_24 = 1
                            int16_t eax_40 = (*(*(arg1 + 0x6c) + 0xc))()
                            int32_t eax_43 = (*(*(arg1 + 0x6c) + 0x10))()
                            int16_t eax_46 = (*(*(arg1 + 0x6c) + 0x1c))()
                            int16_t var_16_1 = eax_46
                            int128_t var_48
                            __builtin_memset(&var_48, 0, 0x20)
                            int32_t eax_49
                            int32_t edx_2
                            edx_2:eax_49 = sx.q(zx.d(eax_46) * zx.d(eax_40))
                            var_48.d = 0x24
                            var_48:4.d = 0x8188
                            int16_t eax_51 = ((eax_49 + (edx_2 & 7)) s>> 3).w
                            int16_t var_18_1 = eax_51
                            int32_t var_1c_1 = zx.d(eax_51) * eax_43
                            int32_t var_28_1 = 0
                            int16_t var_14_1 = 0
                            var_48:8.d = *(arg1 + 0x30)
                            int128_t var_38
                            var_38.d = &var_24
                            int32_t* eax_55 = *(arg1 + 0x14)
                            var_38 = data_6d45e0
                            
                            if ((*(*eax_55 + 0xc))(eax_55, &var_48, arg1 + 0x18, 0) s>= 0)
                                int32_t* eax_57 = *(arg1 + 0x18)
                                var_58 = nullptr
                                result_1 = nullptr
                                var_54 = nullptr
                                int32_t var_90_1 = var_48:8.d
                                var_5c = nullptr
                                
                                if ((*(*eax_57 + 0x2c))(eax_57, 0, var_90_1, &var_58, &result_1, 
                                        &var_54, &var_5c, 0) s>= 0)
                                    esi_2 = var_68
                                    sub_69d850(var_58, esi_2, result_1)
                                    int32_t* edx_4 = var_54
                                    
                                    if (edx_4 != 0)
                                        sub_69d850(edx_4, result_1 + esi_2, var_5c)
                                        edx_4 = var_54
                                    
                                    int32_t* eax_61 = *(arg1 + 0x18)
                                    
                                    if ((*(*eax_61 + 0x4c))(eax_61, var_58, result_1, edx_4, var_5c)
                                            s< 0)
                                        var_49_1 = 0
                                    else
                                        var_49_1 = 1
                                else
                                    sub_405780(arg1 + 0x54, 0x6ed03c)
                                    
                                    if (**(arg1 + 0xc) == 0)
                                        sub_64b530("DirectSound")
                                        **(arg1 + 0xc) = 1
                                    
                                    esi_2 = var_68
                                    var_49_1 = 0
                            else
                                sub_405780(arg1 + 0x54, 0x6ed0e4)
                                
                                if (**(arg1 + 0xc) == 0)
                                    sub_64b530("DirectSound")
                                    **(arg1 + 0xc) = 1
                                
                                esi_2 = var_68
                                var_49_1 = 0
        
        if (esi_2 != 0)
            j__free(esi_2)
        
        result.b = var_49_1
    else
        eax_12->vFunc_1()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
