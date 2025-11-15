// 函数: sub_465530
// 地址: 0x465530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_4c = ebx
int32_t* i = **(arg2 + 0x1c)
*(arg2 + 0x24) = i

if (*(arg2 + 0x20) != 0 && i != *(arg2 + 0x1c))
    void* edi_1 = &i[2]
    
    if (edi_1 != 0)
        do
            int32_t eax_5 = *(edi_1 + 0x30)
            
            if (eax_5 != 3)
                if (eax_5 == 0x1e)
                    if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                        edi_1 = nullptr
                    else
                        void* eax_10 = **(arg2 + 0x24)
                        *(arg2 + 0x24) = eax_10
                        
                        if (*(arg2 + 0x20) == 0 || eax_10 == *(arg2 + 0x1c))
                            edi_1 = nullptr
                        else
                            edi_1 = eax_10 + 8
                
                int32_t eax_11 = *(edi_1 + 0x30)
                char var_2c
                int32_t* var_18_1
                
                if (eax_11 != 0x13 && eax_11 != 0x12)
                    var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    sub_403490(&var_2c, 0x75e588, 0x2b)
                    int32_t var_8_4 = 0
                label_465853:
                    sub_45ebd0(*(ebx + 4), &var_2c, edi_1)
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    i.b = 0
                    goto label_465808
                
                int32_t var_70_2 = 1
                char var_48 = 0x2e
                void* eax_12
                int32_t ecx_3
                eax_12, ecx_3 = sub_42cb30(edi_1, &var_48, arg1)
                
                if (eax_12 != 0xffffffff)
                    var_18_1 = 0xf
                    int32_t var_1c_3 = 0
                    var_2c = 0
                    sub_403490(&var_2c, 0x75e670, 0x29)
                    int32_t var_8_10 = 1
                    goto label_465853
                
                void* eax_16
                
                if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                    eax_16 = nullptr
                else
                    void* eax_15 = **(arg2 + 0x24)
                    *(arg2 + 0x24) = eax_15
                    
                    if (*(arg2 + 0x20) == 0 || eax_15 == *(arg2 + 0x1c))
                        eax_16 = nullptr
                    else
                        eax_16 = eax_15 + 8
                
                if (eax_16 == 0)
                    var_18_1 = 0xf
                    int32_t var_1c_2 = 0
                    var_2c = 0
                    sub_403490(&var_2c, 0x75e650, 0x1c)
                    int32_t var_8_9 = 2
                    goto label_465853
                
                int32_t ebx_2 = *(eax_16 + 0x30)
                int32_t* ecx_13
                
                if (eax_5 == 0x1e && ebx_2 != 0xd && ebx_2 != 6)
                    sub_403360(&var_2c, 0x75e6b4)
                    int32_t var_8_5 = 3
                label_46588a:
                    ecx_13 = *(var_4c + 4)
                label_465892:
                    sub_45ebd0(ecx_13, &var_2c, edi_1)
                    sub_403320(&var_2c)
                    i.b = 0
                    goto label_465808
                
                int32_t var_70_3 = 1
                var_48 = 0x2e
                void* eax_18
                
                if (sub_42cb30(edi_1, &var_48, ecx_3) == 0xffffffff)
                    eax_18 = sub_46eb40(arg3, edi_1)
                else
                    eax_18 =
                        Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(
                        arg3)
                
                eax_18.b = eax_18 != 0
                
                if (eax_18.b != 0)
                    void* eax_19 = sub_46eb40(arg3, edi_1)
                    
                    if (*(eax_19 + 0x38) == 0)
                        sub_403360(&var_2c, 0x75e69c)
                        int32_t var_8_7 = 4
                        goto label_46588a
                    
                    int32_t eax_20 = *(eax_19 + 0x34)
                    
                    if ((ebx_2 != 0xd || eax_20 != 6) && (ebx_2 != 6 || eax_20 != 4))
                        sub_403360(&var_2c, 0x75e5d4)
                        int32_t var_8_6 = 5
                        goto label_46588a
                
                char* eax_22 = sub_46e950(arg3, edi_1, *(eax_16 + 0x34))
                eax_22[0x38] = eax_5 == 0x1e
                
                if (*(eax_16 + 0x30) == 0xc)
                    ebx = var_4c
                    i, arg1 = sub_465960(ebx, arg2, eax_22)
                    
                    if (i.b == 0)
                        sub_403360(&var_2c, 0x75e5b8)
                        int32_t var_8_1 = 6
                        ecx_13 = *(ebx + 4)
                        goto label_465892
                else if (ebx_2 != 6)
                    if (ebx_2 != 0xd)
                        void var_44
                        sub_403360(&var_44, 0x75e78c)
                        int32_t var_8_8 = 9
                        sub_45ebd0(*(var_4c + 4), &var_44, edi_1)
                        sub_403320(&var_44)
                        i.b = 0
                        goto label_465808
                    
                    ebx = var_4c
                    i, arg1 = sub_4669c0(ebx, arg2, eax_22)
                    
                    if (i.b == 0)
                        sub_403360(&var_2c, 0x75e60c)
                        int32_t var_8_3 = 8
                        ecx_13 = *(ebx + 4)
                        goto label_465892
                else
                    ebx = var_4c
                    i, arg1 = sub_465a80(ebx, arg2, eax_22)
                    
                    if (i.b == 0)
                        sub_403360(&var_2c, 0x75e62c)
                        int32_t var_8_2 = 7
                        ecx_13 = *(ebx + 4)
                        goto label_465892
            else
                int32_t ebx_1 = *(arg2 + 0x20)
                void* ecx
                
                if (ebx_1 != 0)
                    ecx = *(arg2 + 0x24)
                
                int32_t* ecx_1
                
                if (ebx_1 == 0 || ecx == *(arg2 + 0x1c))
                    ecx_1 = nullptr
                else
                    ecx_1 = ecx + 8
                
                if (ecx_1[5] u>= 0x10)
                    ecx_1 = *ecx_1
                
                int32_t edi_3 = ecx_1[4]
                int32_t eax_6 = 9
                
                if (edi_3 u< 9)
                    eax_6 = edi_3
                
                i, arg1 = sub_406ac0(eax_6, "#gamename", ecx_1, eax_6)
                
                if (i != 0 || edi_3 u< 9 || edi_3 u> 9 || ebx_1 == 0)
                    ebx = var_4c
                else
                    ebx = var_4c
                    
                    if (*(arg2 + 0x24) != *(arg2 + 0x1c))
                        *(arg2 + 0x24) = **(arg2 + 0x24)
            
            if (*(arg2 + 0x20) == 0)
                break
            
            if (*(arg2 + 0x24) == *(arg2 + 0x1c))
                break
            
            i = **(arg2 + 0x24)
            *(arg2 + 0x24) = i
            
            if (*(arg2 + 0x20) == 0)
                break
            
            if (i == *(arg2 + 0x1c))
                break
            
            edi_1 = &i[2]
        while (i != 0xfffffff8)

i.b = 1
label_465808:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
