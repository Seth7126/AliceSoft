// 函数: sub_481a40
// 地址: 0x481a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ba710
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = arg2
int32_t eax_3 = *(ecx + 4)
*arg3 = 0

if (eax_3 == *(ecx + 8))
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

void* esi = *(arg1 + 4)
int32_t edi = *(arg1 + 8)
int32_t* result

if (esi == edi)
label_481ac2:
    struct _EXCEPTION_REGISTRATION_RECORD* var_34
    sub_505680(&var_34)
    int32_t var_c_1 = 0
    int32_t esi_1 = 0
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x2aaaaaab, *(arg2 + 8) - *(arg2 + 4))
    int32_t edx_2 = edx_1 s>> 5
    int32_t eax_9 = (edx_2 u>> 0x1f) + edx_2
    int32_t var_40 = eax_9
    
    if (eax_9 s> 0)
        do
            if (esi_1 s< 0)
                goto label_481eb5
            
            int32_t eax_10
            int32_t edx_3
            edx_3:eax_10 = muls.dp.d(0x2aaaaaab, *(arg2 + 8) - *(arg2 + 4))
            int32_t edx_4 = edx_3 s>> 5
            
            if ((edx_4 u>> 0x1f) + edx_4 s<= esi_1)
                goto label_481eb5
            
            int32_t eax_15 = esi_1 * 0xc0
            void* eax_16 = eax_15 + *(arg2 + 4)
            
            if (eax_15 == neg.d(*(arg2 + 4)))
                goto label_481eb5
            
            int32_t ecx_9 = *(eax_16 + 4)
            
            if (ecx_9 u<= 0x16)
                char eax_18
                
                switch (ecx_9)
                    case 0
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482140(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 1
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482190(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 2
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_4821e0(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 3
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482230(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 4
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482290(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 5
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482300(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 6
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482390(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 7
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482490(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 8
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_482cb0(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 9
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483580(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0xa
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483660(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0xb
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483770(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0xc
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483920(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0xd
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483b50(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0xe
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483d40(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0xf
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_483fb0(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x10
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_484020(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x11
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_4840c0(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x12
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_484160(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x13
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_484260(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x14
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_484410(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x15
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_484600(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                    case 0x16
                        if (*arg3 != 0)
                            eax_18 = 1
                        else if (sub_4847b0(&var_34, eax_16) == 0)
                            eax_18 = 1
                        else
                            eax_18 = 0
                
                *arg3 = eax_18
            
            esi_1 += 1
        while (esi_1 s< var_40)
    
    void* var_30
    
    if (var_30 == 0)
    label_481eb2:
        *arg3 = 1
    label_481eb5:
        result = nullptr
    else
        void* esi_2 = data_75d4cc
        var_40 = *(var_30 + 8)
        int32_t* var_3c
        sub_42f3d0(esi_2 + 0x2a0, &var_3c, &var_40)
        int32_t* eax_43 = var_3c
        
        if (eax_43 == *(esi_2 + 0x2a0))
            goto label_481eb2
        
        void* esi_3 = eax_43[5]
        
        if (esi_3 == 0)
            goto label_481eb2
        
        result = *(esi_3 + 0xd8)
        
        if (result == 0)
            goto label_481eb2
        
        (**result)(eax_2)
        sub_505830(&var_34)
        sub_4818a0(arg1, result, arg2)
    
    var_34 = &partsengine::CLLSprite::`vftable'
    int32_t var_c_2 = 3
    sub_505830(&var_34)
    var_c_2.b = 2
    struct partsengine::CGraph::VTable* const var_20_1 = &partsengine::CGraph::`vftable'
    int32_t* var_1c
    
    if (var_1c != 0)
        (*(*var_1c + 4))(eax_2)
        int32_t var_1c_1 = 0
    
    var_c_2.b = 1
    struct partsengine::CSurfaceFactory::VTable* const var_28_1 =
        &partsengine::CSurfaceFactory::`vftable'
    int32_t* var_24
    
    if (var_24 != 0)
        (*(*var_24 + 4))(eax_2)
else
    while (sub_4811c0(esi, ecx) == 0)
        ecx = arg2
        esi += 0x14
        
        if (esi == edi)
            goto label_481ac2
    
    result = *(esi + 0x10)
    
    if (result == 0)
        goto label_481ac2
    
    (**result)(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
