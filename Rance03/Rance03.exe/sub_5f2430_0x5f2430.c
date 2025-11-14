// 函数: sub_5f2430
// 地址: 0x5f2430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbfc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *(arg1 + 0xc)

if (result s>= *(arg1 + 0x10))
    int32_t* result_3 = nullptr
    int32_t* ebp_1 = nullptr
    int32_t ecx = 0
    int32_t* result_1 = nullptr
    int32_t* var_20_1 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_4 = 0
    void* ebx_1 = arg1 + 4
    int32_t* eax_3 = *ebx_1
    void* var_40_1 = ebx_1
    int32_t* i = *eax_3
    int32_t* i_2 = i
    
    if (i != eax_3)
        do
            if (&i_2 u>= ebp_1 || result_3 u> &i_2)
                if (ebp_1 == ecx)
                    int32_t var_60_2 = ecx
                    sub_5f2ea0(&result_1)
                    ecx = var_1c_1
                    ebp_1 = var_20_1
                
                if (ebp_1 != 0)
                    *ebp_1 = i
            else
                int32_t* result_2 = result_1
                int32_t edi_2 = (&i_2 - result_2) s>> 2
                
                if (ebp_1 == ecx)
                    int32_t var_60_1 = ecx
                    sub_5f2ea0(&result_1)
                    ecx = var_1c_1
                    ebp_1 = var_20_1
                    result_2 = result_1
                
                if (ebp_1 != 0)
                    *ebp_1 = result_2[edi_2]
            
            ebp_1 = &ebp_1[1]
            var_20_1 = ebp_1
            
            if (*(i + 0xd) == 0)
                int32_t* i_3 = i[2]
                
                if (*(i_3 + 0xd) != 0)
                    int32_t* i_5 = i[1]
                    
                    if (*(i_5 + 0xd) == 0)
                        while (i == i_5[2])
                            i = i_5
                            i_5 = i_5[1]
                            
                            if (*(i_5 + 0xd) != 0)
                                break
                    
                    i = i_5
                else
                    i = i_3
                    int32_t* i_4 = *i
                    
                    while (*(i_4 + 0xd) == 0)
                        i = i_4
                        i_4 = *i
                
                i_2 = i
            
            result_3 = result_1
        while (i != *ebx_1)
    
    int32_t eax_7 = (ebp_1 - result_3) s>> 2
    sub_5f34e0(eax_7, ebp_1, result_3, eax_7, 0.d)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_8 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = nullptr
    int32_t i_1 = 0
    int32_t var_10_1 = 0
    var_4.b = 1
    
    if (result_3 != ebp_1)
        do
            int32_t ebx_4 = (ebp_1 - result_3) s>> 2
            void* esi_1 = *(result_3[ebx_4 - 1] + 0x48)
            (***(esi_1 + 4))(eax_2)
            int32_t* edi_3 = *(esi_1 + 4)
            int32_t eax_12 = (*(*edi_3 + 0x14))()
            int32_t eax_13 = (*(*edi_3 + 0x10))()
            (*(*edi_3 + 4))()
            result_3 = result_1
            *(arg1 + 0xc) -= (eax_12 * eax_13) << 2
            sub_5f2d00(&var_18, result_3[ebx_4 - 1] + 0x10)
            ebp_1 -= 4
            int32_t* var_20_2 = ebp_1
            
            if (*(arg1 + 0xc) s< *(arg1 + 0x14))
                break
        while (result_3 != ebp_1)
        
        ebx_1 = var_40_1
        eax_8 = var_18
    
    int32_t i_6 = i_1
    
    if (eax_8 != i_6)
        void* ebp_2 = &eax_8[0xc]
        
        do
            void** eax_19 = sub_5f3040(ebx_1, ebp_2 - 0x30)
            int32_t* edi_4 = *ebx_1
            int32_t** esi_6
            int32_t* var_2c
            
            if (eax_19 == edi_4)
                var_2c = edi_4
                esi_6 = &var_2c
            else if (sub_5f3ed0(ebp_2 - 0x2c, &eax_19[5]) != 0)
            label_5f26e7:
                ebx_1 = var_40_1
                var_2c = edi_4
                esi_6 = &var_2c
            else
                if (sub_5f3f70(ebp_2 - 0x2c, &eax_19[5]) == 0)
                    int32_t* ebx_6 = &eax_19[0xc]
                    int32_t edx_5 = ebx_6[4]
                    int32_t* var_38_1
                    
                    if (eax_19[0x11] u< 0x10)
                        var_38_1 = ebx_6
                    else
                        var_38_1 = *ebx_6
                    
                    void* eax_23 = ebp_2 - 0x10
                    int32_t ecx_12 = *ebp_2
                    void* var_3c_1 = eax_23
                    
                    if (*(ebp_2 + 4) u>= 0x10)
                        eax_23 = *eax_23
                    
                    char var_34_1
                    var_34_1.d = eax_23
                    int32_t eax_24 = edx_5
                    
                    if (ecx_12 u< edx_5)
                        eax_24 = ecx_12
                    
                    int32_t eax_25 = sub_405190(eax_24, var_38_1, var_34_1.d, eax_24)
                    int32_t ecx_14 = *ebp_2
                    bool cond:4_1 = eax_25 s< 0
                    
                    if (eax_25 == 0)
                        int32_t edx_7 = ebx_6[4]
                        
                        if (ecx_14 u>= edx_7)
                            eax_25.b = ecx_14 != edx_7
                        else
                            eax_25 = 0xffffffff
                        
                        cond:4_1 = eax_25 s< 0
                    
                    eax_25.b = cond:4_1
                    
                    if (eax_25.b != 0)
                        goto label_5f26e7
                    
                    void* edx_8 = var_3c_1
                    
                    if (*(ebp_2 + 4) u>= 0x10)
                        edx_8 = *edx_8
                    
                    int32_t edi_5 = ebx_6[4]
                    
                    if (ebx_6[5] u>= 0x10)
                        ebx_6 = *ebx_6
                    
                    int32_t eax_26 = ecx_14
                    
                    if (edi_5 u< ecx_14)
                        eax_26 = edi_5
                    
                    sub_405190(eax_26, edx_8, ebx_6, eax_26)
                
                ebx_1 = var_40_1
                void** var_30 = eax_19
                esi_6 = &var_30
            int32_t* esi_7 = *esi_6
            
            if (esi_7 != *ebx_1)
                int32_t* ecx_16 = esi_7[0x12]
                
                if (ecx_16 != 0)
                    (**ecx_16)(1)
                
                void var_28
                sub_5f2a00(ebx_1, &var_28, esi_7)
            
            ebp_2 += 0x38
        while (ebp_2 - 0x30 != i_1)
        
        i_6 = i_1
        eax_8 = var_18
    
    var_4.b = 0
    
    if (eax_8 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** esi_8 = eax_8
        
        if (eax_8 != i_6)
            do
                (*esi_8)->Next(0)
                esi_8 = &esi_8[0xe]
            while (esi_8 != i_6)
            
            eax_8 = var_18
        
        j__free(eax_8)
    
    result = result_1
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
