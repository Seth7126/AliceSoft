// 函数: sub_50b800
// 地址: 0x50b800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x38) == 0)
    *(arg1 + 0x38) = 1
    struct IString::common::CStringWrapper::VTable* const var_2c_1 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    sub_401ff0(&var_28, arg1 + 0x20, 0, 0xffffffff)
    int32_t var_4 = 0
    void* esi_1 = *data_75d4e8
    int32_t eax_8 = var_2c_1->data(eax_4)
    data_75d4e8
    result = (*(esi_1 + 0x2c))(eax_8)
    
    if (result.b != 0)
        void* edi_1 = arg1 + 0x3c
        *(edi_1 + 4) = *(arg1 + 0x3c)
        int32_t esi_2 = *data_75d4e8
        int32_t eax_13 = var_2c_1->data()
        data_75d4e8
        int32_t eax_14 = (*(esi_2 + 0xc))(eax_13)
        int32_t ebx_1 = 0
        float var_60_1 = 0f
        float var_58
        
        if (eax_14 s> 0)
            do
                float var_7c_1 = 0f
                void* esi_3 = *data_75d4e8
                float var_78_1 = 0f
                int32_t eax_17 = var_2c_1->data(ebx_1, 0)
                data_75d4e8
                int16_t top
                
                if ((*(esi_3 + 0x34))(eax_17) != 0)
                    void* esi_4 = *data_75d4e8
                    int32_t eax_22 = var_2c_1->data(ebx_1, 0)
                    data_75d4e8
                    (*(esi_4 + 0x68))(eax_22)
                    float var_30_1 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                    unimplemented  {fstp dword [esp+0x64], st0}
                    top += 1
                    var_7c_1 = var_30_1
                
                void* esi_5 = *data_75d4e8
                int32_t eax_26 = var_2c_1->data(ebx_1, 1)
                data_75d4e8
                
                if ((*(esi_5 + 0x34))(eax_26) != 0)
                    void* esi_6 = *data_75d4e8
                    int32_t eax_31 = var_2c_1->data(ebx_1, 1)
                    data_75d4e8
                    (*(esi_6 + 0x68))(eax_31)
                    float var_3c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x58], st0})
                    unimplemented  {fstp dword [esp+0x58], st0}
                    top += 1
                    var_78_1 = var_3c_1
                
                var_58 = var_7c_1
                float var_54_1 = var_78_1
                sub_50be30(edi_1, &var_58)
                ebx_1 += 1
            while (ebx_1 s< eax_14)
        
        int32_t eax_36 = *(edi_1 + 4)
        
        if (((*(edi_1 + 4) - *edi_1) & 0xfffffff8) s> 0x20)
            if (mods.dp.d(sx.q(((eax_36 - *edi_1) s>> 3) - 1), 3) != 0)
                int32_t var_48 = 0x3f800000
                int32_t ebp_3 = var_48
                
                do
                    int32_t eax_51 = *(edi_1 + 4)
                    int32_t* ecx_13 = &var_48
                    
                    if (&var_48 u< eax_51)
                        ecx_13 = *edi_1
                    
                    if (&var_48 u>= eax_51 || ecx_13 u> &var_48)
                        if (eax_51 == *(edi_1 + 8))
                            int32_t* var_98_11 = ecx_13
                            sub_50bea0(edi_1)
                        
                        int32_t* eax_54 = *(edi_1 + 4)
                        
                        if (eax_54 != 0)
                            *eax_54 = ebp_3
                            eax_54[1] = 0x3f800000
                    else
                        int32_t esi_10 = (&var_48 - ecx_13) s>> 3
                        
                        if (eax_51 == *(edi_1 + 8))
                            int32_t* var_98_10 = ecx_13
                            sub_50bea0(edi_1)
                        
                        int32_t* ecx_15 = *(edi_1 + 4)
                        int32_t edx_4 = *edi_1
                        
                        if (ecx_15 != 0)
                            *ecx_15 = *(edx_4 + (esi_10 << 3))
                            ecx_15[1] = *(edx_4 + (esi_10 << 3) + 4)
                    
                    *(edi_1 + 4) += 8
                while (mods.dp.d(sx.q(((*(edi_1 + 4) - *edi_1) s>> 3) - 1), 3) != 0)
        else if (((eax_36 - *edi_1) & 0xfffffff8) s< 0x20)
            int32_t var_50 = 0x3f800000
            int32_t ebp_2 = var_50
            
            do
                int32_t eax_39 = *(edi_1 + 4)
                int32_t* ecx_8 = &var_50
                
                if (&var_50 u< eax_39)
                    ecx_8 = *edi_1
                
                if (&var_50 u>= eax_39 || ecx_8 u> &var_50)
                    if (eax_39 == *(edi_1 + 8))
                        int32_t* var_98_9 = ecx_8
                        sub_50bea0(edi_1)
                    
                    int32_t* eax_42 = *(edi_1 + 4)
                    
                    if (eax_42 != 0)
                        *eax_42 = ebp_2
                        eax_42[1] = 0x3f800000
                else
                    int32_t esi_8 = (&var_50 - ecx_8) s>> 3
                    
                    if (eax_39 == *(edi_1 + 8))
                        int32_t* var_98_8 = ecx_8
                        sub_50bea0(edi_1)
                    
                    int32_t* ecx_10 = *(edi_1 + 4)
                    int32_t edx_1 = *edi_1
                    
                    if (ecx_10 != 0)
                        *ecx_10 = *(edx_1 + (esi_8 << 3))
                        ecx_10[1] = *(edx_1 + (esi_8 << 3) + 4)
                
                *(edi_1 + 4) += 8
            while (((*(edi_1 + 4) - *edi_1) & 0xfffffff8) s< 0x20)
        
        int32_t* eax_61 = *edi_1
        int32_t ebp_4 = 0
        int32_t ebx_2 = 0
        int32_t var_6c = 0
        int32_t var_64_1 = 0
        *eax_61 = 0
        eax_61[1] = 0
        int32_t eax_62 = *edi_1
        int32_t ecx_19 = (*(edi_1 + 4) - *edi_1) s>> 3
        *(eax_62 + (ecx_19 << 3) - 8) = 0x3f800000
        *(eax_62 + (ecx_19 << 3) - 4) = 0x3f800000
        int32_t eax_63
        int32_t edx_7
        edx_7:eax_63 = muls.dp.d(0x55555556, ((*(edi_1 + 4) - *edi_1) s>> 3) - 1)
        int32_t i_2 = (edx_7 u>> 0x1f) + edx_7
        int32_t* edx_8 = nullptr
        int32_t* var_68_1 = nullptr
        var_4.b = 1
        
        if (i_2 s> 0)
            int32_t esi_11 = 0
            int32_t i_1 = i_2
            int32_t var_78_2 = 0
            int32_t i
            
            do
                float* ecx_24 = *edi_1
                var_58 = *(ecx_24 + esi_11)
                float xmm1_2 = *(ecx_24 + esi_11 + 0x18) - var_58
                float xmm0_6 = *(ecx_24 + esi_11 + 0x1c) - *(ecx_24 + esi_11 + 4)
                float xmm1_4 = _mm_sqrt_ss(0, xmm0_6 * xmm0_6 + xmm1_2 * xmm1_2)
                float var_70 = xmm1_4
                var_60_1 = xmm1_4 + var_60_1
                
                if (&var_70 u>= edx_8 || ebp_4 u> &var_70)
                    if (edx_8 == ebx_2)
                        sub_415950(&var_6c, 1)
                        ebx_2 = var_64_1
                        edx_8 = var_68_1
                        ebp_4 = var_6c
                        xmm1_4 = var_70
                    
                    if (edx_8 != 0)
                        *edx_8 = xmm1_4
                else
                    int32_t esi_13 = (&var_70 - ebp_4) s>> 2
                    
                    if (edx_8 == ebx_2)
                        sub_415950(&var_6c, 1)
                        ebx_2 = var_64_1
                        edx_8 = var_68_1
                        ebp_4 = var_6c
                    
                    if (edx_8 != 0)
                        *edx_8 = *(ebp_4 + (esi_13 << 2))
                    
                    esi_11 = var_78_2
                
                edx_8 = &edx_8[1]
                esi_11 += 0x18
                i = i_1
                i_1 -= 1
                var_68_1 = edx_8
                var_78_2 = esi_11
            while (i != 1)
        
        *(arg1 + 0x4c) = *(arg1 + 0x48)
        result = nullptr
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
        
        if (i_2 s> 0)
            float xmm1_5 = 1f / var_60_1
            float var_78_3 = xmm1_5
            
            do
                int32_t ecx_27 = *(arg1 + 0x4c)
                float xmm0_12 = *(ebp_4 + (result << 2)) * xmm1_5
                float var_5c = xmm0_12
                int32_t ebx_3
                
                if (&var_5c u< ecx_27)
                    ebx_3 = *(arg1 + 0x48)
                
                if (&var_5c u>= ecx_27 || ebx_3 u> &var_5c)
                    int32_t edx_13 = *(arg1 + 0x50)
                    
                    if (ecx_27 == edx_13)
                        if ((edx_13 - ecx_27) s>> 2 u< 1)
                            int32_t edi_4 = *(arg1 + 0x48)
                            int32_t ecx_36 = (ecx_27 - edi_4) s>> 2
                            
                            if (0x3fffffff - ecx_36 u< 1)
                                sub_69a551("vector<T> too long")
                                noreturn
                            
                            int32_t edx_15 = (edx_13 - edi_4) s>> 2
                            uint32_t ecx_38 = edx_15 u>> 1
                            int32_t edx_16
                            
                            if (0x3fffffff - ecx_38 u>= edx_15)
                                edx_16 = edx_15 + ecx_38
                            else
                                edx_16 = 0
                            
                            if (edx_16 u< ecx_36 + 1)
                                edx_16 = ecx_36 + 1
                            
                            sub_412f90(arg1 + 0x48, edx_16)
                            xmm1_5 = var_78_3
                        
                        result = result_1
                    
                    float* ecx_40 = *(arg1 + 0x4c)
                    
                    if (ecx_40 != 0)
                        *ecx_40 = xmm0_12
                else
                    int32_t edx_9 = *(arg1 + 0x50)
                    
                    if (ecx_27 == edx_9 && (edx_9 - ecx_27) s>> 2 u< 1)
                        int32_t ecx_29 = (ecx_27 - ebx_3) s>> 2
                        
                        if (0x3fffffff - ecx_29 u< 1)
                            sub_69a551("vector<T> too long")
                            noreturn
                        
                        int32_t edx_11 = (edx_9 - ebx_3) s>> 2
                        uint32_t ecx_32 = edx_11 u>> 1
                        int32_t edx_12
                        
                        if (0x3fffffff - ecx_32 u>= edx_11)
                            edx_12 = edx_11 + ecx_32
                        else
                            edx_12 = 0
                        
                        if (edx_12 u< ecx_29 + 1)
                            edx_12 = ecx_29 + 1
                        
                        sub_412f90(arg1 + 0x48, edx_12)
                        xmm1_5 = var_78_3
                    
                    int32_t* ecx_34 = *(arg1 + 0x4c)
                    
                    if (ecx_34 != 0)
                        *ecx_34 = *(*(arg1 + 0x48) + ((&var_5c - ebx_3) s>> 2 << 2))
                    
                    result = result_1
                
                *(arg1 + 0x4c) += 4
                result += 1
                result_1 = result
            while (result s< i_2)
        
        if (ebp_4 != 0)
            result = j__free(ebp_4)
    
    struct IString::common::CStringWrapper::VTable* const var_2c_2 =
        &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_14_1 u>= 0x10)
        result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
